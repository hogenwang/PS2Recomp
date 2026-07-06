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

// Function: sub_003440D0
// Address: 0x3440d0 - 0x344650
void sub_003440D0_0x3440d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003440D0_0x3440d0");
#endif

    switch (ctx->pc) {
        case 0x344114u: goto label_344114;
        case 0x344130u: goto label_344130;
        case 0x34414cu: goto label_34414c;
        case 0x344168u: goto label_344168;
        case 0x344184u: goto label_344184;
        case 0x3441c0u: goto label_3441c0;
        case 0x344200u: goto label_344200;
        case 0x34420cu: goto label_34420c;
        case 0x344214u: goto label_344214;
        case 0x344220u: goto label_344220;
        case 0x344248u: goto label_344248;
        case 0x34425cu: goto label_34425c;
        case 0x344264u: goto label_344264;
        case 0x344278u: goto label_344278;
        case 0x3442a4u: goto label_3442a4;
        case 0x3442c8u: goto label_3442c8;
        case 0x3442d4u: goto label_3442d4;
        case 0x3442dcu: goto label_3442dc;
        case 0x344304u: goto label_344304;
        case 0x344330u: goto label_344330;
        case 0x344338u: goto label_344338;
        case 0x344344u: goto label_344344;
        case 0x344354u: goto label_344354;
        case 0x344364u: goto label_344364;
        case 0x344370u: goto label_344370;
        case 0x3443a0u: goto label_3443a0;
        case 0x3443a8u: goto label_3443a8;
        case 0x3443b4u: goto label_3443b4;
        case 0x3443c4u: goto label_3443c4;
        case 0x3443d4u: goto label_3443d4;
        case 0x3443e0u: goto label_3443e0;
        case 0x344408u: goto label_344408;
        case 0x34441cu: goto label_34441c;
        case 0x344438u: goto label_344438;
        case 0x344454u: goto label_344454;
        case 0x344460u: goto label_344460;
        case 0x344470u: goto label_344470;
        case 0x3444b4u: goto label_3444b4;
        case 0x3444bcu: goto label_3444bc;
        case 0x3444c8u: goto label_3444c8;
        case 0x3444d8u: goto label_3444d8;
        case 0x3444e4u: goto label_3444e4;
        case 0x3444f4u: goto label_3444f4;
        case 0x344500u: goto label_344500;
        case 0x344510u: goto label_344510;
        case 0x34451cu: goto label_34451c;
        case 0x344560u: goto label_344560;
        case 0x344568u: goto label_344568;
        case 0x344584u: goto label_344584;
        case 0x344598u: goto label_344598;
        case 0x3445b0u: goto label_3445b0;
        case 0x3445d8u: goto label_3445d8;
        case 0x3445ecu: goto label_3445ec;
        case 0x3445f8u: goto label_3445f8;
        case 0x344630u: goto label_344630;
        case 0x344638u: goto label_344638;
        default: break;
    }

    ctx->pc = 0x3440d0u;

    // 0x3440d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3440d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3440d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3440d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3440d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3440d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3440dc: 0x8c439478  lw          $v1, -0x6B88($v0)
    ctx->pc = 0x3440dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x3440e0: 0x3c02fe00  lui         $v0, 0xFE00
    ctx->pc = 0x3440e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65024 << 16));
    // 0x3440e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3440e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3440e8: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x3440E8u;
    {
        const bool branch_taken_0x3440e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3440e8) {
            ctx->pc = 0x3440ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3440E8u;
            // 0x3440ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441C4u;
            goto label_3441c4;
        }
    }
    ctx->pc = 0x3440F0u;
    // 0x3440f0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3440f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3440f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3440f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3440f8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x3440f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x3440fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3440fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344100: 0x24a5eae0  addiu       $a1, $a1, -0x1520
    ctx->pc = 0x344100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961888));
    // 0x344104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344108: 0xa443eae0  sh          $v1, -0x1520($v0)
    ctx->pc = 0x344108u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961888), (uint16_t)GPR_U32(ctx, 3));
    // 0x34410c: 0xc0bb5c6  jal         func_2ED718
    ctx->pc = 0x34410Cu;
    SET_GPR_U32(ctx, 31, 0x344114u);
    ctx->pc = 0x344110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34410Cu;
    // 0x344110: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED718u, 0x34410Cu, 0x344114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344114u;
