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

// Function: sub_0010C590
// Address: 0x10c590 - 0x10c608
void sub_0010C590_0x10c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C590_0x10c590");
#endif

    switch (ctx->pc) {
        case 0x10c5a4u: goto label_10c5a4;
        default: break;
    }

    ctx->pc = 0x10c590u;

    // 0x10c590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c59c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10C59Cu;
    SET_GPR_U32(ctx, 31, 0x10C5A4u);
    ctx->pc = 0x10C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C59Cu;
    // 0x10c5a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10C59Cu, 0x10C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5A4u;
label_10c5a4:
    // 0x10c5a4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c5a8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c5ac: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10c5acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10c5b0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10c5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10c5b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10c5b8: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10c5b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10c5bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c5c0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10c5c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c5c8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10c5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10c5cc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c5d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10c5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10c5d4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x10c5d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c5dc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10c5e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c5e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C5E4u;
    {
        const bool branch_taken_0x10c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5E4u;
        // 0x10c5e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5e4) {
            ctx->pc = 0x10C5F8u;
            goto label_10c5f8;
        }
    }
    ctx->pc = 0x10C5ECu;
    // 0x10c5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c5f0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10C5F0u;
    ctx->pc = 0x10C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5F0u;
    // 0x10c5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10C5F8u;
label_10c5f8:
    // 0x10c5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5FCu;
        // 0x10c600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C604u;
    // 0x10c604: 0x0  nop
    ctx->pc = 0x10c604u;
    // NOP
    if (ctx->pc == 0x10c604u) { ctx->pc = 0x10c608u; }
}
