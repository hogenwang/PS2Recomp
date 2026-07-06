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

// Function: sub_002AD790
// Address: 0x2ad790 - 0x2ade68
void sub_002AD790_0x2ad790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD790_0x2ad790");
#endif

    switch (ctx->pc) {
        case 0x2ad7d8u: goto label_2ad7d8;
        case 0x2ad7e4u: goto label_2ad7e4;
        case 0x2ad7ecu: goto label_2ad7ec;
        case 0x2ad7f8u: goto label_2ad7f8;
        case 0x2ad800u: goto label_2ad800;
        case 0x2ad80cu: goto label_2ad80c;
        case 0x2ad814u: goto label_2ad814;
        case 0x2ad820u: goto label_2ad820;
        case 0x2ad838u: goto label_2ad838;
        case 0x2ad860u: goto label_2ad860;
        case 0x2ad8b0u: goto label_2ad8b0;
        case 0x2ad8c0u: goto label_2ad8c0;
        case 0x2ad8d4u: goto label_2ad8d4;
        case 0x2ad8e8u: goto label_2ad8e8;
        case 0x2ad8fcu: goto label_2ad8fc;
        case 0x2ad90cu: goto label_2ad90c;
        case 0x2ad918u: goto label_2ad918;
        case 0x2ad92cu: goto label_2ad92c;
        case 0x2ad93cu: goto label_2ad93c;
        case 0x2ad958u: goto label_2ad958;
        case 0x2ad96cu: goto label_2ad96c;
        case 0x2ad980u: goto label_2ad980;
        case 0x2ad9b0u: goto label_2ad9b0;
        case 0x2ad9b8u: goto label_2ad9b8;
        case 0x2ad9c0u: goto label_2ad9c0;
        case 0x2ada68u: goto label_2ada68;
        case 0x2ada88u: goto label_2ada88;
        case 0x2adaa8u: goto label_2adaa8;
        case 0x2adac4u: goto label_2adac4;
        case 0x2adae4u: goto label_2adae4;
        case 0x2adaf4u: goto label_2adaf4;
        case 0x2adb08u: goto label_2adb08;
        case 0x2adb1cu: goto label_2adb1c;
        case 0x2adb4cu: goto label_2adb4c;
        case 0x2adb58u: goto label_2adb58;
        case 0x2adbecu: goto label_2adbec;
        case 0x2adc00u: goto label_2adc00;
        case 0x2adc14u: goto label_2adc14;
        case 0x2adc1cu: goto label_2adc1c;
        case 0x2adc28u: goto label_2adc28;
        case 0x2adc38u: goto label_2adc38;
        case 0x2adc48u: goto label_2adc48;
        case 0x2adc58u: goto label_2adc58;
        case 0x2adc68u: goto label_2adc68;
        case 0x2adc7cu: goto label_2adc7c;
        case 0x2adc8cu: goto label_2adc8c;
        case 0x2adc9cu: goto label_2adc9c;
        case 0x2adcb0u: goto label_2adcb0;
        case 0x2adcbcu: goto label_2adcbc;
        case 0x2adcdcu: goto label_2adcdc;
        case 0x2adcf0u: goto label_2adcf0;
        case 0x2add00u: goto label_2add00;
        case 0x2add20u: goto label_2add20;
        case 0x2add94u: goto label_2add94;
        case 0x2addc8u: goto label_2addc8;
        case 0x2addd4u: goto label_2addd4;
        case 0x2adde0u: goto label_2adde0;
        case 0x2addf8u: goto label_2addf8;
        case 0x2ade00u: goto label_2ade00;
        case 0x2ade28u: goto label_2ade28;
        case 0x2ade48u: goto label_2ade48;
        default: break;
    }

    ctx->pc = 0x2ad790u;

label_2ad790:
    // 0x2ad790: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ad794: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2ad794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2ad798: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2ad798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2ad79c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2ad79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2ad7a0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2ad7a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7a4: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2ad7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2ad7a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ad7a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7ac: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2ad7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2ad7b0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ad7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ad7b4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2ad7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2ad7b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7bc: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2ad7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2ad7c0: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2ad7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2ad7c4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2ad7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2ad7c8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2ad7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2ad7cc: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x2ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x2ad7d0: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2AD7D0u;
    SET_GPR_U32(ctx, 31, 0x2AD7D8u);
    ctx->pc = 0x2AD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7D0u;
    // 0x2ad7d4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2AD7D0u, 0x2AD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7D8u;
label_2ad7d8:
    // 0x2ad7d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ad7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7dc: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2AD7DCu;
    SET_GPR_U32(ctx, 31, 0x2AD7E4u);
    ctx->pc = 0x2AD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7DCu;
    // 0x2ad7e0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2AD7DCu, 0x2AD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7E4u;