label_344114:
    // 0x344114: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x344114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344118: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x344118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x34411c: 0x90459490  lbu         $a1, -0x6B70($v0)
    ctx->pc = 0x34411cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x344120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x344120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344124: 0x24c6eae0  addiu       $a2, $a2, -0x1520
    ctx->pc = 0x344124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961888));
    // 0x344128: 0xc0bb578  jal         func_2ED5E0
    ctx->pc = 0x344128u;
    SET_GPR_U32(ctx, 31, 0x344130u);
    ctx->pc = 0x34412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344128u;
    // 0x34412c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED5E0u, 0x344128u, 0x344130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344130u;
label_344130:
    // 0x344130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x344130u;
    {
        const bool branch_taken_0x344130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344130) {
            ctx->pc = 0x34414Cu;
            goto label_34414c;
        }
    }
    ctx->pc = 0x344138u;
    // 0x344138: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x344138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34413c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344140: 0x9444eae0  lhu         $a0, -0x1520($v0)
    ctx->pc = 0x344140u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961888)));
    // 0x344144: 0xc0d1010  jal         func_344040
    ctx->pc = 0x344144u;
    SET_GPR_U32(ctx, 31, 0x34414Cu);
    ctx->pc = 0x344148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344144u;
    // 0x344148: 0x90659490  lbu         $a1, -0x6B70($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344040u, 0x344144u, 0x34414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34414Cu;
label_34414c:
    // 0x34414c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344150: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x344150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x344154: 0x90459488  lbu         $a1, -0x6B78($v0)
    ctx->pc = 0x344154u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939784)));
    // 0x344158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x344158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34415c: 0x24c6eae0  addiu       $a2, $a2, -0x1520
    ctx->pc = 0x34415cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961888));
    // 0x344160: 0xc0bb578  jal         func_2ED5E0
    ctx->pc = 0x344160u;
    SET_GPR_U32(ctx, 31, 0x344168u);
    ctx->pc = 0x344164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344160u;
    // 0x344164: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED5E0u, 0x344160u, 0x344168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344168u;
label_344168:
    // 0x344168: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x344168u;
    {
        const bool branch_taken_0x344168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344168) {
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344170u;
    // 0x344170: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x344170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x344174: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344178: 0x9444eae0  lhu         $a0, -0x1520($v0)
    ctx->pc = 0x344178u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961888)));
    // 0x34417c: 0xc0d1010  jal         func_344040
    ctx->pc = 0x34417Cu;
    SET_GPR_U32(ctx, 31, 0x344184u);
    ctx->pc = 0x344180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34417Cu;
    // 0x344180: 0x90659488  lbu         $a1, -0x6B78($v1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344040u, 0x34417Cu, 0x344184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344184u;
label_344184:
    // 0x344184: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344188: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x344188u;
    {
        const bool branch_taken_0x344188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344188u;
        // 0x34418c: 0xa4404310  sh          $zero, 0x4310($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 17168), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344188) {
            ctx->pc = 0x3441C0u;
            goto label_3441c0;
        }
    }
    ctx->pc = 0x344190u;
label_344190:
    // 0x344190: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344194: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x344194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x344198: 0x94444310  lhu         $a0, 0x4310($v0)
    ctx->pc = 0x344198u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 17168)));
    // 0x34419c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34419cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3441a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3441a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3441a4: 0xa4644310  sh          $a0, 0x4310($v1)
    ctx->pc = 0x3441a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17168), (uint16_t)GPR_U32(ctx, 4));
    // 0x3441a8: 0x94424310  lhu         $v0, 0x4310($v0)
    ctx->pc = 0x3441a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 17168)));
    // 0x3441ac: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x3441acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x3441b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3441B0u;
    {
        const bool branch_taken_0x3441b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3441b0) {
            ctx->pc = 0x3441B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3441B0u;
            // 0x3441b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441C4u;
            goto label_3441c4;
        }
    }
    ctx->pc = 0x3441B8u;
    // 0x3441b8: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x3441B8u;
    SET_GPR_U32(ctx, 31, 0x3441C0u);
    ctx->pc = 0x3441BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3441B8u;
    // 0x3441bc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x3441B8u, 0x3441C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441C0u;
