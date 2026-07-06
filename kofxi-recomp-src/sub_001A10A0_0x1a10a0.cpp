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

// Function: sub_001A10A0
// Address: 0x1a10a0 - 0x1a11f0
void sub_001A10A0_0x1a10a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A10A0_0x1a10a0");
#endif

    switch (ctx->pc) {
        case 0x1a10d0u: goto label_1a10d0;
        case 0x1a11c4u: goto label_1a11c4;
        case 0x1a11d0u: goto label_1a11d0;
        case 0x1a11dcu: goto label_1a11dc;
        default: break;
    }

    ctx->pc = 0x1a10a0u;

    // 0x1a10a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a10a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a10a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a10a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a10a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a10ac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a10b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a10b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a10b4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a10b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a10b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a10bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a10c4: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a10c8: 0xc04027a  jal         func_1009E8
    ctx->pc = 0x1A10C8u;
    SET_GPR_U32(ctx, 31, 0x1A10D0u);
    ctx->pc = 0x1A10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A10C8u;
    // 0x1a10cc: 0x2484e4c0  addiu       $a0, $a0, -0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009E8u, 0x1A10C8u, 0x1A10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A10D0u;
label_1a10d0:
    // 0x1a10d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a10d4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a10d8: 0x9045e530  lbu         $a1, -0x1AD0($v0)
    ctx->pc = 0x1a10d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960432)));
    // 0x1a10dc: 0x30060001  andi        $a2, $zero, 0x1
    ctx->pc = 0x1a10dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a10e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a10e4: 0x64070080  daddiu      $a3, $zero, 0x80
    ctx->pc = 0x1a10e4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1a10e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a10ec: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1a10ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1a10f0: 0x7c40e4b0  sq          $zero, -0x1B50($v0)
    ctx->pc = 0x1a10f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960304), GPR_VEC(ctx, 0));
    // 0x1a10f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a10f8: 0x9445e4b0  lhu         $a1, -0x1B50($v0)
    ctx->pc = 0x1a10f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960304)));
    // 0x1a10fc: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1a10fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a1100: 0xa062e530  sb          $v0, -0x1AD0($v1)
    ctx->pc = 0x1a1100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294960432), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1104: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x1a1104u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1a1108: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1a1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1a110c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1110: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a1114: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x1a1114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a1118: 0x64050010  daddiu      $a1, $zero, 0x10
    ctx->pc = 0x1a1118u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1a111c: 0xa464e4b0  sh          $a0, -0x1B50($v1)
    ctx->pc = 0x1a111cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960304), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1120: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1124: 0x9048e4b1  lbu         $t0, -0x1B4F($v0)
    ctx->pc = 0x1a1124u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960305)));
    // 0x1a1128: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x1a1128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a112c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1130: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1134: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x1a1134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1a1138: 0x9046e4b7  lbu         $a2, -0x1B49($v0)
    ctx->pc = 0x1a1138u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960311)));
    // 0x1a113c: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x1a113cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1a1140: 0xa087e4b1  sb          $a3, -0x1B4F($a0)
    ctx->pc = 0x1a1140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960305), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a1144: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1148: 0x2402ff0f  addiu       $v0, $zero, -0xF1
    ctx->pc = 0x1a1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1a114c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1a114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a1150: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1a1150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a1154: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1158: 0xa064e4b7  sb          $a0, -0x1B49($v1)
    ctx->pc = 0x1a1158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294960311), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a115c: 0x9045e4b8  lbu         $a1, -0x1B48($v0)
    ctx->pc = 0x1a115cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294960312)));
    // 0x1a1160: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1a1164: 0x6404000e  daddiu      $a0, $zero, 0xE
    ctx->pc = 0x1a1164u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1a1168: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a1168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a116c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1170: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a1170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a1174: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1174u;
    {
        const bool branch_taken_0x1a1174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1174u;
        // 0x1a1178: 0xa043e4b8  sb          $v1, -0x1B48($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294960312), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1174) {
            ctx->pc = 0x1A119Cu;
            goto label_1a119c;
        }
    }
    ctx->pc = 0x1A117Cu;
    // 0x1a117c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1180: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1184: 0x9445e4c0  lhu         $a1, -0x1B40($v0)
    ctx->pc = 0x1a1184u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x1a1188: 0x6404008c  daddiu      $a0, $zero, 0x8C
    ctx->pc = 0x1a1188u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a118c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a118cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a1190: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1194: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a1194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a1198: 0xa443e4c0  sh          $v1, -0x1B40($v0)
    ctx->pc = 0x1a1198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960320), (uint16_t)GPR_U32(ctx, 3));
label_1a119c:
    // 0x1a119c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a11a0: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a11a4: 0x9446e4d0  lhu         $a2, -0x1B30($v0)
    ctx->pc = 0x1a11a4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960336)));
    // 0x1a11a8: 0x64050118  daddiu      $a1, $zero, 0x118
    ctx->pc = 0x1a11a8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a11ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a11acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11b0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1a11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a11b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a11b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a11bc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A11BCu;
    SET_GPR_U32(ctx, 31, 0x1A11C4u);
    ctx->pc = 0x1A11C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11BCu;
    // 0x1a11c0: 0xa443e4d0  sh          $v1, -0x1B30($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960336), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A11BCu, 0x1A11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11C4u;
label_1a11c4:
    // 0x1a11c4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a11c8: 0xc040336  jal         func_100CD8
    ctx->pc = 0x1A11C8u;
    SET_GPR_U32(ctx, 31, 0x1A11D0u);
    ctx->pc = 0x1A11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11C8u;
    // 0x1a11cc: 0x2484e4b0  addiu       $a0, $a0, -0x1B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100CD8u, 0x1A11C8u, 0x1A11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11D0u;
label_1a11d0:
    // 0x1a11d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a11d4: 0xc040454  jal         func_101150
    ctx->pc = 0x1A11D4u;
    SET_GPR_U32(ctx, 31, 0x1A11DCu);
    ctx->pc = 0x1A11D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11D4u;
    // 0x1a11d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A11D4u, 0x1A11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11DCu;
label_1a11dc:
    // 0x1a11dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a11dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a11e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a11e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a11e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11E4u;
        // 0x1a11e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A11E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A11ECu;
    // 0x1a11ec: 0x0  nop
    ctx->pc = 0x1a11ecu;
    // NOP
    if (ctx->pc == 0x1a11ecu) { ctx->pc = 0x1a11f0u; }
}
