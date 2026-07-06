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

// Function: sub_00302AE0
// Address: 0x302ae0 - 0x302b40
void sub_00302AE0_0x302ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302AE0_0x302ae0");
#endif

    switch (ctx->pc) {
        case 0x302b28u: goto label_302b28;
        default: break;
    }

    ctx->pc = 0x302ae0u;

    // 0x302ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302ae4: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302aec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x302aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302af0: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x302af0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302af4: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x302af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x302af8: 0x94880006  lhu         $t0, 0x6($a0)
    ctx->pc = 0x302af8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302afc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x302afcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b00: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x302b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x302b04: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x302b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x302b08: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302b0c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302b0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302b10: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302b14: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302b14u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302b18: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302b18u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302b1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b20: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302B20u;
    SET_GPR_U32(ctx, 31, 0x302B28u);
    ctx->pc = 0x302B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B20u;
    // 0x302b24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302B20u, 0x302B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B28u;
label_302b28:
    // 0x302b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x302B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302B2Cu;
        // 0x302b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302B34u;
    // 0x302b34: 0x0  nop
    ctx->pc = 0x302b34u;
    // NOP
    // 0x302b38: 0x0  nop
    ctx->pc = 0x302b38u;
    // NOP
    // 0x302b3c: 0x0  nop
    ctx->pc = 0x302b3cu;
    // NOP
}
