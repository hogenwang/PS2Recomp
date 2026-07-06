#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209B70
// Address: 0x209b70 - 0x209cc0
void sub_00209B70_0x209b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209B70_0x209b70");
#endif

    switch (ctx->pc) {
        case 0x209b80u: goto label_209b80;
        case 0x209b98u: goto label_209b98;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bd8u: goto label_209bd8;
        case 0x209c04u: goto label_209c04;
        case 0x209c14u: goto label_209c14;
        case 0x209c30u: goto label_209c30;
        case 0x209c40u: goto label_209c40;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c78u: goto label_209c78;
        case 0x209c90u: goto label_209c90;
        case 0x209ca0u: goto label_209ca0;
        case 0x209cacu: goto label_209cac;
        default: break;
    }

    ctx->pc = 0x209b70u;

    // 0x209b70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x209b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x209b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209b78: 0xc087ba4  jal         func_21EE90
    ctx->pc = 0x209B78u;
    SET_GPR_U32(ctx, 31, 0x209B80u);
    ctx->pc = 0x21EE90u;
    if (runtime->hasFunction(0x21EE90u)) {
        auto targetFn = runtime->lookupFunction(0x21EE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B80u; }
        if (ctx->pc != 0x209B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EE90_0x21ee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B80u; }
        if (ctx->pc != 0x209B80u) { return; }
    }
    ctx->pc = 0x209B80u;
label_209b80:
    // 0x209b80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x209b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209b88: 0x5503000b  bnel        $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x209B88u;
    {
        const bool branch_taken_0x209b88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x209b88) {
            ctx->pc = 0x209B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209B88u;
            // 0x209b8c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209BB8u;
            goto label_209bb8;
        }
    }
    ctx->pc = 0x209B90u;
    // 0x209b90: 0xc087c06  jal         func_21F018
    ctx->pc = 0x209B90u;
    SET_GPR_U32(ctx, 31, 0x209B98u);
    ctx->pc = 0x209B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B90u;
            // 0x209b94: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F018u;
    if (runtime->hasFunction(0x21F018u)) {
        auto targetFn = runtime->lookupFunction(0x21F018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B98u; }
        if (ctx->pc != 0x209B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F018_0x21f018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B98u; }
        if (ctx->pc != 0x209B98u) { return; }
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x209b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x209b9c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x209ba0: 0xc08275c  jal         func_209D70
    ctx->pc = 0x209BA0u;
    SET_GPR_U32(ctx, 31, 0x209BA8u);
    ctx->pc = 0x209BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209BA0u;
            // 0x209ba4: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209D70u;
    if (runtime->hasFunction(0x209D70u)) {
        auto targetFn = runtime->lookupFunction(0x209D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BA8u; }
        if (ctx->pc != 0x209BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209D70_0x209d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BA8u; }
        if (ctx->pc != 0x209BA8u) { return; }
    }
    ctx->pc = 0x209BA8u;
label_209ba8:
    // 0x209ba8: 0xc087bde  jal         func_21EF78
    ctx->pc = 0x209BA8u;
    SET_GPR_U32(ctx, 31, 0x209BB0u);
    ctx->pc = 0x21EF78u;
    if (runtime->hasFunction(0x21EF78u)) {
        auto targetFn = runtime->lookupFunction(0x21EF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BB0u; }
        if (ctx->pc != 0x209BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EF78_0x21ef78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BB0u; }
        if (ctx->pc != 0x209BB0u) { return; }
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x209BB0u;
    {
        const bool branch_taken_0x209bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BB0u;
            // 0x209bb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bb0) {
            ctx->pc = 0x209C7Cu;
            goto label_209c7c;
        }
    }
    ctx->pc = 0x209BB8u;
label_209bb8:
    // 0x209bb8: 0x51030005  beql        $t0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209BB8u;
            // 0x209bbc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209BD0u;
            goto label_209bd0;
        }
    }
    ctx->pc = 0x209BC0u;
    // 0x209bc0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x209bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x209bc4: 0x15030023  bne         $t0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x209BC4u;
    {
        const bool branch_taken_0x209bc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x209bc4) {
            ctx->pc = 0x209C54u;
            goto label_209c54;
        }
    }
    ctx->pc = 0x209BCCu;
    // 0x209bcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_209bd0:
    // 0x209bd0: 0xc087cb2  jal         func_21F2C8
    ctx->pc = 0x209BD0u;
    SET_GPR_U32(ctx, 31, 0x209BD8u);
    ctx->pc = 0x21F2C8u;
    if (runtime->hasFunction(0x21F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x21F2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BD8u; }
        if (ctx->pc != 0x209BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F2C8_0x21f2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BD8u; }
        if (ctx->pc != 0x209BD8u) { return; }
    }
    ctx->pc = 0x209BD8u;
label_209bd8:
    // 0x209bd8: 0x8fab00cc  lw          $t3, 0xCC($sp)
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x209bdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x209be0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x209be4: 0x2484f860  addiu       $a0, $a0, -0x7A0
    ctx->pc = 0x209be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
    // 0x209be8: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x209bec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x209bf0: 0x24e7f880  addiu       $a3, $a3, -0x780
    ctx->pc = 0x209bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965376));
    // 0x209bf4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x209bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x209bf8: 0x27a9001f  addiu       $t1, $sp, 0x1F
    ctx->pc = 0x209bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x209bfc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x209BFCu;
    SET_GPR_U32(ctx, 31, 0x209C04u);
    ctx->pc = 0x209C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209BFCu;
            // 0x209c00: 0x27aa0028  addiu       $t2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C04u; }
        if (ctx->pc != 0x209C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C04u; }
        if (ctx->pc != 0x209C04u) { return; }
    }
    ctx->pc = 0x209C04u;