label_2ad7e4:
    // 0x2ad7e4: 0xc0a63ae  jal         func_298EB8
    ctx->pc = 0x2AD7E4u;
    SET_GPR_U32(ctx, 31, 0x2AD7ECu);
    ctx->pc = 0x2AD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7E4u;
    // 0x2ad7e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EB8u, 0x2AD7E4u, 0x2AD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7ECu;
label_2ad7ec:
    // 0x2ad7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad7f0: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AD7F0u;
    SET_GPR_U32(ctx, 31, 0x2AD7F8u);
    ctx->pc = 0x2AD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD7F0u;
    // 0x2ad7f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AD7F0u, 0x2AD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7F8u;
label_2ad7f8:
    // 0x2ad7f8: 0xc0a63b2  jal         func_298EC8
    ctx->pc = 0x2AD7F8u;
    SET_GPR_U32(ctx, 31, 0x2AD800u);
    ctx->pc = 0x298EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EC8u, 0x2AD7F8u, 0x2AD800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD800u;
label_2ad800:
    // 0x2ad800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad804: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AD804u;
    SET_GPR_U32(ctx, 31, 0x2AD80Cu);
    ctx->pc = 0x2AD808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD804u;
    // 0x2ad808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AD804u, 0x2AD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD80Cu;
label_2ad80c:
    // 0x2ad80c: 0xc0a5afa  jal         func_296BE8
    ctx->pc = 0x2AD80Cu;
    SET_GPR_U32(ctx, 31, 0x2AD814u);
    ctx->pc = 0x2AD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD80Cu;
    // 0x2ad810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BE8u, 0x2AD80Cu, 0x2AD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD814u;
label_2ad814:
    // 0x2ad814: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ad814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad818: 0xc0a5afa  jal         func_296BE8
    ctx->pc = 0x2AD818u;
    SET_GPR_U32(ctx, 31, 0x2AD820u);
    ctx->pc = 0x2AD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD818u;
    // 0x2ad81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BE8u, 0x2AD818u, 0x2AD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD820u;
label_2ad820:
    // 0x2ad820: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ad824: 0x1860005d  blez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2AD824u;
    {
        const bool branch_taken_0x2ad824 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD824u;
        // 0x2ad828: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad824) {
            ctx->pc = 0x2AD99Cu;
            goto label_2ad99c;
        }
    }
    ctx->pc = 0x2AD82Cu;
    // 0x2ad82c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad830: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x2ad830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad834: 0x0  nop
    ctx->pc = 0x2ad834u;
    // NOP
label_2ad838:
    // 0x2ad838: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2ad838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ad83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ad83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ad840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ad844: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AD844u;
    {
        const bool branch_taken_0x2ad844 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD844u;
        // 0x2ad848: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad844) {
            ctx->pc = 0x2AD888u;
            goto label_2ad888;
        }
    }
    ctx->pc = 0x2AD84Cu;
    // 0x2ad84c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ad850: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2ad854: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2ad854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2ad858: 0x255a021  addu        $s4, $s2, $s5
    ctx->pc = 0x2ad858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2ad85c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2ad85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ad860:
    // 0x2ad860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ad860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ad864: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2ad864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2ad868: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ad86c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ad86cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ad870: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2ad870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ad874: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2ad874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad878: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AD878u;
    {
        const bool branch_taken_0x2ad878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad878) {
            ctx->pc = 0x2AD860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad860;
        }
    }
    ctx->pc = 0x2AD880u;
    // 0x2ad880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD880u;
    {
        const bool branch_taken_0x2ad880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad880) {
            ctx->pc = 0x2AD8A0u;
            goto label_2ad8a0;
        }
    }
    ctx->pc = 0x2AD888u;
label_2ad888:
    // 0x2ad888: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2ad888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ad88c: 0x2d51821  addu        $v1, $s6, $s5
    ctx->pc = 0x2ad88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2ad890: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2ad890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2ad894: 0x255a021  addu        $s4, $s2, $s5
    ctx->pc = 0x2ad894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2ad898: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ad898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ad89c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ad89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ad8a0:
    // 0x2ad8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8a4: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x2ad8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x2ad8a8: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AD8A8u;
    SET_GPR_U32(ctx, 31, 0x2AD8B0u);
    ctx->pc = 0x2AD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8A8u;
    // 0x2ad8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AD8A8u, 0x2AD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8B0u;
label_2ad8b0:
    // 0x2ad8b0: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x2ad8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ad8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8b8: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD8B8u;
    SET_GPR_U32(ctx, 31, 0x2AD8C0u);
    ctx->pc = 0x2AD8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8B8u;
    // 0x2ad8bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD8B8u, 0x2AD8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8C0u;
label_2ad8c0:
    // 0x2ad8c0: 0x8fc500b0  lw          $a1, 0xB0($fp)
    ctx->pc = 0x2ad8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x2ad8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8c8: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2ad8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ad8cc: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD8CCu;
    SET_GPR_U32(ctx, 31, 0x2AD8D4u);
    ctx->pc = 0x2AD8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8CCu;
    // 0x2ad8d0: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD8CCu, 0x2AD8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8D4u;
