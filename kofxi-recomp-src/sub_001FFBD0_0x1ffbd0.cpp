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

// Function: sub_001FFBD0
// Address: 0x1ffbd0 - 0x1ffc28
void sub_001FFBD0_0x1ffbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFBD0_0x1ffbd0");
#endif

    switch (ctx->pc) {
        case 0x1ffbecu: goto label_1ffbec;
        default: break;
    }

    ctx->pc = 0x1ffbd0u;

    // 0x1ffbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ffbd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffbd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ffbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ffbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ffbe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffbe4: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FFBE4u;
    SET_GPR_U32(ctx, 31, 0x1FFBECu);
    ctx->pc = 0x1FFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFBE4u;
    // 0x1ffbe8: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FFBE4u, 0x1FFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBECu;
label_1ffbec:
    // 0x1ffbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ffbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFBF0u;
    {
        const bool branch_taken_0x1ffbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF0u;
        // 0x1ffbf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf0) {
            ctx->pc = 0x1FFC10u;
            goto label_1ffc10;
        }
    }
    ctx->pc = 0x1FFBF8u;
    // 0x1ffbf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffbfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc04: 0x807fc92  j           func_1FF248
    ctx->pc = 0x1FFC04u;
    ctx->pc = 0x1FFC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC04u;
    // 0x1ffc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF248u;
    sub_001FF248_0x1ff248(rdram, ctx, runtime); return;
    ctx->pc = 0x1FFC0Cu;
    // 0x1ffc0c: 0x0  nop
    ctx->pc = 0x1ffc0cu;
    // NOP
label_1ffc10:
    // 0x1ffc10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffc14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffc14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffc18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC1Cu;
        // 0x1ffc20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFC24u;
    // 0x1ffc24: 0x0  nop
    ctx->pc = 0x1ffc24u;
    // NOP
    if (ctx->pc == 0x1ffc24u) { ctx->pc = 0x1ffc28u; }
}
