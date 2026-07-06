#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156910
// Address: 0x156910 - 0x156a90
void sub_00156910_0x156910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156910_0x156910");
#endif

    switch (ctx->pc) {
        case 0x156944u: goto label_156944;
        case 0x15695cu: goto label_15695c;
        case 0x156970u: goto label_156970;
        case 0x15697cu: goto label_15697c;
        case 0x156990u: goto label_156990;
        case 0x1569f4u: goto label_1569f4;
        case 0x156a0cu: goto label_156a0c;
        case 0x156a44u: goto label_156a44;
        case 0x156a50u: goto label_156a50;
        case 0x156a58u: goto label_156a58;
        default: break;
    }

    ctx->pc = 0x156910u;

    // 0x156910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156914: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x156914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x156918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15691c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15691Cu;
    {
        const bool branch_taken_0x15691c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x156920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15691Cu;
            // 0x156920: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15691c) {
            ctx->pc = 0x15694Cu;
            goto label_15694c;
        }
    }
    ctx->pc = 0x156924u;
    // 0x156924: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156928: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156928u;
    {
        const bool branch_taken_0x156928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156928) {
            ctx->pc = 0x15692Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156928u;
            // 0x15692c: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156938u;
            goto label_156938;
        }
    }
    ctx->pc = 0x156930u;
    // 0x156930: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156930u;
    {
        const bool branch_taken_0x156930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156930u;
            // 0x156934: 0x3c04ff00  lui         $a0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156930) {
            ctx->pc = 0x156964u;
            goto label_156964;
        }
    }
    ctx->pc = 0x156938u;
label_156938:
    // 0x156938: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15693c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x15693Cu;
    SET_GPR_U32(ctx, 31, 0x156944u);
    ctx->pc = 0x156940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15693Cu;
            // 0x156940: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156944u; }
        if (ctx->pc != 0x156944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156944u; }
        if (ctx->pc != 0x156944u) { return; }
    }
    ctx->pc = 0x156944u;
label_156944:
    // 0x156944: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x156944u;
    {
        const bool branch_taken_0x156944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156944u;
            // 0x156948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156944) {
            ctx->pc = 0x156974u;
            goto label_156974;
        }
    }
    ctx->pc = 0x15694Cu;
label_15694c:
    // 0x15694c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156954: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x156954u;
    SET_GPR_U32(ctx, 31, 0x15695Cu);
    ctx->pc = 0x156958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156954u;
            // 0x156958: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15695Cu; }
        if (ctx->pc != 0x15695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15695Cu; }
        if (ctx->pc != 0x15695Cu) { return; }
    }
    ctx->pc = 0x15695Cu;
label_15695c:
    // 0x15695c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15695Cu;
    {
        const bool branch_taken_0x15695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15695c) {
            ctx->pc = 0x156970u;
            goto label_156970;
        }
    }
    ctx->pc = 0x156964u;
label_156964:
    // 0x156964: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156968: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x156968u;
    SET_GPR_U32(ctx, 31, 0x156970u);
    ctx->pc = 0x15696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156968u;
            // 0x15696c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156970u; }
        if (ctx->pc != 0x156970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156970u; }
        if (ctx->pc != 0x156970u) { return; }
    }
    ctx->pc = 0x156970u;
label_156970:
    // 0x156970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156974:
    // 0x156974: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x156974u;
    SET_GPR_U32(ctx, 31, 0x15697Cu);
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15697Cu; }
        if (ctx->pc != 0x15697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15697Cu; }
        if (ctx->pc != 0x15697Cu) { return; }
    }
    ctx->pc = 0x15697Cu;
label_15697c:
    // 0x15697c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156980: 0x3e00008  jr          $ra
    ctx->pc = 0x156980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156980u;
            // 0x156984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156988u;
    // 0x156988: 0x0  nop
    ctx->pc = 0x156988u;
    // NOP
    // 0x15698c: 0x0  nop
    ctx->pc = 0x15698cu;
    // NOP