label_3441c0:
    // 0x3441c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3441c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3441c4:
    // 0x3441c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3441c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3441c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3441C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441C8u;
        // 0x3441cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3441C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3441D0u;
    // 0x3441d0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3441d4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3441d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3441d8: 0x24840e50  addiu       $a0, $a0, 0xE50
    ctx->pc = 0x3441d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3664));
    // 0x3441dc: 0x80558d4  j           func_156350
    ctx->pc = 0x3441DCu;
    ctx->pc = 0x3441E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3441DCu;
    // 0x3441e0: 0x24a541f0  addiu       $a1, $a1, 0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x3441E4u;
    // 0x3441e4: 0x0  nop
    ctx->pc = 0x3441e4u;
    // NOP
    // 0x3441e8: 0x0  nop
    ctx->pc = 0x3441e8u;
    // NOP
    // 0x3441ec: 0x0  nop
    ctx->pc = 0x3441ecu;
    // NOP
    // 0x3441f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3441f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3441f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3441f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3441f8: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x3441F8u;
    SET_GPR_U32(ctx, 31, 0x344200u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x3441F8u, 0x344200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344200u;
label_344200:
    // 0x344200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x344200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344204: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x344204u;
    SET_GPR_U32(ctx, 31, 0x34420Cu);
    ctx->pc = 0x344208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344204u;
    // 0x344208: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x344204u, 0x34420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34420Cu;
label_34420c:
    // 0x34420c: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x34420Cu;
    SET_GPR_U32(ctx, 31, 0x344214u);
    ctx->pc = 0x300F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300F30u, 0x34420Cu, 0x344214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344214u;
label_344214:
    // 0x344214: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x344214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344218: 0xc055684  jal         func_155A10
    ctx->pc = 0x344218u;
    SET_GPR_U32(ctx, 31, 0x344220u);
    ctx->pc = 0x34421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344218u;
    // 0x34421c: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x344218u, 0x344220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344220u;
label_344220:
    // 0x344220: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344224: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x344224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x344228: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x344228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x34422c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344230: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344234: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x344234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x344238: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x344238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x34423c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34423cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344240: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x344240u;
    SET_GPR_U32(ctx, 31, 0x344248u);
    ctx->pc = 0x344244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344240u;
    // 0x344244: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x344240u, 0x344248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344248u;
label_344248:
    // 0x344248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34424c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344250: 0xac439478  sw          $v1, -0x6B88($v0)
    ctx->pc = 0x344250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    // 0x344254: 0xc069184  jal         func_1A4610
    ctx->pc = 0x344254u;
    SET_GPR_U32(ctx, 31, 0x34425Cu);
    ctx->pc = 0x344258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344254u;
    // 0x344258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x344254u, 0x34425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34425Cu;
label_34425c:
    // 0x34425c: 0xc069244  jal         func_1A4910
    ctx->pc = 0x34425Cu;
    SET_GPR_U32(ctx, 31, 0x344264u);
    ctx->pc = 0x1A4910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4910u, 0x34425Cu, 0x344264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344264u;
label_344264:
    // 0x344264: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x344264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x344268: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34426c: 0x24844310  addiu       $a0, $a0, 0x4310
    ctx->pc = 0x34426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17168));
    // 0x344270: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344270u;
    SET_GPR_U32(ctx, 31, 0x344278u);
    ctx->pc = 0x344274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344270u;
    // 0x344274: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x344270u, 0x344278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344278u;
