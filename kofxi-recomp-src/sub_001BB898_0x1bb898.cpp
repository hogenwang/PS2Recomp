#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB898
// Address: 0x1bb898 - 0x1bb930
void sub_001BB898_0x1bb898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB898_0x1bb898");
#endif

    switch (ctx->pc) {
        case 0x1bb904u: goto label_1bb904;
        default: break;
    }

    ctx->pc = 0x1bb898u;

    // 0x1bb898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb89c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1bb89cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb8a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1bb8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1bb8a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bb8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1bb8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1bb8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8b0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BB8B0u;
    {
        const bool branch_taken_0x1bb8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8B0u;
            // 0x1bb8b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8b0) {
            ctx->pc = 0x1BB920u;
            goto label_1bb920;
        }
    }
    ctx->pc = 0x1BB8B8u;
    // 0x1bb8b8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1bb8b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bb8bc: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1bb8bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bb8c0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x1bb8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1bb8c4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1bb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1bb8c8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bb8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bb8cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1bb8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1bb8d0: 0x54670014  bnel        $v1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BB8D0u;
    {
        const bool branch_taken_0x1bb8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1bb8d0) {
            ctx->pc = 0x1BB8D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8D0u;
            // 0x1bb8d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB924u;
            goto label_1bb924;
        }
    }
    ctx->pc = 0x1BB8D8u;
    // 0x1bb8d8: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1bb8dc: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x1bb8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bb8e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1bb8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bb8e4: 0x27a70012  addiu       $a3, $sp, 0x12
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
    // 0x1bb8e8: 0x27a80013  addiu       $t0, $sp, 0x13
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 19));
    // 0x1bb8ec: 0x27a90014  addiu       $t1, $sp, 0x14
    ctx->pc = 0x1bb8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1bb8f0: 0x27aa0015  addiu       $t2, $sp, 0x15
    ctx->pc = 0x1bb8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 21));
    // 0x1bb8f4: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x1bb8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bb8f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bb8fc: 0xc06b540  jal         func_1AD500
    ctx->pc = 0x1BB8FCu;
    SET_GPR_U32(ctx, 31, 0x1BB904u);
    ctx->pc = 0x1BB900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8FCu;
            // 0x1bb900: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD500u;
    if (runtime->hasFunction(0x1AD500u)) {
        auto targetFn = runtime->lookupFunction(0x1AD500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB904u; }
        if (ctx->pc != 0x1BB904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD500_0x1ad500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB904u; }
        if (ctx->pc != 0x1BB904u) { return; }
    }
    ctx->pc = 0x1BB904u;
label_1bb904:
    // 0x1bb904: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB904u;
    {
        const bool branch_taken_0x1bb904 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB904u;
            // 0x1bb908: 0x87a30010  lh          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb904) {
            ctx->pc = 0x1BB918u;
            goto label_1bb918;
        }
    }
    ctx->pc = 0x1BB90Cu;
    // 0x1bb90c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB90Cu;
            // 0x1bb910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB920u;
            goto label_1bb920;
        }
    }
    ctx->pc = 0x1BB914u;
    // 0x1bb914: 0x0  nop
    ctx->pc = 0x1bb914u;
    // NOP
label_1bb918:
    // 0x1bb918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb91c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bb91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bb920:
    // 0x1bb920: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1bb920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb924:
    // 0x1bb924: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1bb924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bb928: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB928u;
            // 0x1bb92c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB930u;
    ctx->pc = 0x1bb930u;
}