label_2ad8d4:
    // 0x2ad8d4: 0x8fc50054  lw          $a1, 0x54($fp)
    ctx->pc = 0x2ad8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x2ad8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8dc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ad8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ad8e0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD8E0u;
    SET_GPR_U32(ctx, 31, 0x2AD8E8u);
    ctx->pc = 0x2AD8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8E0u;
    // 0x2ad8e4: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD8E0u, 0x2AD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8E8u;
label_2ad8e8:
    // 0x2ad8e8: 0x8fc50054  lw          $a1, 0x54($fp)
    ctx->pc = 0x2ad8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x2ad8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad8f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ad8f4: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD8F4u;
    SET_GPR_U32(ctx, 31, 0x2AD8FCu);
    ctx->pc = 0x2AD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD8F4u;
    // 0x2ad8f8: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD8F4u, 0x2AD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD8FCu;
label_2ad8fc:
    // 0x2ad8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad904: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AD904u;
    SET_GPR_U32(ctx, 31, 0x2AD90Cu);
    ctx->pc = 0x2AD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD904u;
    // 0x2ad908: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AD904u, 0x2AD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD90Cu;
label_2ad90c:
    // 0x2ad90c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ad90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad910: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AD910u;
    SET_GPR_U32(ctx, 31, 0x2AD918u);
    ctx->pc = 0x2AD914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD910u;
    // 0x2ad914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AD910u, 0x2AD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD918u;
label_2ad918:
    // 0x2ad918: 0x8fc500b0  lw          $a1, 0xB0($fp)
    ctx->pc = 0x2ad918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x2ad91c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ad91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad920: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2ad920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ad924: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD924u;
    SET_GPR_U32(ctx, 31, 0x2AD92Cu);
    ctx->pc = 0x2AD928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD924u;
    // 0x2ad928: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD924u, 0x2AD92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD92Cu;
label_2ad92c:
    // 0x2ad92c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2ad92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ad930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad934: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AD934u;
    SET_GPR_U32(ctx, 31, 0x2AD93Cu);
    ctx->pc = 0x2AD938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD934u;
    // 0x2ad938: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AD934u, 0x2AD93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD93Cu;
label_2ad93c:
    // 0x2ad93c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2ad93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ad940: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2ad940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ad944: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AD944u;
    {
        const bool branch_taken_0x2ad944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD944u;
        // 0x2ad948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad944) {
            ctx->pc = 0x2AD974u;
            goto label_2ad974;
        }
    }
    ctx->pc = 0x2AD94Cu;
    // 0x2ad94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad950: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AD950u;
    SET_GPR_U32(ctx, 31, 0x2AD958u);
    ctx->pc = 0x2AD954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD950u;
    // 0x2ad954: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AD950u, 0x2AD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD958u;
label_2ad958:
    // 0x2ad958: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2ad958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ad95c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ad95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad964: 0xc049c48  jal         func_127120
    ctx->pc = 0x2AD964u;
    SET_GPR_U32(ctx, 31, 0x2AD96Cu);
    ctx->pc = 0x2AD968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD964u;
    // 0x2ad968: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2AD964u, 0x2AD96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD96Cu;
label_2ad96c:
    // 0x2ad96c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD96Cu;
    {
        const bool branch_taken_0x2ad96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD96Cu;
        // 0x2ad970: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad96c) {
            ctx->pc = 0x2AD984u;
            goto label_2ad984;
        }
    }
    ctx->pc = 0x2AD974u;
label_2ad974:
    // 0x2ad974: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ad974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad978: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AD978u;
    SET_GPR_U32(ctx, 31, 0x2AD980u);
    ctx->pc = 0x2AD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD978u;
    // 0x2ad97c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AD978u, 0x2AD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD980u;
label_2ad980:
    // 0x2ad980: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2ad984:
    // 0x2ad984: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2ad984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad988: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2ad988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad98c: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2AD98Cu;
    {
        const bool branch_taken_0x2ad98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD98Cu;
        // 0x2ad990: 0x8fb60044  lw          $s6, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad98c) {
            ctx->pc = 0x2AD838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad838;
        }
    }
    ctx->pc = 0x2AD994u;
    // 0x2ad994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD994u;
    {
        const bool branch_taken_0x2ad994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD994u;
        // 0x2ad998: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad994) {
            ctx->pc = 0x2AD9A4u;
            goto label_2ad9a4;
        }
    }
    ctx->pc = 0x2AD99Cu;
label_2ad99c:
    // 0x2ad99c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ad99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad9a0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2ad9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ad9a4:
    // 0x2ad9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AD9A8u;
    SET_GPR_U32(ctx, 31, 0x2AD9B0u);
    ctx->pc = 0x2AD9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD9A8u;
    // 0x2ad9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AD9A8u, 0x2AD9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9B0u;
