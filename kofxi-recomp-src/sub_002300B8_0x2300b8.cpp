#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002300B8
// Address: 0x2300b8 - 0x230128
void sub_002300B8_0x2300b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300B8_0x2300b8");
#endif

    switch (ctx->pc) {
        case 0x2300b8u: goto label_2300b8;
        case 0x2300bcu: goto label_2300bc;
        case 0x2300c0u: goto label_2300c0;
        case 0x2300c4u: goto label_2300c4;
        case 0x2300c8u: goto label_2300c8;
        case 0x2300ccu: goto label_2300cc;
        case 0x2300d0u: goto label_2300d0;
        case 0x2300d4u: goto label_2300d4;
        case 0x2300d8u: goto label_2300d8;
        case 0x2300dcu: goto label_2300dc;
        case 0x2300e0u: goto label_2300e0;
        case 0x2300e4u: goto label_2300e4;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300ecu: goto label_2300ec;
        case 0x2300f0u: goto label_2300f0;
        case 0x2300f4u: goto label_2300f4;
        case 0x2300f8u: goto label_2300f8;
        case 0x2300fcu: goto label_2300fc;
        case 0x230100u: goto label_230100;
        case 0x230104u: goto label_230104;
        case 0x230108u: goto label_230108;
        case 0x23010cu: goto label_23010c;
        case 0x230110u: goto label_230110;
        case 0x230114u: goto label_230114;
        case 0x230118u: goto label_230118;
        case 0x23011cu: goto label_23011c;
        case 0x230120u: goto label_230120;
        case 0x230124u: goto label_230124;
        default: break;
    }

    ctx->pc = 0x2300b8u;

label_2300b8:
    // 0x2300b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2300bc:
    // 0x2300bc: 0x51a3a  dsrl        $v1, $a1, 8
    ctx->pc = 0x2300bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 8);
label_2300c0:
    // 0x2300c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2300c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2300c4:
    // 0x2300c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2300c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2300c8:
    // 0x2300c8: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2300c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2300cc:
    // 0x2300cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2300d0:
    if (ctx->pc == 0x2300D0u) {
        ctx->pc = 0x2300D0u;
            // 0x2300d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2300D4u;
        goto label_2300d4;
    }
    ctx->pc = 0x2300CCu;
    {
        const bool branch_taken_0x2300cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2300D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300CCu;
            // 0x2300d0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300cc) {
            ctx->pc = 0x2300E4u;
            goto label_2300e4;
        }
    }
    ctx->pc = 0x2300D4u;
label_2300d4:
    // 0x2300d4: 0xc08d56a  jal         func_2355A8
label_2300d8:
    if (ctx->pc == 0x2300D8u) {
        ctx->pc = 0x2300DCu;
        goto label_2300dc;
    }
    ctx->pc = 0x2300D4u;
    SET_GPR_U32(ctx, 31, 0x2300DCu);
    ctx->pc = 0x2355A8u;
    if (runtime->hasFunction(0x2355A8u)) {
        auto targetFn = runtime->lookupFunction(0x2355A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300DCu; }
        if (ctx->pc != 0x2300DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002355A8_0x2355a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300DCu; }
        if (ctx->pc != 0x2300DCu) { return; }
    }
    ctx->pc = 0x2300DCu;
label_2300dc:
    // 0x2300dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2300e0:
    if (ctx->pc == 0x2300E0u) {
        ctx->pc = 0x2300E0u;
            // 0x2300e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2300E4u;
        goto label_2300e4;
    }
    ctx->pc = 0x2300DCu;
    {
        const bool branch_taken_0x2300dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2300E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300DCu;
            // 0x2300e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300dc) {
            ctx->pc = 0x230120u;
            goto label_230120;
        }
    }
    ctx->pc = 0x2300E4u;
label_2300e4:
    // 0x2300e4: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2300e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2300e8:
    // 0x2300e8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2300ec:
    if (ctx->pc == 0x2300ECu) {
        ctx->pc = 0x2300ECu;
            // 0x2300ec: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x2300F0u;
        goto label_2300f0;
    }
    ctx->pc = 0x2300E8u;
    {
        const bool branch_taken_0x2300e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2300e8) {
            ctx->pc = 0x2300ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2300E8u;
            // 0x2300ec: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230104u;
            goto label_230104;
        }
    }
    ctx->pc = 0x2300F0u;
label_2300f0:
    // 0x2300f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2300f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2300f4:
    // 0x2300f4: 0xc090d50  jal         func_243540
label_2300f8:
    if (ctx->pc == 0x2300F8u) {
        ctx->pc = 0x2300F8u;
            // 0x2300f8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2300FCu;
        goto label_2300fc;
    }
    ctx->pc = 0x2300F4u;
    SET_GPR_U32(ctx, 31, 0x2300FCu);
    ctx->pc = 0x2300F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2300F4u;
            // 0x2300f8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243540u;
    if (runtime->hasFunction(0x243540u)) {
        auto targetFn = runtime->lookupFunction(0x243540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300FCu; }
        if (ctx->pc != 0x2300FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243540_0x243540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300FCu; }
        if (ctx->pc != 0x2300FCu) { return; }
    }
    ctx->pc = 0x2300FCu;
label_2300fc:
    // 0x2300fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_230100:
    if (ctx->pc == 0x230100u) {
        ctx->pc = 0x230100u;
            // 0x230100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x230104u;
        goto label_230104;
    }
    ctx->pc = 0x2300FCu;
    {
        const bool branch_taken_0x2300fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300FCu;
            // 0x230100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2300fc) {
            ctx->pc = 0x230120u;
            goto label_230120;
        }
    }
    ctx->pc = 0x230104u;
label_230104:
    // 0x230104: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x230104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_230108:
    // 0x230108: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x230108u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_23010c:
    // 0x23010c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x23010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_230110:
    // 0x230110: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_230114:
    // 0x230114: 0x40f809  jalr        $v0
label_230118:
    if (ctx->pc == 0x230118u) {
        ctx->pc = 0x230118u;
            // 0x230118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23011Cu;
        goto label_23011c;
    }
    ctx->pc = 0x230114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23011Cu);
        ctx->pc = 0x230118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230114u;
            // 0x230118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23011Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23011Cu; }
            if (ctx->pc != 0x23011Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23011Cu;
label_23011c:
    // 0x23011c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23011cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230120:
    // 0x230120: 0x3e00008  jr          $ra
label_230124:
    if (ctx->pc == 0x230124u) {
        ctx->pc = 0x230124u;
            // 0x230124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x230128u;
        goto label_fallthrough_0x230120;
    }
    ctx->pc = 0x230120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230120u;
            // 0x230124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x230120:
    ctx->pc = 0x230128u;
    ctx->pc = 0x230128u;
}
