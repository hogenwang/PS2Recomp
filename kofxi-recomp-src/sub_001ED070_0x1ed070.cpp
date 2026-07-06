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

// Function: sub_001ED070
// Address: 0x1ed070 - 0x1ed128
void sub_001ED070_0x1ed070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED070_0x1ed070");
#endif

    switch (ctx->pc) {
        case 0x1ed094u: goto label_1ed094;
        case 0x1ed0a8u: goto label_1ed0a8;
        case 0x1ed0bcu: goto label_1ed0bc;
        case 0x1ed0d0u: goto label_1ed0d0;
        case 0x1ed0e4u: goto label_1ed0e4;
        case 0x1ed0f8u: goto label_1ed0f8;
        case 0x1ed10cu: goto label_1ed10c;
        default: break;
    }

    ctx->pc = 0x1ed070u;

    // 0x1ed070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed074: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1ed074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1ed078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed07c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ed07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed080: 0x2445f7d8  addiu       $a1, $v0, -0x828
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965208));
    // 0x1ed084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ed08c: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED08Cu;
    SET_GPR_U32(ctx, 31, 0x1ED094u);
    ctx->pc = 0x1ED090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED08Cu;
    // 0x1ed090: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED08Cu, 0x1ED094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED094u;
label_1ed094:
    // 0x1ed094: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed098: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0a0: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED0A0u;
    SET_GPR_U32(ctx, 31, 0x1ED0A8u);
    ctx->pc = 0x1ED0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0A0u;
    // 0x1ed0a4: 0x24a5f828  addiu       $a1, $a1, -0x7D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED0A0u, 0x1ED0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0A8u;
label_1ed0a8:
    // 0x1ed0a8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed0ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ed0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ed0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0b4: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED0B4u;
    SET_GPR_U32(ctx, 31, 0x1ED0BCu);
    ctx->pc = 0x1ED0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0B4u;
    // 0x1ed0b8: 0x24a5f878  addiu       $a1, $a1, -0x788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED0B4u, 0x1ED0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0BCu;
label_1ed0bc:
    // 0x1ed0bc: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed0c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ed0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ed0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0c8: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED0C8u;
    SET_GPR_U32(ctx, 31, 0x1ED0D0u);
    ctx->pc = 0x1ED0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0C8u;
    // 0x1ed0cc: 0x24a5f8c8  addiu       $a1, $a1, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED0C8u, 0x1ED0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0D0u;
label_1ed0d0:
    // 0x1ed0d0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed0d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ed0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ed0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0dc: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED0DCu;
    SET_GPR_U32(ctx, 31, 0x1ED0E4u);
    ctx->pc = 0x1ED0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0DCu;
    // 0x1ed0e0: 0x24a5f980  addiu       $a1, $a1, -0x680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED0DCu, 0x1ED0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0E4u;
label_1ed0e4:
    // 0x1ed0e4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed0e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ed0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ed0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0f0: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED0F0u;
    SET_GPR_U32(ctx, 31, 0x1ED0F8u);
    ctx->pc = 0x1ED0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0F0u;
    // 0x1ed0f4: 0x24a5f9d0  addiu       $a1, $a1, -0x630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED0F0u, 0x1ED0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0F8u;
label_1ed0f8:
    // 0x1ed0f8: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1ed0fc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1ed0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1ed100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed104: 0xc07b4f4  jal         func_1ED3D0
    ctx->pc = 0x1ED104u;
    SET_GPR_U32(ctx, 31, 0x1ED10Cu);
    ctx->pc = 0x1ED108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED104u;
    // 0x1ed108: 0x24a5fa20  addiu       $a1, $a1, -0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3D0u, 0x1ED104u, 0x1ED10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED10Cu;
label_1ed10c:
    // 0x1ed10c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ed10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1ed110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED11Cu;
        // 0x1ed120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED124u;
    // 0x1ed124: 0x0  nop
    ctx->pc = 0x1ed124u;
    // NOP
    if (ctx->pc == 0x1ed124u) { ctx->pc = 0x1ed128u; }
}