label_209c04:
    // 0x209c04: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x209c08: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x209c0c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x209C0Cu;
    SET_GPR_U32(ctx, 31, 0x209C14u);
    ctx->pc = 0x209C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C0Cu;
            // 0x209c10: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C14u; }
        if (ctx->pc != 0x209C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C14u; }
        if (ctx->pc != 0x209C14u) { return; }
    }
    ctx->pc = 0x209C14u;
label_209c14:
    // 0x209c14: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x209c18: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x209c1c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x209c20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x209c24: 0x2484a040  addiu       $a0, $a0, -0x5FC0
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942784));
    // 0x209c28: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x209C28u;
    SET_GPR_U32(ctx, 31, 0x209C30u);
    ctx->pc = 0x209C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C28u;
            // 0x209c2c: 0xac434300  sw          $v1, 0x4300($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C30u; }
        if (ctx->pc != 0x209C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C30u; }
        if (ctx->pc != 0x209C30u) { return; }
    }
    ctx->pc = 0x209C30u;
label_209c30:
    // 0x209c30: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x209c34: 0x27a5001f  addiu       $a1, $sp, 0x1F
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x209c38: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x209C38u;
    SET_GPR_U32(ctx, 31, 0x209C40u);
    ctx->pc = 0x209C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C38u;
            // 0x209c3c: 0x2484a020  addiu       $a0, $a0, -0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C40u; }
        if (ctx->pc != 0x209C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C40u; }
        if (ctx->pc != 0x209C40u) { return; }
    }
    ctx->pc = 0x209C40u;
label_209c40:
    // 0x209c40: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209c44: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209C44u;
    SET_GPR_U32(ctx, 31, 0x209C4Cu);
    ctx->pc = 0x209C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C44u;
            // 0x209c48: 0x24849c90  addiu       $a0, $a0, -0x6370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C4Cu; }
        if (ctx->pc != 0x209C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C4Cu; }
        if (ctx->pc != 0x209C4Cu) { return; }
    }
    ctx->pc = 0x209C4Cu;
label_209c4c:
    // 0x209c4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x209C4Cu;
    {
        const bool branch_taken_0x209c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c4c) {
            ctx->pc = 0x209C78u;
            goto label_209c78;
        }
    }
    ctx->pc = 0x209C54u;
label_209c54:
    // 0x209c54: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209C54u;
    {
        const bool branch_taken_0x209c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x209c54) {
            ctx->pc = 0x209C78u;
            goto label_209c78;
        }
    }
    ctx->pc = 0x209C5Cu;
    // 0x209c5c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x209c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x209c60: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x209c60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x209c64: 0x2484f860  addiu       $a0, $a0, -0x7A0
    ctx->pc = 0x209c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
    // 0x209c68: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x209c6c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x209c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x209c70: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x209C70u;
    SET_GPR_U32(ctx, 31, 0x209C78u);
    ctx->pc = 0x209C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C70u;
            // 0x209c74: 0x24e7f8c0  addiu       $a3, $a3, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C78u; }
        if (ctx->pc != 0x209C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C78u; }
        if (ctx->pc != 0x209C78u) { return; }
    }
    ctx->pc = 0x209C78u;
label_209c78:
    // 0x209c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209c7c:
    // 0x209c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x209C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C7Cu;
            // 0x209c80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209C84u;
    // 0x209c84: 0x0  nop
    ctx->pc = 0x209c84u;
    // NOP
    // 0x209c88: 0x0  nop
    ctx->pc = 0x209c88u;
    // NOP
    // 0x209c8c: 0x0  nop
    ctx->pc = 0x209c8cu;
    // NOP
label_209c90:
    // 0x209c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209c98: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x209C98u;
    SET_GPR_U32(ctx, 31, 0x209CA0u);
    ctx->pc = 0x209C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C98u;
            // 0x209c9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (runtime->hasFunction(0x225EF8u)) {
        auto targetFn = runtime->lookupFunction(0x225EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CA0u; }
        if (ctx->pc != 0x209CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225EF8_0x225ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CA0u; }
        if (ctx->pc != 0x209CA0u) { return; }
    }
    ctx->pc = 0x209CA0u;
label_209ca0:
    // 0x209ca0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x209ca4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209CA4u;
    SET_GPR_U32(ctx, 31, 0x209CACu);
    ctx->pc = 0x209CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209CA4u;
            // 0x209ca8: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CACu; }
        if (ctx->pc != 0x209CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CACu; }
        if (ctx->pc != 0x209CACu) { return; }
    }
    ctx->pc = 0x209CACu;
label_209cac:
    // 0x209cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x209CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CB0u;
            // 0x209cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209CB8u;
    // 0x209cb8: 0x0  nop
    ctx->pc = 0x209cb8u;
    // NOP
    // 0x209cbc: 0x0  nop
    ctx->pc = 0x209cbcu;
    // NOP
    ctx->pc = 0x209cc0u;
}
