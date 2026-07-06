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

// Function: sub_0010C000
// Address: 0x10c000 - 0x10c0a0
void sub_0010C000_0x10c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C000_0x10c000");
#endif

    switch (ctx->pc) {
        case 0x10c010u: goto label_10c010;
        case 0x10c06cu: goto label_10c06c;
        default: break;
    }

    ctx->pc = 0x10c000u;

    // 0x10c000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c008: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10C008u;
    SET_GPR_U32(ctx, 31, 0x10C010u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10C008u, 0x10C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C010u;
label_10c010:
    // 0x10c010: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c014: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x10c014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x10c018: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x10c018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x10c01c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x10c01cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x10c020: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x10c024: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x10c024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x10c028: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c02c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10c030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10c034: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x10c038: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10c038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x10c03c: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x10c03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x10c040: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10c040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x10c044: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x10c044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x10c048: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10c048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x10c04c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10c04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10c050: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10c054: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10c054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10c058: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x10c058u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x10c05c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C05Cu;
    {
        const bool branch_taken_0x10c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C05Cu;
        // 0x10c060: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c05c) {
            ctx->pc = 0x10C070u;
            goto label_10c070;
        }
    }
    ctx->pc = 0x10C064u;
    // 0x10c064: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10C064u;
    SET_GPR_U32(ctx, 31, 0x10C06Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10C064u, 0x10C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C06Cu;
label_10c06c:
    // 0x10c06c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10c070:
    // 0x10c070: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c074: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10c074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10c078: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10c078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10c07c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c07cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10c080: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c084: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10c084u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10c088: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c08c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x10c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x10c090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c094: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10c094u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x10c098: 0x3e00008  jr          $ra
    ctx->pc = 0x10C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C098u;
        // 0x10c09c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C0A0u;
}