label_344278:
    // 0x344278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34427c: 0x3e00008  jr          $ra
    ctx->pc = 0x34427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34427Cu;
        // 0x344280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344284u;
    // 0x344284: 0x0  nop
    ctx->pc = 0x344284u;
    // NOP
    // 0x344288: 0x0  nop
    ctx->pc = 0x344288u;
    // NOP
    // 0x34428c: 0x0  nop
    ctx->pc = 0x34428cu;
    // NOP
    // 0x344290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344294: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x344294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x344298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34429c: 0xc055684  jal         func_155A10
    ctx->pc = 0x34429Cu;
    SET_GPR_U32(ctx, 31, 0x3442A4u);
    ctx->pc = 0x3442A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34429Cu;
    // 0x3442a0: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x34429Cu, 0x3442A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442A4u;
label_3442a4:
    // 0x3442a4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3442a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3442a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3442a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3442ac: 0xac60beb0  sw          $zero, -0x4150($v1)
    ctx->pc = 0x3442acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950576), GPR_U32(ctx, 0));
    // 0x3442b0: 0xac40beb4  sw          $zero, -0x414C($v0)
    ctx->pc = 0x3442b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950580), GPR_U32(ctx, 0));
    // 0x3442b4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3442b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3442b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3442bc: 0xac60beb8  sw          $zero, -0x4148($v1)
    ctx->pc = 0x3442bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950584), GPR_U32(ctx, 0));
    // 0x3442c0: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x3442C0u;
    SET_GPR_U32(ctx, 31, 0x3442C8u);
    ctx->pc = 0x3442C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442C0u;
    // 0x3442c4: 0xac409478  sw          $zero, -0x6B88($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x3442C0u, 0x3442C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442C8u;
label_3442c8:
    // 0x3442c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3442c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3442cc: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x3442CCu;
    SET_GPR_U32(ctx, 31, 0x3442D4u);
    ctx->pc = 0x3442D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442CCu;
    // 0x3442d0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x3442CCu, 0x3442D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442D4u;
label_3442d4:
    // 0x3442d4: 0xc0551c0  jal         func_154700
    ctx->pc = 0x3442D4u;
    SET_GPR_U32(ctx, 31, 0x3442DCu);
    ctx->pc = 0x154700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154700u, 0x3442D4u, 0x3442DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442DCu;
label_3442dc:
    // 0x3442dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3442dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3442e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3442e4: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x3442e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x3442e8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3442e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3442ec: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x3442ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x3442f0: 0x2484fba0  addiu       $a0, $a0, -0x460
    ctx->pc = 0x3442f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
    // 0x3442f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3442f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3442f8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3442f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3442fc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3442FCu;
    SET_GPR_U32(ctx, 31, 0x344304u);
    ctx->pc = 0x344300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3442FCu;
    // 0x344300: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3442FCu, 0x344304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344304u;
label_344304:
    // 0x344304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344308: 0x3e00008  jr          $ra
    ctx->pc = 0x344308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344308u;
        // 0x34430c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344310u;
    // 0x344310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34431c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34431cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x344320: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344324: 0xac649478  sw          $a0, -0x6B88($v1)
    ctx->pc = 0x344324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939768), GPR_U32(ctx, 4));
    // 0x344328: 0xc0d0b40  jal         func_342D00
    ctx->pc = 0x344328u;
    SET_GPR_U32(ctx, 31, 0x344330u);
    ctx->pc = 0x34432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344328u;
    // 0x34432c: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D00u, 0x344328u, 0x344330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344330u;
