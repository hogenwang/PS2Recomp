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

// Function: sub_002B6068
// Address: 0x2b6068 - 0x2b6210
void sub_002B6068_0x2b6068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6068_0x2b6068");
#endif

    switch (ctx->pc) {
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        case 0x2b60b0u: goto label_2b60b0;
        case 0x2b60b4u: goto label_2b60b4;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60c8u: goto label_2b60c8;
        case 0x2b60ccu: goto label_2b60cc;
        case 0x2b60d0u: goto label_2b60d0;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b60d8u: goto label_2b60d8;
        case 0x2b60dcu: goto label_2b60dc;
        case 0x2b60e0u: goto label_2b60e0;
        case 0x2b60e4u: goto label_2b60e4;
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b60ecu: goto label_2b60ec;
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b60f4u: goto label_2b60f4;
        case 0x2b60f8u: goto label_2b60f8;
        case 0x2b60fcu: goto label_2b60fc;
        case 0x2b6100u: goto label_2b6100;
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6108u: goto label_2b6108;
        case 0x2b610cu: goto label_2b610c;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6118u: goto label_2b6118;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6120u: goto label_2b6120;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b612cu: goto label_2b612c;
        case 0x2b6130u: goto label_2b6130;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b613cu: goto label_2b613c;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6144u: goto label_2b6144;
        case 0x2b6148u: goto label_2b6148;
        case 0x2b614cu: goto label_2b614c;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6158u: goto label_2b6158;
        case 0x2b615cu: goto label_2b615c;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b6164u: goto label_2b6164;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b616cu: goto label_2b616c;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b6174u: goto label_2b6174;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b618cu: goto label_2b618c;
        case 0x2b6190u: goto label_2b6190;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b6198u: goto label_2b6198;
        case 0x2b619cu: goto label_2b619c;
        case 0x2b61a0u: goto label_2b61a0;
        case 0x2b61a4u: goto label_2b61a4;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61b0u: goto label_2b61b0;
        case 0x2b61b4u: goto label_2b61b4;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61bcu: goto label_2b61bc;
        case 0x2b61c0u: goto label_2b61c0;
        case 0x2b61c4u: goto label_2b61c4;
        case 0x2b61c8u: goto label_2b61c8;
        case 0x2b61ccu: goto label_2b61cc;
        case 0x2b61d0u: goto label_2b61d0;
        case 0x2b61d4u: goto label_2b61d4;
        case 0x2b61d8u: goto label_2b61d8;
        case 0x2b61dcu: goto label_2b61dc;
        case 0x2b61e0u: goto label_2b61e0;
        case 0x2b61e4u: goto label_2b61e4;
        case 0x2b61e8u: goto label_2b61e8;
        case 0x2b61ecu: goto label_2b61ec;
        case 0x2b61f0u: goto label_2b61f0;
        case 0x2b61f4u: goto label_2b61f4;
        case 0x2b61f8u: goto label_2b61f8;
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6200u: goto label_2b6200;
        case 0x2b6204u: goto label_2b6204;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b620cu: goto label_2b620c;
        default: break;
    }

    ctx->pc = 0x2b6068u;

label_2b6068:
    // 0x2b6068: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b606c:
    // 0x2b606c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6070:
    // 0x2b6070: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b6074:
    // 0x2b6074: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2b6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2b6078:
    // 0x2b6078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b607c:
    // 0x2b607c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2b607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2b6080:
    // 0x2b6080: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2b6080u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b6084:
    // 0x2b6084: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2b6088:
    // 0x2b6088: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2b608c:
    // 0x2b608c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2b608cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b6090:
    // 0x2b6090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b6094:
    // 0x2b6094: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b6094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6098:
    // 0x2b6098: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b609c:
    // 0x2b609c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b609cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b60a0:
    // 0x2b60a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b60a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b60a4:
    // 0x2b60a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b60a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b60a8:
    // 0x2b60a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b60ac:
    // 0x2b60ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b60acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b60b0:
    // 0x2b60b0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2b60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2b60b4:
    // 0x2b60b4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b60b8:
    // 0x2b60b8: 0x8c5300e4  lw          $s3, 0xE4($v0)
    ctx->pc = 0x2b60b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2b60bc:
    // 0x2b60bc: 0xc0ac604  jal         func_2B1810
label_2b60c0:
    if (ctx->pc == 0x2B60C0u) {
        ctx->pc = 0x2B60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60BCu;
        // 0x2b60c0: 0xac4000e4  sw          $zero, 0xE4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60C4u;
        goto label_2b60c4;
    }
    ctx->pc = 0x2B60BCu;
    SET_GPR_U32(ctx, 31, 0x2B60C4u);
    ctx->pc = 0x2B60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60BCu;
    // 0x2b60c0: 0xac4000e4  sw          $zero, 0xE4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2B60BCu, 0x2B60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60C4u;
