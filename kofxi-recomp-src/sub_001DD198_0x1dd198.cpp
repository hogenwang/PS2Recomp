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

// Function: sub_001DD198
// Address: 0x1dd198 - 0x1dd250
void sub_001DD198_0x1dd198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD198_0x1dd198");
#endif

    switch (ctx->pc) {
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1f0u: goto label_1dd1f0;
        default: break;
    }

    ctx->pc = 0x1dd198u;

    // 0x1dd198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd19c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1a0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1dd1a4: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1dd1a8: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1dd1ac: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dd1b0: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1dd1b4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1dd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1dd1b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1dd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1dd1bc: 0xc0773b6  jal         func_1DCED8
    ctx->pc = 0x1DD1BCu;
    SET_GPR_U32(ctx, 31, 0x1DD1C4u);
    ctx->pc = 0x1DD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1BCu;
    // 0x1dd1c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCED8u, 0x1DD1BCu, 0x1DD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1C4u;
label_1dd1c4:
    // 0x1dd1c4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1dd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1dd1c8: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1dd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1dd1cc: 0xc077404  jal         func_1DD010
    ctx->pc = 0x1DD1CCu;
    SET_GPR_U32(ctx, 31, 0x1DD1D4u);
    ctx->pc = 0x1DD1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1CCu;
    // 0x1dd1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD010u, 0x1DD1CCu, 0x1DD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1D4u;
label_1dd1d4:
    // 0x1dd1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dd1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dd1dc: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1dd1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dd1e0: 0xc077458  jal         func_1DD160
    ctx->pc = 0x1DD1E0u;
    SET_GPR_U32(ctx, 31, 0x1DD1E8u);
    ctx->pc = 0x1DD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1E0u;
    // 0x1dd1e4: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD160u, 0x1DD1E0u, 0x1DD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1E8u;
label_1dd1e8:
    // 0x1dd1e8: 0xc077464  jal         func_1DD190
    ctx->pc = 0x1DD1E8u;
    SET_GPR_U32(ctx, 31, 0x1DD1F0u);
    ctx->pc = 0x1DD1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1E8u;
    // 0x1dd1ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD190u, 0x1DD1E8u, 0x1DD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1F0u;
label_1dd1f0:
    // 0x1dd1f0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd1f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dd1f8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dd1fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd200: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd204: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1dd204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd208: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1dd208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1dd20c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x1dd20cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd210: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1dd214: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1dd218: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1dd21c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1dd21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dd220: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1dd220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1dd224: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1dd228: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd22c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1dd230: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1dd230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1dd238: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1dd238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dd23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd244: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x1dd244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1dd248: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD248u;
        // 0x1dd24c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD250u;
}