label_344330:
    // 0x344330: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x344330u;
    SET_GPR_U32(ctx, 31, 0x344338u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x344330u, 0x344338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344338u;
label_344338:
    // 0x344338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x344338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34433c: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x34433Cu;
    SET_GPR_U32(ctx, 31, 0x344344u);
    ctx->pc = 0x344340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34433Cu;
    // 0x344340: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x34433Cu, 0x344344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344344u;
label_344344:
    // 0x344344: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34434c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34434Cu;
    SET_GPR_U32(ctx, 31, 0x344354u);
    ctx->pc = 0x344350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34434Cu;
    // 0x344350: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34434Cu, 0x344354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344354u;
label_344354:
    // 0x344354: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x344358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34435c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34435Cu;
    SET_GPR_U32(ctx, 31, 0x344364u);
    ctx->pc = 0x344360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34435Cu;
    // 0x344360: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34435Cu, 0x344364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344364u;
label_344364:
    // 0x344364: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344368: 0xc0d0d44  jal         func_343510
    ctx->pc = 0x344368u;
    SET_GPR_U32(ctx, 31, 0x344370u);
    ctx->pc = 0x34436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344368u;
    // 0x34436c: 0x248443f0  addiu       $a0, $a0, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343510u, 0x344368u, 0x344370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344370u;
label_344370:
    // 0x344370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344374: 0x3e00008  jr          $ra
    ctx->pc = 0x344374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344374u;
        // 0x344378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34437Cu;
    // 0x34437c: 0x0  nop
    ctx->pc = 0x34437cu;
    // NOP
    // 0x344380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34438c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x344390: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344394: 0xac649478  sw          $a0, -0x6B88($v1)
    ctx->pc = 0x344394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939768), GPR_U32(ctx, 4));
    // 0x344398: 0xc0d0b40  jal         func_342D00
    ctx->pc = 0x344398u;
    SET_GPR_U32(ctx, 31, 0x3443A0u);
    ctx->pc = 0x34439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344398u;
    // 0x34439c: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D00u, 0x344398u, 0x3443A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443A0u;
label_3443a0:
    // 0x3443a0: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x3443A0u;
    SET_GPR_U32(ctx, 31, 0x3443A8u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x3443A0u, 0x3443A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443A8u;
label_3443a8:
    // 0x3443a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3443a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443ac: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x3443ACu;
    SET_GPR_U32(ctx, 31, 0x3443B4u);
    ctx->pc = 0x3443B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443ACu;
    // 0x3443b0: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x3443ACu, 0x3443B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443B4u;
label_3443b4:
    // 0x3443b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3443b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3443b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3443b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3443bc: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3443BCu;
    SET_GPR_U32(ctx, 31, 0x3443C4u);
    ctx->pc = 0x3443C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443BCu;
    // 0x3443c0: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3443BCu, 0x3443C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443C4u;
label_3443c4:
    // 0x3443c4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3443c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3443c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3443c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3443cc: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3443CCu;
    SET_GPR_U32(ctx, 31, 0x3443D4u);
    ctx->pc = 0x3443D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443CCu;
    // 0x3443d0: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3443CCu, 0x3443D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443D4u;
label_3443d4:
    // 0x3443d4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3443d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3443d8: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x3443D8u;
    SET_GPR_U32(ctx, 31, 0x3443E0u);
    ctx->pc = 0x3443DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443D8u;
    // 0x3443dc: 0x248443f0  addiu       $a0, $a0, 0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x3443D8u, 0x3443E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443E0u;
label_3443e0:
    // 0x3443e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3443e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3443e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3443E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3443E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443E4u;
        // 0x3443e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3443E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3443ECu;
    // 0x3443ec: 0x0  nop
    ctx->pc = 0x3443ecu;
    // NOP
    // 0x3443f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3443f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3443f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3443f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3443f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3443f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3443fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3443fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344400: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x344400u;
    SET_GPR_U32(ctx, 31, 0x344408u);
    ctx->pc = 0x344404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344400u;
    // 0x344404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x344400u, 0x344408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344408u;
label_344408:
    // 0x344408: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x344408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34440c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344410: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x344410u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x344414: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x344414u;
    SET_GPR_U32(ctx, 31, 0x34441Cu);
    ctx->pc = 0x344418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344414u;
    // 0x344418: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x344414u, 0x34441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34441Cu;
label_34441c:
    // 0x34441c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344420: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x344420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344424: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34442c: 0xac434378  sw          $v1, 0x4378($v0)
    ctx->pc = 0x34442cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    // 0x344430: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x344430u;
    SET_GPR_U32(ctx, 31, 0x344438u);
    ctx->pc = 0x344434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344430u;
    // 0x344434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x344430u, 0x344438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344438u;
label_344438:
    // 0x344438: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x344438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34443c: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x34443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x344440: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x344440u;
    {
        const bool branch_taken_0x344440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344440) {
            ctx->pc = 0x344444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344440u;
            // 0x344444: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x344468u;
            goto label_344468;
        }
    }
    ctx->pc = 0x344448u;
    // 0x344448: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x344448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34444c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34444Cu;
    SET_GPR_U32(ctx, 31, 0x344454u);
    ctx->pc = 0x344450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34444Cu;
    // 0x344450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34444Cu, 0x344454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344454u;
