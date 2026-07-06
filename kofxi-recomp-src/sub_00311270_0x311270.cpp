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

// Function: sub_00311270
// Address: 0x311270 - 0x3112f0
void sub_00311270_0x311270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311270_0x311270");
#endif

    switch (ctx->pc) {
        case 0x31128cu: goto label_31128c;
        case 0x3112a4u: goto label_3112a4;
        case 0x3112bcu: goto label_3112bc;
        default: break;
    }

    ctx->pc = 0x311270u;

    // 0x311270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x311270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x311274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x311274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x311278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31127c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x311280: 0x90900001  lbu         $s0, 0x1($a0)
    ctx->pc = 0x311280u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x311284: 0xc063c7c  jal         func_18F1F0
    ctx->pc = 0x311284u;
    SET_GPR_U32(ctx, 31, 0x31128Cu);
    ctx->pc = 0x311288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311284u;
    // 0x311288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1F0u, 0x311284u, 0x31128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31128Cu;
label_31128c:
    // 0x31128c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x31128cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x311290: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x311290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x311294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311298: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x311298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x31129c: 0x24631df0  addiu       $v1, $v1, 0x1DF0
    ctx->pc = 0x31129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7664));
    // 0x3112a0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3112a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3112a4:
    // 0x3112a4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3112a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3112a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3112a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3112ac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3112ACu;
    {
        const bool branch_taken_0x3112ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3112ac) {
            ctx->pc = 0x3112C0u;
            goto label_3112c0;
        }
    }
    ctx->pc = 0x3112B4u;
    // 0x3112b4: 0xc063c7c  jal         func_18F1F0
    ctx->pc = 0x3112B4u;
    SET_GPR_U32(ctx, 31, 0x3112BCu);
    ctx->pc = 0x18F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1F0u, 0x3112B4u, 0x3112BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3112BCu;
label_3112bc:
    // 0x3112bc: 0x0  nop
    ctx->pc = 0x3112bcu;
    // NOP
label_3112c0:
    // 0x3112c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3112c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3112c4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x3112c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3112c8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3112C8u;
    {
        const bool branch_taken_0x3112c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3112CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112C8u;
        // 0x3112cc: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3112c8) {
            ctx->pc = 0x3112A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3112a4;
        }
    }
    ctx->pc = 0x3112D0u;
    // 0x3112d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3112d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3112d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3112d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3112d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3112d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3112dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3112DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3112DCu;
        // 0x3112e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3112DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3112E4u;
    // 0x3112e4: 0x0  nop
    ctx->pc = 0x3112e4u;
    // NOP
    // 0x3112e8: 0x0  nop
    ctx->pc = 0x3112e8u;
    // NOP
    // 0x3112ec: 0x0  nop
    ctx->pc = 0x3112ecu;
    // NOP
    if (ctx->pc == 0x3112ecu) { ctx->pc = 0x3112f0u; }
}
