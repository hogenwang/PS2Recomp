#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001530C0
// Address: 0x1530c0 - 0x153150
void sub_001530C0_0x1530c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530C0_0x1530c0");
#endif

    switch (ctx->pc) {
        case 0x1530e0u: goto label_1530e0;
        default: break;
    }

    ctx->pc = 0x1530c0u;

    // 0x1530c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1530c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1530c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1530c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1530c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1530cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1530ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1530d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1530d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1530d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530d8: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x1530D8u;
    SET_GPR_U32(ctx, 31, 0x1530E0u);
    ctx->pc = 0x1530DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530D8u;
    // 0x1530dc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x1530D8u, 0x1530E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530E0u;
label_1530e0:
    // 0x1530e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1530e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1530e4: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1530e8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1530e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1530ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1530ECu;
    {
        const bool branch_taken_0x1530ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1530ec) {
            ctx->pc = 0x1530F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1530ECu;
            // 0x1530f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153138u;
            goto label_153138;
        }
    }
    ctx->pc = 0x1530F4u;
    // 0x1530f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1530f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1530f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1530fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x153100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x153100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x153104: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153108: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x153108u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15310c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x15310cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x153110: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x153110u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x153114: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x153114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x153118: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15311c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x15311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x153120: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x153124: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x153128: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15312c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x15312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x153130: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x153130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x153134: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x153134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_153138:
    // 0x153138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15313c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15313cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153144: 0x3e00008  jr          $ra
    ctx->pc = 0x153144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153144u;
        // 0x153148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15314Cu;
    // 0x15314c: 0x0  nop
    ctx->pc = 0x15314cu;
    // NOP
    if (ctx->pc == 0x15314cu) { ctx->pc = 0x153150u; }
}