label_344454:
    // 0x344454: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344458: 0xc0d0d8c  jal         func_343630
    ctx->pc = 0x344458u;
    SET_GPR_U32(ctx, 31, 0x344460u);
    ctx->pc = 0x34445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344458u;
    // 0x34445c: 0x24844290  addiu       $a0, $a0, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343630u, 0x344458u, 0x344460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344460u;
label_344460:
    // 0x344460: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x344460u;
    {
        const bool branch_taken_0x344460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344460u;
        // 0x344464: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344460) {
            ctx->pc = 0x344520u;
            goto label_344520;
        }
    }
    ctx->pc = 0x344468u;
label_344468:
    // 0x344468: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x344468u;
    {
        const bool branch_taken_0x344468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344468) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x344470u;
label_344470:
    // 0x344470: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x344470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x344474: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x344474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344478: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x344478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34447c: 0x50a40022  beql        $a1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x34447Cu;
    {
        const bool branch_taken_0x34447c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x34447c) {
            ctx->pc = 0x344480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34447Cu;
            // 0x344480: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344508u;
            goto label_344508;
        }
    }
    ctx->pc = 0x344484u;
    // 0x344484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x344484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344488: 0x50a30018  beql        $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x344488u;
    {
        const bool branch_taken_0x344488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x344488) {
            ctx->pc = 0x34448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344488u;
            // 0x34448c: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444ECu;
            goto label_3444ec;
        }
    }
    ctx->pc = 0x344490u;
    // 0x344490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344494: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x344494u;
    {
        const bool branch_taken_0x344494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x344494) {
            ctx->pc = 0x344498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344494u;
            // 0x344498: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444D0u;
            goto label_3444d0;
        }
    }
    ctx->pc = 0x34449Cu;
    // 0x34449c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34449Cu;
    {
        const bool branch_taken_0x34449c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34449c) {
            ctx->pc = 0x3444A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34449Cu;
            // 0x3444a0: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444ACu;
            goto label_3444ac;
        }
    }
    ctx->pc = 0x3444A4u;
    // 0x3444a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3444A4u;
    {
        const bool branch_taken_0x3444a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3444a4) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x3444ACu;
label_3444ac:
    // 0x3444ac: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3444ACu;
    SET_GPR_U32(ctx, 31, 0x3444B4u);
    ctx->pc = 0x3444B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444ACu;
    // 0x3444b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3444ACu, 0x3444B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444B4u;
label_3444b4:
    // 0x3444b4: 0xc0d0c00  jal         func_343000
    ctx->pc = 0x3444B4u;
    SET_GPR_U32(ctx, 31, 0x3444BCu);
    ctx->pc = 0x343000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343000u, 0x3444B4u, 0x3444BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444BCu;
label_3444bc:
    // 0x3444bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3444bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3444c0: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x3444C0u;
    SET_GPR_U32(ctx, 31, 0x3444C8u);
    ctx->pc = 0x3444C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444C0u;
    // 0x3444c4: 0x24844530  addiu       $a0, $a0, 0x4530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x3444C0u, 0x3444C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444C8u;
label_3444c8:
    // 0x3444c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3444C8u;
    {
        const bool branch_taken_0x3444c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3444c8) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x3444D0u;
label_3444d0:
    // 0x3444d0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3444D0u;
    SET_GPR_U32(ctx, 31, 0x3444D8u);
    ctx->pc = 0x3444D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444D0u;
    // 0x3444d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3444D0u, 0x3444D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444D8u;