label_2ad9b0:
    // 0x2ad9b0: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2AD9B0u;
    SET_GPR_U32(ctx, 31, 0x2AD9B8u);
    ctx->pc = 0x2AD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD9B0u;
    // 0x2ad9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2AD9B0u, 0x2AD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9B8u;
label_2ad9b8:
    // 0x2ad9b8: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2AD9B8u;
    SET_GPR_U32(ctx, 31, 0x2AD9C0u);
    ctx->pc = 0x2AD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD9B8u;
    // 0x2ad9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2AD9B8u, 0x2AD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD9C0u;
label_2ad9c0:
    // 0x2ad9c0: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2ad9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ad9c4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2ad9c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ad9c8: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2ad9c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ad9cc: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2ad9ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ad9d0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2ad9d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad9d4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2ad9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad9d8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2ad9d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad9dc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ad9dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad9e0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2ad9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad9e4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2ad9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9E8u;
        // 0x2ad9ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD9F0u;
    // 0x2ad9f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ad9f4: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2ad9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2ad9f8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ad9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ad9fc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2ad9fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada00: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2ada00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2ada04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ada04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada08: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2ada08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2ada0c: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x2ada0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x2ada10: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2ada10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2ada14: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2ada14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2ada18: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2ada18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2ada1c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2ada1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2ada20: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2ada20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2ada24: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2ada24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2ada28: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2ada28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2ada2c: 0x8ca2018c  lw          $v0, 0x18C($a1)
    ctx->pc = 0x2ada2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x2ada30: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2ada30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2ada34: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x2ada34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x2ada38: 0x8cb10190  lw          $s1, 0x190($a1)
    ctx->pc = 0x2ada38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x2ada3c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2ada3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ada40: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x2ada40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x2ada44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ada44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ada48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ada48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ada4c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADA4Cu;
    {
        const bool branch_taken_0x2ada4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA4Cu;
        // 0x2ada50: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada4c) {
            ctx->pc = 0x2ADA74u;
            goto label_2ada74;
        }
    }
    ctx->pc = 0x2ADA54u;
    // 0x2ada54: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2ada54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2ada58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ada58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ada5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ada5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada60: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2ADA60u;
    SET_GPR_U32(ctx, 31, 0x2ADA68u);
    ctx->pc = 0x2ADA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA60u;
    // 0x2ada64: 0x26500068  addiu       $s0, $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2ADA60u, 0x2ADA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA68u;
label_2ada68:
    // 0x2ada68: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2ada68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2ada6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADA6Cu;
    {
        const bool branch_taken_0x2ada6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA6Cu;
        // 0x2ada70: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada6c) {
            ctx->pc = 0x2ADA90u;
            goto label_2ada90;
        }
    }
    ctx->pc = 0x2ADA74u;
label_2ada74:
    // 0x2ada74: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x2ada74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x2ada78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ada78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ada7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ada7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada80: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2ADA80u;
    SET_GPR_U32(ctx, 31, 0x2ADA88u);
    ctx->pc = 0x2ADA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA80u;
    // 0x2ada84: 0x26500074  addiu       $s0, $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2ADA80u, 0x2ADA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA88u;
label_2ada88:
    // 0x2ada88: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2ada88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2ada8c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2ada8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2ada90:
    // 0x2ada90: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2ada90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2ada94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ada94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ada98: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADA98u;
    {
        const bool branch_taken_0x2ada98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ada98) {
            ctx->pc = 0x2ADA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADA98u;
            // 0x2ada9c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADAB4u;
            goto label_2adab4;
        }
    }
    ctx->pc = 0x2ADAA0u;
    // 0x2adaa0: 0xc0a58b8  jal         func_2962E0
    ctx->pc = 0x2ADAA0u;
    SET_GPR_U32(ctx, 31, 0x2ADAA8u);
    ctx->pc = 0x2962E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962E0u, 0x2ADAA0u, 0x2ADAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAA8u;
label_2adaa8:
    // 0x2adaa8: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2ADAA8u;
    {
        const bool branch_taken_0x2adaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAA8u;
        // 0x2adaac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaa8) {
            ctx->pc = 0x2ADD08u;
            goto label_2add08;
        }
    }
    ctx->pc = 0x2ADAB0u;
    // 0x2adab0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2adab4:
    // 0x2adab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADAB4u;
    {
        const bool branch_taken_0x2adab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAB4u;
        // 0x2adab8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adab4) {
            ctx->pc = 0x2ADAD0u;
            goto label_2adad0;
        }
    }
    ctx->pc = 0x2ADABCu;
    // 0x2adabc: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2ADABCu;
    SET_GPR_U32(ctx, 31, 0x2ADAC4u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2ADABCu, 0x2ADAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAC4u;
label_2adac4:
    // 0x2adac4: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2ADAC4u;
    {
        const bool branch_taken_0x2adac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAC4u;
        // 0x2adac8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adac4) {
            ctx->pc = 0x2ADD08u;
            goto label_2add08;
        }
    }
    ctx->pc = 0x2ADACCu;
    // 0x2adacc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2adaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2adad0:
    // 0x2adad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2adad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adad4: 0x24426e70  addiu       $v0, $v0, 0x6E70
    ctx->pc = 0x2adad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x2adad8: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2adad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x2adadc: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2ADADCu;
    SET_GPR_U32(ctx, 31, 0x2ADAE4u);
    ctx->pc = 0x2ADAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADADCu;
    // 0x2adae0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2ADADCu, 0x2ADAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAE4u;