label_2b60c4:
    // 0x2b60c4: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b60c8:
    // 0x2b60c8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_2b60cc:
    if (ctx->pc == 0x2B60CCu) {
        ctx->pc = 0x2B60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60C8u;
        // 0x2b60cc: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60D0u;
        goto label_2b60d0;
    }
    ctx->pc = 0x2B60C8u;
    {
        const bool branch_taken_0x2b60c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b60c8) {
            ctx->pc = 0x2B60CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B60C8u;
            // 0x2b60cc: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B60D0u;
label_2b60d0:
    // 0x2b60d0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b60d4:
    // 0x2b60d4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2b60d8:
    if (ctx->pc == 0x2B60D8u) {
        ctx->pc = 0x2B60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60D4u;
        // 0x2b60d8: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60DCu;
        goto label_2b60dc;
    }
    ctx->pc = 0x2B60D4u;
    {
        const bool branch_taken_0x2b60d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b60d4) {
            ctx->pc = 0x2B60D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B60D4u;
            // 0x2b60d8: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B60DCu;
label_2b60dc:
    // 0x2b60dc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b60e0:
    // 0x2b60e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b60e4:
    if (ctx->pc == 0x2B60E4u) {
        ctx->pc = 0x2B60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60E0u;
        // 0x2b60e4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60E8u;
        goto label_2b60e8;
    }
    ctx->pc = 0x2B60E0u;
    {
        const bool branch_taken_0x2b60e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60E0u;
        // 0x2b60e4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60e0) {
            ctx->pc = 0x2B60F4u;
            goto label_2b60f4;
        }
    }
    ctx->pc = 0x2B60E8u;
label_2b60e8:
    // 0x2b60e8: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_2b60ec:
    // 0x2b60ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b60f0:
    if (ctx->pc == 0x2B60F0u) {
        ctx->pc = 0x2B60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60ECu;
        // 0x2b60f0: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60F4u;
        goto label_2b60f4;
    }
    ctx->pc = 0x2B60ECu;
    {
        const bool branch_taken_0x2b60ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60ECu;
        // 0x2b60f0: 0x2406044d  addiu       $a2, $zero, 0x44D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60ec) {
            ctx->pc = 0x2B611Cu;
            goto label_2b611c;
        }
    }
    ctx->pc = 0x2B60F4u;
label_2b60f4:
    // 0x2b60f4: 0x40f809  jalr        $v0
label_2b60f8:
    if (ctx->pc == 0x2B60F8u) {
        ctx->pc = 0x2B60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F4u;
        // 0x2b60f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60FCu;
        goto label_2b60fc;
    }
    ctx->pc = 0x2B60F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B60FCu);
        ctx->pc = 0x2B60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F4u;
        // 0x2b60f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60F4u, 0x2B60FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B60FCu;
label_2b60fc:
    // 0x2b60fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b60fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6100:
    // 0x2b6100: 0x6000037  bltz        $s0, . + 4 + (0x37 << 2)
label_2b6104:
    if (ctx->pc == 0x2B6104u) {
        ctx->pc = 0x2B6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6100u;
        // 0x2b6104: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6108u;
        goto label_2b6108;
    }
    ctx->pc = 0x2B6100u;
    {
        const bool branch_taken_0x2b6100 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6100u;
        // 0x2b6104: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6100) {
            ctx->pc = 0x2B61E0u;
            goto label_2b61e0;
        }
    }
    ctx->pc = 0x2B6108u;
label_2b6108:
    // 0x2b6108: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_2b610c:
    if (ctx->pc == 0x2B610Cu) {
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6110u;
        goto label_2b6110;
    }
    ctx->pc = 0x2B6108u;
    {
        const bool branch_taken_0x2b6108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2539023  subu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6108) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B6110u;
label_2b6110:
    // 0x2b6110: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b6114:
    // 0x2b6114: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x2b6114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_2b6118:
    // 0x2b6118: 0x240600e5  addiu       $a2, $zero, 0xE5
    ctx->pc = 0x2b6118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_2b611c:
    // 0x2b611c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b611cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6120:
    // 0x2b6120: 0xc0a5648  jal         func_295920
label_2b6124:
    if (ctx->pc == 0x2B6124u) {
        ctx->pc = 0x2B6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6120u;
        // 0x2b6124: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6128u;
        goto label_2b6128;
    }
    ctx->pc = 0x2B6120u;
    SET_GPR_U32(ctx, 31, 0x2B6128u);
    ctx->pc = 0x2B6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6120u;
    // 0x2b6124: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B6120u, 0x2B6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6128u;
