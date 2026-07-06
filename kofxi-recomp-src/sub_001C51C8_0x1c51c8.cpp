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

// Function: sub_001C51C8
// Address: 0x1c51c8 - 0x1c5220
void sub_001C51C8_0x1c51c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C51C8_0x1c51c8");
#endif

    switch (ctx->pc) {
        case 0x1c51ecu: goto label_1c51ec;
        case 0x1c51f8u: goto label_1c51f8;
        default: break;
    }

    ctx->pc = 0x1c51c8u;

    // 0x1c51c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51cc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c51d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c51d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c51d4: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x1c51d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c51d8: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x1c51d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x1c51dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c51e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c51e4: 0xc07146c  jal         func_1C51B0
    ctx->pc = 0x1C51E4u;
    SET_GPR_U32(ctx, 31, 0x1C51ECu);
    ctx->pc = 0x1C51E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E4u;
    // 0x1c51e8: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51B0u, 0x1C51E4u, 0x1C51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51ECu;
label_1c51ec:
    // 0x1c51ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c51ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f0: 0xc07146c  jal         func_1C51B0
    ctx->pc = 0x1C51F0u;
    SET_GPR_U32(ctx, 31, 0x1C51F8u);
    ctx->pc = 0x1C51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F0u;
    // 0x1c51f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C51B0u, 0x1C51F0u, 0x1C51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F8u;
label_1c51f8:
    // 0x1c51f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c51f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51fc: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1c51fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1c5200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5204: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x1c5204u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1c5208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c520c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c520cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5214: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C521Cu;
    // 0x1c521c: 0x0  nop
    ctx->pc = 0x1c521cu;
    // NOP
}
