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

// Function: sub_00281BC8
// Address: 0x281bc8 - 0x281c30
void sub_00281BC8_0x281bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281BC8_0x281bc8");
#endif

    switch (ctx->pc) {
        case 0x281be0u: goto label_281be0;
        case 0x281c04u: goto label_281c04;
        default: break;
    }

    ctx->pc = 0x281bc8u;

    // 0x281bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281bd8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x281BD8u;
    SET_GPR_U32(ctx, 31, 0x281BE0u);
    ctx->pc = 0x281BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BD8u;
    // 0x281bdc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x281BD8u, 0x281BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BE0u;
label_281be0:
    // 0x281be0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x281be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281be4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x281BE4u;
    {
        const bool branch_taken_0x281be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281be4) {
            ctx->pc = 0x281BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281BE4u;
            // 0x281be8: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C0Cu;
            goto label_281c0c;
        }
    }
    ctx->pc = 0x281BECu;
    // 0x281bec: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x281becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x281bf0: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x281bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x281bf4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x281bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x281bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bfc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x281BFCu;
    SET_GPR_U32(ctx, 31, 0x281C04u);
    ctx->pc = 0x281C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281BFCu;
    // 0x281c00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x281BFCu, 0x281C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C04u;
label_281c04:
    // 0x281c04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x281C04u;
    {
        const bool branch_taken_0x281c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C04u;
        // 0x281c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c04) {
            ctx->pc = 0x281C1Cu;
            goto label_281c1c;
        }
    }
    ctx->pc = 0x281C0Cu;
label_281c0c:
    // 0x281c0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x281c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x281c14: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x281c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x281c18: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x281c18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
label_281c1c:
    // 0x281c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c24: 0x3e00008  jr          $ra
    ctx->pc = 0x281C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C24u;
        // 0x281c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281C2Cu;
    // 0x281c2c: 0x0  nop
    ctx->pc = 0x281c2cu;
    // NOP
}