label_3444d8:
    // 0x3444d8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3444d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3444dc: 0xc0d0d8c  jal         func_343630
    ctx->pc = 0x3444DCu;
    SET_GPR_U32(ctx, 31, 0x3444E4u);
    ctx->pc = 0x3444E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444DCu;
    // 0x3444e0: 0x24841fd0  addiu       $a0, $a0, 0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343630u, 0x3444DCu, 0x3444E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444E4u;
label_3444e4:
    // 0x3444e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3444E4u;
    {
        const bool branch_taken_0x3444e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3444e4) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x3444ECu;
label_3444ec:
    // 0x3444ec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3444ECu;
    SET_GPR_U32(ctx, 31, 0x3444F4u);
    ctx->pc = 0x3444F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444ECu;
    // 0x3444f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3444ECu, 0x3444F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444F4u;
label_3444f4:
    // 0x3444f4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3444f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3444f8: 0xc0d0d8c  jal         func_343630
    ctx->pc = 0x3444F8u;
    SET_GPR_U32(ctx, 31, 0x344500u);
    ctx->pc = 0x3444FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444F8u;
    // 0x3444fc: 0x248420f0  addiu       $a0, $a0, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343630u, 0x3444F8u, 0x344500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344500u;
label_344500:
    // 0x344500: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x344500u;
    {
        const bool branch_taken_0x344500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344500) {
            ctx->pc = 0x34451Cu;
            goto label_34451c;
        }
    }
    ctx->pc = 0x344508u;
label_344508:
    // 0x344508: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x344508u;
    SET_GPR_U32(ctx, 31, 0x344510u);
    ctx->pc = 0x34450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344508u;
    // 0x34450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x344508u, 0x344510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344510u;
label_344510:
    // 0x344510: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344514: 0xc0d0d8c  jal         func_343630
    ctx->pc = 0x344514u;
    SET_GPR_U32(ctx, 31, 0x34451Cu);
    ctx->pc = 0x344518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344514u;
    // 0x344518: 0x24844290  addiu       $a0, $a0, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343630u, 0x344514u, 0x34451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34451Cu;
label_34451c:
    // 0x34451c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344520:
    // 0x344520: 0x3e00008  jr          $ra
    ctx->pc = 0x344520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344520u;
        // 0x344524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344528u;
    // 0x344528: 0x0  nop
    ctx->pc = 0x344528u;
    // NOP
    // 0x34452c: 0x0  nop
    ctx->pc = 0x34452cu;
    // NOP
    // 0x344530: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x344530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x344534: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x344534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x344538: 0x24840eb0  addiu       $a0, $a0, 0xEB0
    ctx->pc = 0x344538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3760));
    // 0x34453c: 0x80558d4  j           func_156350
    ctx->pc = 0x34453Cu;
    ctx->pc = 0x344540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34453Cu;
    // 0x344540: 0x24a50bb0  addiu       $a1, $a1, 0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x344544u;
    // 0x344544: 0x0  nop
    ctx->pc = 0x344544u;
    // NOP
    // 0x344548: 0x0  nop
    ctx->pc = 0x344548u;
    // NOP
    // 0x34454c: 0x0  nop
    ctx->pc = 0x34454cu;
    // NOP
    // 0x344550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344558: 0xc0d0b4c  jal         func_342D30
    ctx->pc = 0x344558u;
    SET_GPR_U32(ctx, 31, 0x344560u);
    ctx->pc = 0x34455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344558u;
    // 0x34455c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D30u, 0x344558u, 0x344560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344560u;
label_344560:
    // 0x344560: 0xc082918  jal         func_20A460
    ctx->pc = 0x344560u;
    SET_GPR_U32(ctx, 31, 0x344568u);
    ctx->pc = 0x344564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344560u;
    // 0x344564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x344560u, 0x344568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344568u;
label_344568:
    // 0x344568: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34456c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x344570: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x344570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x344574: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x344574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x344578: 0x24a54680  addiu       $a1, $a1, 0x4680
    ctx->pc = 0x344578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18048));
    // 0x34457c: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34457Cu;
    SET_GPR_U32(ctx, 31, 0x344584u);
    ctx->pc = 0x344580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34457Cu;
    // 0x344580: 0x24c647f0  addiu       $a2, $a2, 0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34457Cu, 0x344584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344584u;