label_156990:
    // 0x156990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156994: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x156998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15699c: 0x24e74080  addiu       $a3, $a3, 0x4080
    ctx->pc = 0x15699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16512));
    // 0x1569a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1569a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1569a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1569a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1569a8: 0x8ca300dc  lw          $v1, 0xDC($a1)
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x1569ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1569acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569b0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1569b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1569b4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1569b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1569b8: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x1569b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1569bc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1569bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1569c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1569c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1569c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1569c8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1569cc: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1569CCu;
    {
        const bool branch_taken_0x1569cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1569D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569CCu;
            // 0x1569d0: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569cc) {
            ctx->pc = 0x1569FCu;
            goto label_1569fc;
        }
    }
    ctx->pc = 0x1569D4u;
    // 0x1569d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1569d8: 0x50c20003  beql        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1569D8u;
    {
        const bool branch_taken_0x1569d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1569d8) {
            ctx->pc = 0x1569DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1569D8u;
            // 0x1569dc: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1569E8u;
            goto label_1569e8;
        }
    }
    ctx->pc = 0x1569E0u;
    // 0x1569e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1569E0u;
    {
        const bool branch_taken_0x1569e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569E0u;
            // 0x1569e4: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569e0) {
            ctx->pc = 0x156A18u;
            goto label_156a18;
        }
    }
    ctx->pc = 0x1569E8u;
label_1569e8:
    // 0x1569e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1569e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569ec: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1569ECu;
    SET_GPR_U32(ctx, 31, 0x1569F4u);
    ctx->pc = 0x1569F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1569ECu;
            // 0x1569f0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F4u; }
        if (ctx->pc != 0x1569F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F4u; }
        if (ctx->pc != 0x1569F4u) { return; }
    }
    ctx->pc = 0x1569F4u;
label_1569f4:
    // 0x1569f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1569F4u;
    {
        const bool branch_taken_0x1569f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569F4u;
            // 0x1569f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569f4) {
            ctx->pc = 0x156A48u;
            goto label_156a48;
        }
    }
    ctx->pc = 0x1569FCu;
label_1569fc:
    // 0x1569fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1569fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156a00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a04: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x156A04u;
    SET_GPR_U32(ctx, 31, 0x156A0Cu);
    ctx->pc = 0x156A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A04u;
            // 0x156a08: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A0Cu; }
        if (ctx->pc != 0x156A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A0Cu; }
        if (ctx->pc != 0x156A0Cu) { return; }
    }
    ctx->pc = 0x156A0Cu;
label_156a0c:
    // 0x156a0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x156a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x156a10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156A10u;
    {
        const bool branch_taken_0x156a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A10u;
            // 0x156a14: 0xa6020266  sh          $v0, 0x266($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156a10) {
            ctx->pc = 0x156A44u;
            goto label_156a44;
        }
    }
    ctx->pc = 0x156A18u;
label_156a18:
    // 0x156a18: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x156a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x156a1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x156a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x156a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a24: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x156a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x156a28: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x156a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x156a2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x156a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x156a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156a38: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x156a3c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x156A3Cu;
    SET_GPR_U32(ctx, 31, 0x156A44u);
    ctx->pc = 0x156A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A3Cu;
            // 0x156a40: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A44u; }
        if (ctx->pc != 0x156A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A44u; }
        if (ctx->pc != 0x156A44u) { return; }
    }
    ctx->pc = 0x156A44u;
label_156a44:
    // 0x156a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156a48:
    // 0x156a48: 0xc0549ec  jal         func_1527B0
    ctx->pc = 0x156A48u;
    SET_GPR_U32(ctx, 31, 0x156A50u);
    ctx->pc = 0x1527B0u;
    if (runtime->hasFunction(0x1527B0u)) {
        auto targetFn = runtime->lookupFunction(0x1527B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A50u; }
        if (ctx->pc != 0x156A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001527B0_0x1527b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A50u; }
        if (ctx->pc != 0x156A50u) { return; }
    }
    ctx->pc = 0x156A50u;
label_156a50:
    // 0x156a50: 0xc055914  jal         func_156450
    ctx->pc = 0x156A50u;
    SET_GPR_U32(ctx, 31, 0x156A58u);
    ctx->pc = 0x156A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A50u;
            // 0x156a54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156450u;
    if (runtime->hasFunction(0x156450u)) {
        auto targetFn = runtime->lookupFunction(0x156450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A58u; }
        if (ctx->pc != 0x156A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156450_0x156450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A58u; }
        if (ctx->pc != 0x156A58u) { return; }
    }
    ctx->pc = 0x156A58u;
label_156a58:
    // 0x156a58: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x156a5c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x156a60: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
    // 0x156a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x156a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156a68: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x156a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x156a6c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x156a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x156a70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x156a74: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x156a74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156a7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x156a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x156a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a88: 0x3e00008  jr          $ra
    ctx->pc = 0x156A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A88u;
            // 0x156a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156A90u;
    ctx->pc = 0x156a90u;
}
