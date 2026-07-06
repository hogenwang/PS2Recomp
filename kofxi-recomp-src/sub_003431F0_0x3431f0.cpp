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

// Function: sub_003431F0
// Address: 0x3431f0 - 0x343330
void sub_003431F0_0x3431f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003431F0_0x3431f0");
#endif

    switch (ctx->pc) {
        case 0x343238u: goto label_343238;
        case 0x34324cu: goto label_34324c;
        case 0x343260u: goto label_343260;
        case 0x343274u: goto label_343274;
        case 0x343288u: goto label_343288;
        case 0x343298u: goto label_343298;
        case 0x3432acu: goto label_3432ac;
        case 0x3432ccu: goto label_3432cc;
        case 0x3432e8u: goto label_3432e8;
        case 0x3432f0u: goto label_3432f0;
        case 0x3432fcu: goto label_3432fc;
        case 0x343314u: goto label_343314;
        default: break;
    }

    ctx->pc = 0x3431f0u;

    // 0x3431f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3431f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3431f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3431f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3431f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3431f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3431fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3431fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x343200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x343204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x343204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x343208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x343208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34320c: 0xac409478  sw          $zero, -0x6B88($v0)
    ctx->pc = 0x34320cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 0));
    // 0x343210: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343214: 0xac409598  sw          $zero, -0x6A68($v0)
    ctx->pc = 0x343214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940056), GPR_U32(ctx, 0));
    // 0x343218: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34321c: 0xac409590  sw          $zero, -0x6A70($v0)
    ctx->pc = 0x34321cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940048), GPR_U32(ctx, 0));
    // 0x343220: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x343220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x343224: 0xac40dd90  sw          $zero, -0x2270($v0)
    ctx->pc = 0x343224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958480), GPR_U32(ctx, 0));
    // 0x343228: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x343228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34322c: 0x8c4440a8  lw          $a0, 0x40A8($v0)
    ctx->pc = 0x34322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
    // 0x343230: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343230u;
    SET_GPR_U32(ctx, 31, 0x343238u);
    ctx->pc = 0x343234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343230u;
    // 0x343234: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x343230u, 0x343238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343238u;
label_343238:
    // 0x343238: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34323c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343240: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x343240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x343244: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343244u;
    SET_GPR_U32(ctx, 31, 0x34324Cu);
    ctx->pc = 0x343248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343244u;
    // 0x343248: 0x240641e0  addiu       $a2, $zero, 0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x343244u, 0x34324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34324Cu;
label_34324c:
    // 0x34324c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34324cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343254: 0x2484fe80  addiu       $a0, $a0, -0x180
    ctx->pc = 0x343254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
    // 0x343258: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343258u;
    SET_GPR_U32(ctx, 31, 0x343260u);
    ctx->pc = 0x34325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343258u;
    // 0x34325c: 0x24060210  addiu       $a2, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x343258u, 0x343260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343260u;
label_343260:
    // 0x343260: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x343260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x343264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343268: 0x2484bea8  addiu       $a0, $a0, -0x4158
    ctx->pc = 0x343268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
    // 0x34326c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34326Cu;
    SET_GPR_U32(ctx, 31, 0x343274u);
    ctx->pc = 0x343270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34326Cu;
    // 0x343270: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x34326Cu, 0x343274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343274u;
label_343274:
    // 0x343274: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x343274u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x343278: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x343278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x34327c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34327cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343280: 0x2631ef90  addiu       $s1, $s1, -0x1070
    ctx->pc = 0x343280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963088));
    // 0x343284: 0x2610ece0  addiu       $s0, $s0, -0x1320
    ctx->pc = 0x343284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962400));
label_343288:
    // 0x343288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34328c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34328cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x343290: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343290u;
    SET_GPR_U32(ctx, 31, 0x343298u);
    ctx->pc = 0x343294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343290u;
    // 0x343294: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x343290u, 0x343298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343298u;
label_343298:
    // 0x343298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x343298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34329c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x34329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3432a0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3432a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3432a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3432A4u;
    SET_GPR_U32(ctx, 31, 0x3432ACu);
    ctx->pc = 0x3432A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432A4u;
    // 0x3432a8: 0xa2200020  sb          $zero, 0x20($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3432A4u, 0x3432ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432ACu;
label_3432ac:
    // 0x3432ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3432acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3432b0: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x3432b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3432b4: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x3432b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3432b8: 0x26310022  addiu       $s1, $s1, 0x22
    ctx->pc = 0x3432b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x3432bc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3432BCu;
    {
        const bool branch_taken_0x3432bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3432C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432BCu;
        // 0x3432c0: 0x26100022  addiu       $s0, $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432bc) {
            ctx->pc = 0x343288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343288;
        }
    }
    ctx->pc = 0x3432C4u;
    // 0x3432c4: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x3432C4u;
    SET_GPR_U32(ctx, 31, 0x3432CCu);
    ctx->pc = 0x3432C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432C4u;
    // 0x3432c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x3432C4u, 0x3432CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432CCu;
label_3432cc:
    // 0x3432cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3432ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432d0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3432d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3432d4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x3432d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3432d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3432d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3432dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432e0: 0xc088054  jal         func_220150
    ctx->pc = 0x3432E0u;
    SET_GPR_U32(ctx, 31, 0x3432E8u);
    ctx->pc = 0x3432E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432E0u;
    // 0x3432e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220150u, 0x3432E0u, 0x3432E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432E8u;
label_3432e8:
    // 0x3432e8: 0xc0891e6  jal         func_224798
    ctx->pc = 0x3432E8u;
    SET_GPR_U32(ctx, 31, 0x3432F0u);
    ctx->pc = 0x224798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224798u, 0x3432E8u, 0x3432F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432F0u;
label_3432f0:
    // 0x3432f0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3432f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3432f4: 0xc083b40  jal         func_20ED00
    ctx->pc = 0x3432F4u;
    SET_GPR_U32(ctx, 31, 0x3432FCu);
    ctx->pc = 0x3432F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432F4u;
    // 0x3432f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ED00u, 0x3432F4u, 0x3432FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432FCu;
label_3432fc:
    // 0x3432fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3432fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343300: 0x3c0601df  lui         $a2, 0x1DF
    ctx->pc = 0x343300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)479 << 16));
    // 0x343304: 0x24c6fdc0  addiu       $a2, $a2, -0x240
    ctx->pc = 0x343304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966720));
    // 0x343308: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x343308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34330c: 0xc0bae4a  jal         func_2EB928
    ctx->pc = 0x34330Cu;
    SET_GPR_U32(ctx, 31, 0x343314u);
    ctx->pc = 0x343310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34330Cu;
    // 0x343310: 0x3407a000  ori         $a3, $zero, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB928u, 0x34330Cu, 0x343314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343314u;
label_343314:
    // 0x343314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x343314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x343318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34331c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34331cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343324: 0x3e00008  jr          $ra
    ctx->pc = 0x343324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343324u;
        // 0x343328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34332Cu;
    // 0x34332c: 0x0  nop
    ctx->pc = 0x34332cu;
    // NOP
}