label_344584:
    // 0x344584: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x344584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x344588: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x344588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34458c: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x34458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    // 0x344590: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x344590u;
    SET_GPR_U32(ctx, 31, 0x344598u);
    ctx->pc = 0x344594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344590u;
    // 0x344594: 0x24a54770  addiu       $a1, $a1, 0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x344590u, 0x344598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344598u;
label_344598:
    // 0x344598: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x344598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34459c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34459cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3445a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3445a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445a4: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x3445a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    // 0x3445a8: 0xc0839e4  jal         func_20E790
    ctx->pc = 0x3445A8u;
    SET_GPR_U32(ctx, 31, 0x3445B0u);
    ctx->pc = 0x3445ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445A8u;
    // 0x3445ac: 0x24a54860  addiu       $a1, $a1, 0x4860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E790u, 0x3445A8u, 0x3445B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445B0u;
label_3445b0:
    // 0x3445b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3445b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3445b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3445b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3445b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3445B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3445BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445B8u;
        // 0x3445bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3445B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3445C0u;
    // 0x3445c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3445c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3445c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3445c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3445c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3445c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3445cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3445ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3445d0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3445D0u;
    SET_GPR_U32(ctx, 31, 0x3445D8u);
    ctx->pc = 0x3445D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445D0u;
    // 0x3445d4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3445D0u, 0x3445D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445D8u;
label_3445d8:
    // 0x3445d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3445D8u;
    {
        const bool branch_taken_0x3445d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3445d8) {
            ctx->pc = 0x3445DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3445D8u;
            // 0x3445dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3445FCu;
            goto label_3445fc;
        }
    }
    ctx->pc = 0x3445E0u;
    // 0x3445e0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3445e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3445e4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3445E4u;
    SET_GPR_U32(ctx, 31, 0x3445ECu);
    ctx->pc = 0x3445E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445E4u;
    // 0x3445e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3445E4u, 0x3445ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445ECu;
label_3445ec:
    // 0x3445ec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3445ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3445f0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3445F0u;
    SET_GPR_U32(ctx, 31, 0x3445F8u);
    ctx->pc = 0x3445F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3445F0u;
    // 0x3445f4: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3445F0u, 0x3445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3445F8u;
label_3445f8:
    // 0x3445f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3445f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3445fc:
    // 0x3445fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3445FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3445FCu;
        // 0x344600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3445FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344604u;
    // 0x344604: 0x0  nop
    ctx->pc = 0x344604u;
    // NOP
    // 0x344608: 0x0  nop
    ctx->pc = 0x344608u;
    // NOP
    // 0x34460c: 0x0  nop
    ctx->pc = 0x34460cu;
    // NOP
    // 0x344610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344614: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x344614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x344618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34461c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x34461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x344620: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x344620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x344624: 0x24844650  addiu       $a0, $a0, 0x4650
    ctx->pc = 0x344624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18000));
    // 0x344628: 0xc082674  jal         func_2099D0
    ctx->pc = 0x344628u;
    SET_GPR_U32(ctx, 31, 0x344630u);
    ctx->pc = 0x34462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344628u;
    // 0x34462c: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x344628u, 0x344630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344630u;
label_344630:
    // 0x344630: 0xc0d1194  jal         func_344650
    ctx->pc = 0x344630u;
    SET_GPR_U32(ctx, 31, 0x344638u);
    ctx->pc = 0x344650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344650u, 0x344630u, 0x344638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344638u;
label_344638:
    // 0x344638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34463c: 0x3e00008  jr          $ra
    ctx->pc = 0x34463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34463Cu;
        // 0x344640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344644u;
    // 0x344644: 0x0  nop
    ctx->pc = 0x344644u;
    // NOP
    // 0x344648: 0x0  nop
    ctx->pc = 0x344648u;
    // NOP
    // 0x34464c: 0x0  nop
    ctx->pc = 0x34464cu;
    // NOP
}