label_2adae4:
    // 0x2adae4: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2ADAE4u;
    {
        const bool branch_taken_0x2adae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADAE4u;
        // 0x2adae8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adae4) {
            ctx->pc = 0x2ADD0Cu;
            goto label_2add0c;
        }
    }
    ctx->pc = 0x2ADAECu;
    // 0x2adaec: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2ADAECu;
    SET_GPR_U32(ctx, 31, 0x2ADAF4u);
    ctx->pc = 0x2ADAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAECu;
    // 0x2adaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2ADAECu, 0x2ADAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAF4u;
label_2adaf4:
    // 0x2adaf4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2adaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2adaf8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2adaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2adafc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2adafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2adb00: 0xc0a587a  jal         func_2961E8
    ctx->pc = 0x2ADB00u;
    SET_GPR_U32(ctx, 31, 0x2ADB08u);
    ctx->pc = 0x2ADB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB00u;
    // 0x2adb04: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961E8u, 0x2ADB00u, 0x2ADB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB08u;
label_2adb08:
    // 0x2adb08: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2ADB08u;
    {
        const bool branch_taken_0x2adb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB08u;
        // 0x2adb0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb08) {
            ctx->pc = 0x2ADD08u;
            goto label_2add08;
        }
    }
    ctx->pc = 0x2ADB10u;
    // 0x2adb10: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2adb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2adb14: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2ADB14u;
    SET_GPR_U32(ctx, 31, 0x2ADB1Cu);
    ctx->pc = 0x2ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB14u;
    // 0x2adb18: 0x8c500188  lw          $s0, 0x188($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2ADB14u, 0x2ADB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB1Cu;
label_2adb1c:
    // 0x2adb1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2adb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb20: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2adb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2adb24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADB24u;
    {
        const bool branch_taken_0x2adb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb24) {
            ctx->pc = 0x2ADB44u;
            goto label_2adb44;
        }
    }
    ctx->pc = 0x2ADB2Cu;
    // 0x2adb2c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2adb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2adb30: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x2adb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2adb34: 0x90640018  lbu         $a0, 0x18($v1)
    ctx->pc = 0x2adb34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2adb38: 0x4983c  dsll32      $s3, $a0, 0
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2adb3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADB3Cu;
    {
        const bool branch_taken_0x2adb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB3Cu;
        // 0x2adb40: 0x13983f  dsra32      $s3, $s3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb3c) {
            ctx->pc = 0x2ADB50u;
            goto label_2adb50;
        }
    }
    ctx->pc = 0x2ADB44u;
label_2adb44:
    // 0x2adb44: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2ADB44u;
    SET_GPR_U32(ctx, 31, 0x2ADB4Cu);
    ctx->pc = 0x2ADB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB44u;
    // 0x2adb48: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2ADB44u, 0x2ADB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB4Cu;
label_2adb4c:
    // 0x2adb4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2adb4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adb50:
    // 0x2adb50: 0xc0a5b04  jal         func_296C10
    ctx->pc = 0x2ADB50u;
    SET_GPR_U32(ctx, 31, 0x2ADB58u);
    ctx->pc = 0x2ADB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB50u;
    // 0x2adb54: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C10u, 0x2ADB50u, 0x2ADB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB58u;
label_2adb58:
    // 0x2adb58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2adb58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb5c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2adb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2adb60: 0x13c20003  beq         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADB60u;
    {
        const bool branch_taken_0x2adb60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB60u;
        // 0x2adb64: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb60) {
            ctx->pc = 0x2ADB70u;
            goto label_2adb70;
        }
    }
    ctx->pc = 0x2ADB68u;
    // 0x2adb68: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ADB68u;
    {
        const bool branch_taken_0x2adb68 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB68u;
        // 0x2adb6c: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb68) {
            ctx->pc = 0x2ADBA0u;
            goto label_2adba0;
        }
    }
    ctx->pc = 0x2ADB70u;
label_2adb70:
    // 0x2adb70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb74: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2adb74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2adb78: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2adb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2adb7c: 0xa4a821  addu        $s5, $a1, $a0
    ctx->pc = 0x2adb7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2adb80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2adb84: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x2adb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2adb88: 0xa4b821  addu        $s7, $a1, $a0
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2adb8c: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x2adb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x2adb90: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2adb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2adb94: 0x24d40064  addiu       $s4, $a2, 0x64
    ctx->pc = 0x2adb94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x2adb98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ADB98u;
    {
        const bool branch_taken_0x2adb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB98u;
        // 0x2adb9c: 0x24d00044  addiu       $s0, $a2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb98) {
            ctx->pc = 0x2ADBC8u;
            goto label_2adbc8;
        }
    }
    ctx->pc = 0x2ADBA0u;