label_2b6128:
    // 0x2b6128: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2b612c:
    if (ctx->pc == 0x2B612Cu) {
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6130u;
        goto label_2b6130;
    }
    ctx->pc = 0x2B6128u;
    {
        const bool branch_taken_0x2b6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6128) {
            ctx->pc = 0x2B61DCu;
            goto label_2b61dc;
        }
    }
    ctx->pc = 0x2B6130u;
label_2b6130:
    // 0x2b6130: 0x8e270110  lw          $a3, 0x110($s1)
    ctx->pc = 0x2b6130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2b6134:
    // 0x2b6134: 0x3d3a021  addu        $s4, $fp, $s3
    ctx->pc = 0x2b6134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_2b6138:
    // 0x2b6138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b613c:
    // 0x2b613c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b613cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b6140:
    // 0x2b6140: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x2b6140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2b6144:
    // 0x2b6144: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b6144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b6148:
    // 0x2b6148: 0xc0ad884  jal         func_2B6210
label_2b614c:
    if (ctx->pc == 0x2B614Cu) {
        ctx->pc = 0x2B614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6148u;
        // 0x2b614c: 0x242380a  movz        $a3, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6150u;
        goto label_2b6150;
    }
    ctx->pc = 0x2B6148u;
    SET_GPR_U32(ctx, 31, 0x2B6150u);
    ctx->pc = 0x2B614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6148u;
    // 0x2b614c: 0x242380a  movz        $a3, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6210u, 0x2B6148u, 0x2B6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6150u;
label_2b6150:
    // 0x2b6150: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2b6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b6154:
    // 0x2b6154: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_2b6158:
    if (ctx->pc == 0x2B6158u) {
        ctx->pc = 0x2B6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6154u;
        // 0x2b6158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B615Cu;
        goto label_2b615c;
    }
    ctx->pc = 0x2B6154u;
    {
        const bool branch_taken_0x2b6154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6154u;
        // 0x2b6158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6154) {
            ctx->pc = 0x2B619Cu;
            goto label_2b619c;
        }
    }
    ctx->pc = 0x2B615Cu;
label_2b615c:
    // 0x2b615c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x2b615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2b6160:
    // 0x2b6160: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b6164:
    if (ctx->pc == 0x2B6164u) {
        ctx->pc = 0x2B6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6160u;
        // 0x2b6164: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6168u;
        goto label_2b6168;
    }
    ctx->pc = 0x2B6160u;
    {
        const bool branch_taken_0x2b6160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6160) {
            ctx->pc = 0x2B6164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6160u;
            // 0x2b6164: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6174u;
            goto label_2b6174;
        }
    }
    ctx->pc = 0x2B6168u;
label_2b6168:
    // 0x2b6168: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b6168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b616c:
    // 0x2b616c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b6170:
    if (ctx->pc == 0x2B6170u) {
        ctx->pc = 0x2B6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B616Cu;
        // 0x2b6170: 0x8e3700d0  lw          $s7, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6174u;
        goto label_2b6174;
    }
    ctx->pc = 0x2B616Cu;
    {
        const bool branch_taken_0x2b616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B616Cu;
        // 0x2b6170: 0x8e3700d0  lw          $s7, 0xD0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b616c) {
            ctx->pc = 0x2B6188u;
            goto label_2b6188;
        }
    }
    ctx->pc = 0x2B6174u;
label_2b6174:
    // 0x2b6174: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2b6174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_2b6178:
    // 0x2b6178: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b617c:
    if (ctx->pc == 0x2B617Cu) {
        ctx->pc = 0x2B6180u;
        goto label_2b6180;
    }
    ctx->pc = 0x2B6178u;
    {
        const bool branch_taken_0x2b6178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6178) {
            ctx->pc = 0x2B6188u;
            goto label_2b6188;
        }
    }
    ctx->pc = 0x2B6180u;
label_2b6180:
    // 0x2b6180: 0x8c57008c  lw          $s7, 0x8C($v0)
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2b6184:
    // 0x2b6184: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2b6184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6188:
    // 0x2b6188: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2b618c:
    if (ctx->pc == 0x2B618Cu) {
        ctx->pc = 0x2B618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6188u;
        // 0x2b618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6190u;
        goto label_2b6190;
    }
    ctx->pc = 0x2B6188u;
    {
        const bool branch_taken_0x2b6188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6188u;
        // 0x2b618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6188) {
            ctx->pc = 0x2B619Cu;
            goto label_2b619c;
        }
    }
    ctx->pc = 0x2B6190u;
label_2b6190:
    // 0x2b6190: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b6190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b6194:
    // 0x2b6194: 0x2a0f809  jalr        $s5