label_2adba0:
    // 0x2adba0: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x2adba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2adba4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2adba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2adba8: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x2adba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2adbac: 0x204a821  addu        $s5, $s0, $a0
    ctx->pc = 0x2adbacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2adbb0: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x2adbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2adbb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2adbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2adbb8: 0x24d40044  addiu       $s4, $a2, 0x44
    ctx->pc = 0x2adbb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 68));
    // 0x2adbbc: 0x204b821  addu        $s7, $s0, $a0
    ctx->pc = 0x2adbbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2adbc0: 0x24d00064  addiu       $s0, $a2, 0x64
    ctx->pc = 0x2adbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x2adbc4: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x2adbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_2adbc8:
    // 0x2adbc8: 0x8cc20184  lw          $v0, 0x184($a2)
    ctx->pc = 0x2adbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x2adbcc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2adbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2adbd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADBD0u;
    {
        const bool branch_taken_0x2adbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBD0u;
        // 0x2adbd4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbd0) {
            ctx->pc = 0x2ADBF4u;
            goto label_2adbf4;
        }
    }
    ctx->pc = 0x2ADBD8u;
    // 0x2adbd8: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2adbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2adbdc: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2adbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2adbe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2adbe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbe4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ADBE4u;
    SET_GPR_U32(ctx, 31, 0x2ADBECu);
    ctx->pc = 0x2ADBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBE4u;
    // 0x2adbe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ADBE4u, 0x2ADBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBECu;
label_2adbec:
    // 0x2adbec: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2ADBECu;
    {
        const bool branch_taken_0x2adbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBECu;
        // 0x2adbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbec) {
            ctx->pc = 0x2ADD24u;
            goto label_2add24;
        }
    }
    ctx->pc = 0x2ADBF4u;
label_2adbf4:
    // 0x2adbf4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2adbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2adbf8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2ADBF8u;
    SET_GPR_U32(ctx, 31, 0x2ADC00u);
    ctx->pc = 0x2ADBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBF8u;
    // 0x2adbfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2ADBF8u, 0x2ADC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC00u;
label_2adc00:
    // 0x2adc00: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2adc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2adc04: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2ADC04u;
    {
        const bool branch_taken_0x2adc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc04) {
            ctx->pc = 0x2ADC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC04u;
            // 0x2adc08: 0x8e4200b0  lw          $v0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADCC0u;
            goto label_2adcc0;
        }
    }
    ctx->pc = 0x2ADC0Cu;
    // 0x2adc0c: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2ADC0Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC14u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2ADC0Cu, 0x2ADC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC14u;
label_2adc14:
    // 0x2adc14: 0xc0a63ae  jal         func_298EB8
    ctx->pc = 0x2ADC14u;
    SET_GPR_U32(ctx, 31, 0x2ADC1Cu);
    ctx->pc = 0x2ADC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC14u;
    // 0x2adc18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EB8u, 0x2ADC14u, 0x2ADC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC1Cu;
label_2adc1c:
    // 0x2adc1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2adc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc20: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2ADC20u;
    SET_GPR_U32(ctx, 31, 0x2ADC28u);
    ctx->pc = 0x2ADC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC20u;
    // 0x2adc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2ADC20u, 0x2ADC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC28u;
label_2adc28:
    // 0x2adc28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2adc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2adc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc30: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ADC30u;
    SET_GPR_U32(ctx, 31, 0x2ADC38u);
    ctx->pc = 0x2ADC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC30u;
    // 0x2adc34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ADC30u, 0x2ADC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC38u;
label_2adc38:
    // 0x2adc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2adc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc40: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ADC40u;
    SET_GPR_U32(ctx, 31, 0x2ADC48u);
    ctx->pc = 0x2ADC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC40u;
    // 0x2adc44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ADC40u, 0x2ADC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC48u;
label_2adc48:
    // 0x2adc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc50: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ADC50u;
    SET_GPR_U32(ctx, 31, 0x2ADC58u);
    ctx->pc = 0x2ADC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC50u;
    // 0x2adc54: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ADC50u, 0x2ADC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC58u;
label_2adc58:
    // 0x2adc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2adc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc60: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2ADC60u;
    SET_GPR_U32(ctx, 31, 0x2ADC68u);
    ctx->pc = 0x2ADC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC60u;
    // 0x2adc64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2ADC60u, 0x2ADC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC68u;
label_2adc68:
    // 0x2adc68: 0x1ac00012  blez        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ADC68u;
    {
        const bool branch_taken_0x2adc68 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2ADC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC68u;
        // 0x2adc6c: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc68) {
            ctx->pc = 0x2ADCB4u;
            goto label_2adcb4;
        }
    }
    ctx->pc = 0x2ADC70u;
    // 0x2adc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc74: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2ADC74u;
    SET_GPR_U32(ctx, 31, 0x2ADC7Cu);
    ctx->pc = 0x2ADC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC74u;
    // 0x2adc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2ADC74u, 0x2ADC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC7Cu;
label_2adc7c:
    // 0x2adc7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2adc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc84: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ADC84u;
    SET_GPR_U32(ctx, 31, 0x2ADC8Cu);
    ctx->pc = 0x2ADC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC84u;
    // 0x2adc88: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ADC84u, 0x2ADC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC8Cu;
label_2adc8c:
    // 0x2adc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc94: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ADC94u;
    SET_GPR_U32(ctx, 31, 0x2ADC9Cu);
    ctx->pc = 0x2ADC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC94u;
    // 0x2adc98: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ADC94u, 0x2ADC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC9Cu;
label_2adc9c:
    // 0x2adc9c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2adc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adca8: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2ADCA8u;
    SET_GPR_U32(ctx, 31, 0x2ADCB0u);
    ctx->pc = 0x2ADCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCA8u;
    // 0x2adcac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2ADCA8u, 0x2ADCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCB0u;
label_2adcb0:
    // 0x2adcb0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2adcb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adcb4:
    // 0x2adcb4: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2ADCB4u;
    SET_GPR_U32(ctx, 31, 0x2ADCBCu);
    ctx->pc = 0x2ADCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCB4u;
    // 0x2adcb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2ADCB4u, 0x2ADCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCBCu;
label_2adcbc:
    // 0x2adcbc: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2adcc0:
    // 0x2adcc0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2adcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcc4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2adcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2adcc8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2adcc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adccc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2adcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2adcd0: 0x33c80002  andi        $t0, $fp, 0x2
    ctx->pc = 0x2adcd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x2adcd4: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2ADCD4u;
    SET_GPR_U32(ctx, 31, 0x2ADCDCu);
    ctx->pc = 0x2ADCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCD4u;
    // 0x2adcd8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2ADCD4u, 0x2ADCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCDCu;
label_2adcdc:
    // 0x2adcdc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ADCDCu;
    {
        const bool branch_taken_0x2adcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCDCu;
        // 0x2adce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcdc) {
            ctx->pc = 0x2ADD20u;
            goto label_2add20;
        }
    }
    ctx->pc = 0x2ADCE4u;
    // 0x2adce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2adce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adce8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2ADCE8u;
    SET_GPR_U32(ctx, 31, 0x2ADCF0u);
    ctx->pc = 0x2ADCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCE8u;
    // 0x2adcec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2ADCE8u, 0x2ADCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCF0u;
label_2adcf0:
    // 0x2adcf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2adcf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2adcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcf8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2ADCF8u;
    SET_GPR_U32(ctx, 31, 0x2ADD00u);
    ctx->pc = 0x2ADCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCF8u;
    // 0x2adcfc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2ADCF8u, 0x2ADD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD00u;
label_2add00:
    // 0x2add00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADD00u;
    {
        const bool branch_taken_0x2add00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD00u;
        // 0x2add04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add00) {
            ctx->pc = 0x2ADD24u;
            goto label_2add24;
        }
    }
    ctx->pc = 0x2ADD08u;
label_2add08:
    // 0x2add08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2add08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2add0c:
    // 0x2add0c: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x2add0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2add10: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2add10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2add14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2add14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add18: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ADD18u;
    SET_GPR_U32(ctx, 31, 0x2ADD20u);
    ctx->pc = 0x2ADD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD18u;
    // 0x2add1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ADD18u, 0x2ADD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD20u;
label_2add20:
    // 0x2add20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2add20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2add24:
    // 0x2add24: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2add24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2add28: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2add28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2add2c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2add2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2add30: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2add30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2add34: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2add34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2add38: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2add38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2add3c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2add3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2add40: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2add40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2add44: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2add44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2add48: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2add48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2add4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD4Cu;
        // 0x2add50: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADD54u;
    // 0x2add54: 0x0  nop
    ctx->pc = 0x2add54u;
    // NOP
    // 0x2add58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2add58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2add5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2add5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2add60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2add60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2add64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2add64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add68: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2add68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2add6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2add6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2add70: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2add70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2add74: 0x8c430184  lw          $v1, 0x184($v0)
    ctx->pc = 0x2add74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2add78: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2ADD78u;
    {
        const bool branch_taken_0x2add78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD78u;
        // 0x2add7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add78) {
            ctx->pc = 0x2ADE4Cu;
            goto label_2ade4c;
        }
    }
    ctx->pc = 0x2ADD80u;
    // 0x2add80: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2add80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2add84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2add84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add88: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2add88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2add8c: 0xc0ae652  jal         func_2B9948
    ctx->pc = 0x2ADD8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD94u);
    ctx->pc = 0x2ADD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD8Cu;
    // 0x2add90: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9948u, 0x2ADD8Cu, 0x2ADD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD94u;