label_2b6198:
    if (ctx->pc == 0x2B6198u) {
        ctx->pc = 0x2B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6194u;
        // 0x2b6198: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B619Cu;
        goto label_2b619c;
    }
    ctx->pc = 0x2B6194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2B619Cu);
        ctx->pc = 0x2B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6194u;
        // 0x2b6198: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6194u, 0x2B619Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B619Cu;
label_2b619c:
    // 0x2b619c: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
label_2b61a0:
    if (ctx->pc == 0x2B61A0u) {
        ctx->pc = 0x2B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B619Cu;
        // 0x2b61a0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61A4u;
        goto label_2b61a4;
    }
    ctx->pc = 0x2B619Cu;
    {
        const bool branch_taken_0x2b619c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B619Cu;
        // 0x2b61a0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b619c) {
            ctx->pc = 0x2B61B4u;
            goto label_2b61b4;
        }
    }
    ctx->pc = 0x2B61A4u;
label_2b61a4:
    // 0x2b61a4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b61a8:
    // 0x2b61a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b61a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b61ac:
    // 0x2b61ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b61b0:
    if (ctx->pc == 0x2B61B0u) {
        ctx->pc = 0x2B61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61ACu;
        // 0x2b61b0: 0xac7300e4  sw          $s3, 0xE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61B4u;
        goto label_2b61b4;
    }
    ctx->pc = 0x2B61ACu;
    {
        const bool branch_taken_0x2b61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61ACu;
        // 0x2b61b0: 0xac7300e4  sw          $s3, 0xE4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61ac) {
            ctx->pc = 0x2B61DCu;
            goto label_2b61dc;
        }
    }
    ctx->pc = 0x2B61B4u;
label_2b61b4:
    // 0x2b61b4: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_2b61b8:
    if (ctx->pc == 0x2B61B8u) {
        ctx->pc = 0x2B61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61B4u;
        // 0x2b61b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61BCu;
        goto label_2b61bc;
    }
    ctx->pc = 0x2B61B4u;
    {
        const bool branch_taken_0x2b61b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61B4u;
        // 0x2b61b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61b4) {
            ctx->pc = 0x2B61C8u;
            goto label_2b61c8;
        }
    }
    ctx->pc = 0x2B61BCu;
label_2b61bc:
    // 0x2b61bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b61bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b61c0:
    // 0x2b61c0: 0xc0ab99e  jal         func_2AE678
label_2b61c4:
    if (ctx->pc == 0x2B61C4u) {
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61C8u;
        goto label_2b61c8;
    }
    ctx->pc = 0x2B61C0u;
    SET_GPR_U32(ctx, 31, 0x2B61C8u);
    ctx->pc = 0x2B61C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61C0u;
    // 0x2b61c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE678u, 0x2B61C0u, 0x2B61C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61C8u;
label_2b61c8:
    // 0x2b61c8: 0x12120003  beq         $s0, $s2, . + 4 + (0x3 << 2)
label_2b61cc:
    if (ctx->pc == 0x2B61CCu) {
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D0u;
        goto label_2b61d0;
    }
    ctx->pc = 0x2B61C8u;
    {
        const bool branch_taken_0x2b61c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c8) {
            ctx->pc = 0x2B61D8u;
            goto label_2b61d8;
        }
    }
    ctx->pc = 0x2B61D0u;
label_2b61d0:
    // 0x2b61d0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_2b61d4:
    if (ctx->pc == 0x2B61D4u) {
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D8u;
        goto label_2b61d8;
    }
    ctx->pc = 0x2B61D0u;
    {
        const bool branch_taken_0x2b61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61d0) {
            ctx->pc = 0x2B6130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B61D8u;
label_2b61d8:
    // 0x2b61d8: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2b61dc:
    // 0x2b61dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b61dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b61e0:
    // 0x2b61e0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2b61e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b61e4:
    // 0x2b61e4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2b61e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b61e8:
    // 0x2b61e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b61e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b61ec:
    // 0x2b61ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b61ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b61f0:
    // 0x2b61f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b61f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b61f4:
    // 0x2b61f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b61f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b61f8:
    // 0x2b61f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b61f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b61fc:
    // 0x2b61fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b61fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6200:
    // 0x2b6200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6204:
    // 0x2b6204: 0x3e00008  jr          $ra
label_2b6208:
    if (ctx->pc == 0x2B6208u) {
        ctx->pc = 0x2B6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6204u;
        // 0x2b6208: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B620Cu;
        goto label_2b620c;
    }
    ctx->pc = 0x2B6204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6204u;
        // 0x2b6208: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B620Cu;
label_2b620c:
    // 0x2b620c: 0x0  nop
    ctx->pc = 0x2b620cu;
    // NOP
    if (ctx->pc == 0x2b620cu) { ctx->pc = 0x2b6210u; }
}