label_2add94:
    // 0x2add94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADD94u;
    {
        const bool branch_taken_0x2add94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD94u;
        // 0x2add98: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add94) {
            ctx->pc = 0x2ADDACu;
            goto label_2addac;
        }
    }
    ctx->pc = 0x2ADD9Cu;
    // 0x2add9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2add9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2adda0: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x2adda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2adda4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2ADDA4u;
    {
        const bool branch_taken_0x2adda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDA4u;
        // 0x2adda8: 0x2406008a  addiu       $a2, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adda4) {
            ctx->pc = 0x2ADE3Cu;
            goto label_2ade3c;
        }
    }
    ctx->pc = 0x2ADDACu;
label_2addac:
    // 0x2addac: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2addacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2addb0: 0xac62018c  sw          $v0, 0x18C($v1)
    ctx->pc = 0x2addb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 2));
    // 0x2addb4: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2addb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2addb8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2addb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2addbc: 0xac820190  sw          $v0, 0x190($a0)
    ctx->pc = 0x2addbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
    // 0x2addc0: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2ADDC0u;
    SET_GPR_U32(ctx, 31, 0x2ADDC8u);
    ctx->pc = 0x2ADDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDC0u;
    // 0x2addc4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2ADDC0u, 0x2ADDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDC8u;
label_2addc8:
    // 0x2addc8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2addc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2addcc: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2ADDCCu;
    SET_GPR_U32(ctx, 31, 0x2ADDD4u);
    ctx->pc = 0x2ADDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDCCu;
    // 0x2addd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2ADDCCu, 0x2ADDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDD4u;
label_2addd4:
    // 0x2addd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2addd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2addd8: 0xc0a5b04  jal         func_296C10
    ctx->pc = 0x2ADDD8u;
    SET_GPR_U32(ctx, 31, 0x2ADDE0u);
    ctx->pc = 0x2ADDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDD8u;
    // 0x2adddc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C10u, 0x2ADDD8u, 0x2ADDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDE0u;
label_2adde0:
    // 0x2adde0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2adde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2adde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adde8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2adde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2addec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2addecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2addf0: 0xc0ab79a  jal         func_2ADE68
    ctx->pc = 0x2ADDF0u;
    SET_GPR_U32(ctx, 31, 0x2ADDF8u);
    ctx->pc = 0x2ADDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDF0u;
    // 0x2addf4: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE68u, 0x2ADDF0u, 0x2ADDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDF8u;
label_2addf8:
    // 0x2addf8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2ADDF8u;
    SET_GPR_U32(ctx, 31, 0x2ADE00u);
    ctx->pc = 0x2ADDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDF8u;
    // 0x2addfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2ADDF8u, 0x2ADE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE00u;
label_2ade00:
    // 0x2ade00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ade00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade04: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2ADE04u;
    {
        const bool branch_taken_0x2ade04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE04u;
        // 0x2ade08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade04) {
            ctx->pc = 0x2ADE30u;
            goto label_2ade30;
        }
    }
    ctx->pc = 0x2ADE0Cu;
    // 0x2ade0c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2ade0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2ade10: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2ade10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ade14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade18: 0xac700184  sw          $s0, 0x184($v1)
    ctx->pc = 0x2ade18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 16));
    // 0x2ade1c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2ade20: 0xc0ab5e4  jal         func_2AD790
    ctx->pc = 0x2ADE20u;
    SET_GPR_U32(ctx, 31, 0x2ADE28u);
    ctx->pc = 0x2ADE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE20u;
    // 0x2ade24: 0xac470188  sw          $a3, 0x188($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD790u;
    goto label_2ad790;
    ctx->pc = 0x2ADE28u;
label_2ade28:
    // 0x2ade28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADE28u;
    {
        const bool branch_taken_0x2ade28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE28u;
        // 0x2ade2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade28) {
            ctx->pc = 0x2ADE4Cu;
            goto label_2ade4c;
        }
    }
    ctx->pc = 0x2ADE30u;
label_2ade30:
    // 0x2ade30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ade30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ade34: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x2ade34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2ade38: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2ade3c:
    // 0x2ade3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ade3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade40: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ADE40u;
    SET_GPR_U32(ctx, 31, 0x2ADE48u);
    ctx->pc = 0x2ADE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE40u;
    // 0x2ade44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ADE40u, 0x2ADE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE48u;
label_2ade48:
    // 0x2ade48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ade48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ade4c:
    // 0x2ade4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ade4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ade50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ade50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ade54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ade54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ade58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ade58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ade5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE5Cu;
        // 0x2ade60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE64u;
    // 0x2ade64: 0x0  nop
    ctx->pc = 0x2ade64u;
    // NOP
    if (ctx->pc == 0x2ade64u) { ctx->pc = 0x2ade68u; }
}
