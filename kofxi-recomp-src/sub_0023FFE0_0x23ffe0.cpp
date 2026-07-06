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

// Function: sub_0023FFE0
// Address: 0x23ffe0 - 0x240310
void sub_0023FFE0_0x23ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FFE0_0x23ffe0");
#endif

    switch (ctx->pc) {
        case 0x240090u: goto label_240090;
        case 0x24009cu: goto label_24009c;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400d0u: goto label_2400d0;
        case 0x24016cu: goto label_24016c;
        case 0x24017cu: goto label_24017c;
        case 0x24019cu: goto label_24019c;
        case 0x2401acu: goto label_2401ac;
        case 0x2401bcu: goto label_2401bc;
        case 0x240248u: goto label_240248;
        case 0x240258u: goto label_240258;
        case 0x240278u: goto label_240278;
        case 0x240288u: goto label_240288;
        case 0x240298u: goto label_240298;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e4u: goto label_2402e4;
        default: break;
    }

    ctx->pc = 0x23ffe0u;

    // 0x23ffe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ffe4: 0x3c02c014  lui         $v0, 0xC014
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49172 << 16));
    // 0x23ffe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23ffec: 0x3442697b  ori         $v0, $v0, 0x697B
    ctx->pc = 0x23ffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27003);
    // 0x23fff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fff4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23fff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fffc: 0x10a200ac  beq         $a1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x23FFFCu;
    {
        const bool branch_taken_0x23fffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x240000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFFCu;
        // 0x240000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fffc) {
            ctx->pc = 0x2402B0u;
            goto label_2402b0;
        }
    }
    ctx->pc = 0x240004u;
    // 0x240004: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x240004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x240008: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240008u;
    {
        const bool branch_taken_0x240008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240008) {
            ctx->pc = 0x240038u;
            goto label_240038;
        }
    }
    ctx->pc = 0x240010u;
    // 0x240010: 0x3c028014  lui         $v0, 0x8014
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32788 << 16));
    // 0x240014: 0x3442697c  ori         $v0, $v0, 0x697C
    ctx->pc = 0x240014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27004);
    // 0x240018: 0x10a200a8  beq         $a1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x240018u;
    {
        const bool branch_taken_0x240018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x240018) {
            ctx->pc = 0x2402BCu;
            goto label_2402bc;
        }
    }
    ctx->pc = 0x240020u;
    // 0x240020: 0x3c028c6c  lui         $v0, 0x8C6C
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35948 << 16));
    // 0x240024: 0x3442697a  ori         $v0, $v0, 0x697A
    ctx->pc = 0x240024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27002);
    // 0x240028: 0x10a20067  beq         $a1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x240028u;
    {
        const bool branch_taken_0x240028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240028u;
        // 0x24002c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240028) {
            ctx->pc = 0x2401C8u;
            goto label_2401c8;
        }
    }
    ctx->pc = 0x240030u;
    // 0x240030: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x240030u;
    {
        const bool branch_taken_0x240030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240030u;
        // 0x240034: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240030) {
            ctx->pc = 0x2402FCu;
            goto label_2402fc;
        }
    }
    ctx->pc = 0x240038u;
label_240038:
    // 0x240038: 0x3c02c0a8  lui         $v0, 0xC0A8
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49320 << 16));
    // 0x24003c: 0x34426978  ori         $v0, $v0, 0x6978
    ctx->pc = 0x24003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27000);
    // 0x240040: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x240040u;
    {
        const bool branch_taken_0x240040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x240044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240040u;
        // 0x240044: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240040) {
            ctx->pc = 0x240080u;
            goto label_240080;
        }
    }
    ctx->pc = 0x240048u;
    // 0x240048: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240048u;
    {
        const bool branch_taken_0x240048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240048) {
            ctx->pc = 0x240068u;
            goto label_240068;
        }
    }
    ctx->pc = 0x240050u;
    // 0x240050: 0x3c02c014  lui         $v0, 0xC014
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49172 << 16));
    // 0x240054: 0x3442697d  ori         $v0, $v0, 0x697D
    ctx->pc = 0x240054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27005);
    // 0x240058: 0x10a200a4  beq         $a1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x240058u;
    {
        const bool branch_taken_0x240058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240058u;
        // 0x24005c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240058) {
            ctx->pc = 0x2402ECu;
            goto label_2402ec;
        }
    }
    ctx->pc = 0x240060u;
    // 0x240060: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x240060u;
    {
        const bool branch_taken_0x240060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240060u;
        // 0x240064: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240060) {
            ctx->pc = 0x2402FCu;
            goto label_2402fc;
        }
    }
    ctx->pc = 0x240068u;
label_240068:
    // 0x240068: 0x3c02cc6c  lui         $v0, 0xCC6C
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52332 << 16));
    // 0x24006c: 0x34426979  ori         $v0, $v0, 0x6979
    ctx->pc = 0x24006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27001);
    // 0x240070: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x240070u;
    {
        const bool branch_taken_0x240070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x240074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240070u;
        // 0x240074: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240070) {
            ctx->pc = 0x2400D8u;
            goto label_2400d8;
        }
    }
    ctx->pc = 0x240078u;
    // 0x240078: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x240078u;
    {
        const bool branch_taken_0x240078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240078u;
        // 0x24007c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240078) {
            ctx->pc = 0x2402FCu;
            goto label_2402fc;
        }
    }
    ctx->pc = 0x240080u;
label_240080:
    // 0x240080: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x240084: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x240084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x240088: 0xc08a254  jal         func_228950
    ctx->pc = 0x240088u;
    SET_GPR_U32(ctx, 31, 0x240090u);
    ctx->pc = 0x24008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240088u;
    // 0x24008c: 0x8e0402b8  lw          $a0, 0x2B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x240088u, 0x240090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240090u;
label_240090:
    // 0x240090: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x240090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x240094: 0xc08a254  jal         func_228950
    ctx->pc = 0x240094u;
    SET_GPR_U32(ctx, 31, 0x24009Cu);
    ctx->pc = 0x240098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240094u;
    // 0x240098: 0x8e0402bc  lw          $a0, 0x2BC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x240094u, 0x24009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24009Cu;
label_24009c:
    // 0x24009c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x24009cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2400a0: 0xc08a254  jal         func_228950
    ctx->pc = 0x2400A0u;
    SET_GPR_U32(ctx, 31, 0x2400A8u);
    ctx->pc = 0x2400A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400A0u;
    // 0x2400a4: 0x8e0402c0  lw          $a0, 0x2C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2400A0u, 0x2400A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400A8u;
label_2400a8:
    // 0x2400a8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2400a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2400ac: 0xc08a254  jal         func_228950
    ctx->pc = 0x2400ACu;
    SET_GPR_U32(ctx, 31, 0x2400B4u);
    ctx->pc = 0x2400B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400ACu;
    // 0x2400b0: 0x8e0402c4  lw          $a0, 0x2C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x2400ACu, 0x2400B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400B4u;
label_2400b4:
    // 0x2400b4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2400b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2400b8: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x2400bc: 0x2605455c  addiu       $a1, $s0, 0x455C
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 17756));
    // 0x2400c0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2400c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2400c4: 0x8e02027c  lw          $v0, 0x27C($s0)
    ctx->pc = 0x2400c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x2400c8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2400C8u;
    SET_GPR_U32(ctx, 31, 0x2400D0u);
    ctx->pc = 0x2400CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400C8u;
    // 0x2400cc: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2400C8u, 0x2400D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2400D0u;
    {
        const bool branch_taken_0x2400d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400D0u;
        // 0x2400d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400d0) {
            ctx->pc = 0x2402F8u;
            goto label_2402f8;
        }
    }
    ctx->pc = 0x2400D8u;
label_2400d8:
    // 0x2400d8: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x2400dc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2400e0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2400e4: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2400e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2400e8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2400e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2400ec: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2400f0: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2400F0u;
    {
        const bool branch_taken_0x2400f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400f0) {
            ctx->pc = 0x2400F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2400F0u;
            // 0x2400f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2400F8u;
            goto label_2400f8;
        }
    }
    ctx->pc = 0x2400F8u;
label_2400f8:
    // 0x2400f8: 0x26054028  addiu       $a1, $s0, 0x4028
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16424));
    // 0x2400fc: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x2400fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x240100: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x240100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x240104: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x240104u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240108: 0x1012  mflo        $v0
    ctx->pc = 0x240108u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24010c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x24010cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x240110: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x240114: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x240114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x240118: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x24011c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x24011cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x240120: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x240120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x240124: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x240124u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240128: 0x1012  mflo        $v0
    ctx->pc = 0x240128u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24012c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x24012cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x240130: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x240134: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x240134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x240138: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x24013c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x24013cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x240140: 0x8e024020  lw          $v0, 0x4020($s0)
    ctx->pc = 0x240140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16416)));
    // 0x240144: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x240144u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240148: 0x1012  mflo        $v0
    ctx->pc = 0x240148u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24014c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x24014cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x240150: 0x8e034024  lw          $v1, 0x4024($s0)
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16420)));
    // 0x240154: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x240154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x240158: 0x96024018  lhu         $v0, 0x4018($s0)
    ctx->pc = 0x240158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16408)));
    // 0x24015c: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x24015cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x240160: 0x9603401a  lhu         $v1, 0x401A($s0)
    ctx->pc = 0x240160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16410)));
    // 0x240164: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240164u;
    SET_GPR_U32(ctx, 31, 0x24016Cu);
    ctx->pc = 0x240168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240164u;
    // 0x240168: 0xa6230036  sh          $v1, 0x36($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240164u, 0x24016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24016Cu;
label_24016c:
    // 0x24016c: 0x26240138  addiu       $a0, $s1, 0x138
    ctx->pc = 0x24016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x240170: 0x26054128  addiu       $a1, $s0, 0x4128
    ctx->pc = 0x240170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16680));
    // 0x240174: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240174u;
    SET_GPR_U32(ctx, 31, 0x24017Cu);
    ctx->pc = 0x240178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240174u;
    // 0x240178: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240174u, 0x24017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24017Cu;
label_24017c:
    // 0x24017c: 0x96034238  lhu         $v1, 0x4238($s0)
    ctx->pc = 0x24017cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16952)));
    // 0x240180: 0x2624023c  addiu       $a0, $s1, 0x23C
    ctx->pc = 0x240180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 572));
    // 0x240184: 0x26054248  addiu       $a1, $s0, 0x4248
    ctx->pc = 0x240184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16968));
    // 0x240188: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x240188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24018c: 0xa6230238  sh          $v1, 0x238($s1)
    ctx->pc = 0x24018cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 568), (uint16_t)GPR_U32(ctx, 3));
    // 0x240190: 0x9602423a  lhu         $v0, 0x423A($s0)
    ctx->pc = 0x240190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16954)));
    // 0x240194: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240194u;
    SET_GPR_U32(ctx, 31, 0x24019Cu);
    ctx->pc = 0x240198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240194u;
    // 0x240198: 0xa622023a  sh          $v0, 0x23A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 570), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240194u, 0x24019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24019Cu;
label_24019c:
    // 0x24019c: 0x2624033c  addiu       $a0, $s1, 0x33C
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 828));
    // 0x2401a0: 0x26054348  addiu       $a1, $s0, 0x4348
    ctx->pc = 0x2401a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 17224));
    // 0x2401a4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2401A4u;
    SET_GPR_U32(ctx, 31, 0x2401ACu);
    ctx->pc = 0x2401A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401A4u;
    // 0x2401a8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2401A4u, 0x2401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401ACu;
label_2401ac:
    // 0x2401ac: 0x2624043c  addiu       $a0, $s1, 0x43C
    ctx->pc = 0x2401acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1084));
    // 0x2401b0: 0x260545dc  addiu       $a1, $s0, 0x45DC
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 17884));
    // 0x2401b4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2401B4u;
    SET_GPR_U32(ctx, 31, 0x2401BCu);
    ctx->pc = 0x2401B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401B4u;
    // 0x2401b8: 0x24060418  addiu       $a2, $zero, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2401B4u, 0x2401BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401BCu;
label_2401bc:
    // 0x2401bc: 0x26240854  addiu       $a0, $s1, 0x854
    ctx->pc = 0x2401bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
    // 0x2401c0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2401C0u;
    {
        const bool branch_taken_0x2401c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C0u;
        // 0x2401c4: 0x260549f4  addiu       $a1, $s0, 0x49F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401c0) {
            ctx->pc = 0x2402A0u;
            goto label_2402a0;
        }
    }
    ctx->pc = 0x2401C8u;
label_2401c8:
    // 0x2401c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2401c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2401cc: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2401ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2401d0: 0x26044028  addiu       $a0, $s0, 0x4028
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16424));
    // 0x2401d4: 0x26250038  addiu       $a1, $s1, 0x38
    ctx->pc = 0x2401d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x2401d8: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x2401d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    // 0x2401dc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2401e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2401e4: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x2401e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2401e8: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x2401e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    // 0x2401ec: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2401f0: 0xae0302ac  sw          $v1, 0x2AC($s0)
    ctx->pc = 0x2401f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
    // 0x2401f4: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2401f8: 0xae0702a8  sw          $a3, 0x2A8($s0)
    ctx->pc = 0x2401f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 7));
    // 0x2401fc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2401fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x240200: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x240200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x240204: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x240204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
    // 0x240208: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x240208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24020c: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x24020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    // 0x240210: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x240210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x240214: 0xae0702d4  sw          $a3, 0x2D4($s0)
    ctx->pc = 0x240214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 7));
    // 0x240218: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x240218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x24021c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x24021cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x240220: 0xae024020  sw          $v0, 0x4020($s0)
    ctx->pc = 0x240220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 2));
    // 0x240224: 0xae024240  sw          $v0, 0x4240($s0)
    ctx->pc = 0x240224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16960), GPR_U32(ctx, 2));
    // 0x240228: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x240228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24022c: 0xae034024  sw          $v1, 0x4024($s0)
    ctx->pc = 0x24022cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16420), GPR_U32(ctx, 3));
    // 0x240230: 0xae034244  sw          $v1, 0x4244($s0)
    ctx->pc = 0x240230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16964), GPR_U32(ctx, 3));
    // 0x240234: 0x96220034  lhu         $v0, 0x34($s1)
    ctx->pc = 0x240234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x240238: 0xa6024018  sh          $v0, 0x4018($s0)
    ctx->pc = 0x240238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16408), (uint16_t)GPR_U32(ctx, 2));
    // 0x24023c: 0x96230036  lhu         $v1, 0x36($s1)
    ctx->pc = 0x24023cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x240240: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240240u;
    SET_GPR_U32(ctx, 31, 0x240248u);
    ctx->pc = 0x240244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240240u;
    // 0x240244: 0xa603401a  sh          $v1, 0x401A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 16410), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240240u, 0x240248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240248u;
label_240248:
    // 0x240248: 0x26044128  addiu       $a0, $s0, 0x4128
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16680));
    // 0x24024c: 0x26250138  addiu       $a1, $s1, 0x138
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x240250: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240250u;
    SET_GPR_U32(ctx, 31, 0x240258u);
    ctx->pc = 0x240254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240250u;
    // 0x240254: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240250u, 0x240258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240258u;
label_240258:
    // 0x240258: 0x96230238  lhu         $v1, 0x238($s1)
    ctx->pc = 0x240258u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x24025c: 0x26044248  addiu       $a0, $s0, 0x4248
    ctx->pc = 0x24025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16968));
    // 0x240260: 0x2625023c  addiu       $a1, $s1, 0x23C
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 572));
    // 0x240264: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x240268: 0xa6034238  sh          $v1, 0x4238($s0)
    ctx->pc = 0x240268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16952), (uint16_t)GPR_U32(ctx, 3));
    // 0x24026c: 0x9622023a  lhu         $v0, 0x23A($s1)
    ctx->pc = 0x24026cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x240270: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240270u;
    SET_GPR_U32(ctx, 31, 0x240278u);
    ctx->pc = 0x240274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240270u;
    // 0x240274: 0xa602423a  sh          $v0, 0x423A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 16954), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240270u, 0x240278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240278u;
label_240278:
    // 0x240278: 0x26044348  addiu       $a0, $s0, 0x4348
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17224));
    // 0x24027c: 0x2625033c  addiu       $a1, $s1, 0x33C
    ctx->pc = 0x24027cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 828));
    // 0x240280: 0xc04a966  jal         func_12A598
    ctx->pc = 0x240280u;
    SET_GPR_U32(ctx, 31, 0x240288u);
    ctx->pc = 0x240284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240280u;
    // 0x240284: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x240280u, 0x240288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240288u;
label_240288:
    // 0x240288: 0x260445dc  addiu       $a0, $s0, 0x45DC
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17884));
    // 0x24028c: 0x2625043c  addiu       $a1, $s1, 0x43C
    ctx->pc = 0x24028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1084));
    // 0x240290: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x240290u;
    SET_GPR_U32(ctx, 31, 0x240298u);
    ctx->pc = 0x240294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240290u;
    // 0x240294: 0x24060418  addiu       $a2, $zero, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x240290u, 0x240298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240298u;
label_240298:
    // 0x240298: 0x260449f4  addiu       $a0, $s0, 0x49F4
    ctx->pc = 0x240298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18932));
    // 0x24029c: 0x26250854  addiu       $a1, $s1, 0x854
    ctx->pc = 0x24029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
label_2402a0:
    // 0x2402a0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2402A0u;
    SET_GPR_U32(ctx, 31, 0x2402A8u);
    ctx->pc = 0x2402A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402A0u;
    // 0x2402a4: 0x24060418  addiu       $a2, $zero, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2402A0u, 0x2402A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402A8u;
label_2402a8:
    // 0x2402a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2402A8u;
    {
        const bool branch_taken_0x2402a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402A8u;
        // 0x2402ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402a8) {
            ctx->pc = 0x2402F8u;
            goto label_2402f8;
        }
    }
    ctx->pc = 0x2402B0u;
label_2402b0:
    // 0x2402b0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2402b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2402B4u;
    {
        const bool branch_taken_0x2402b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402B4u;
        // 0x2402b8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402b4) {
            ctx->pc = 0x2402F4u;
            goto label_2402f4;
        }
    }
    ctx->pc = 0x2402BCu;
label_2402bc:
    // 0x2402bc: 0xc08ef2e  jal         func_23BCB8
    ctx->pc = 0x2402BCu;
    SET_GPR_U32(ctx, 31, 0x2402C4u);
    ctx->pc = 0x2402C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402BCu;
    // 0x2402c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCB8u, 0x2402BCu, 0x2402C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402C4u;
label_2402c4:
    // 0x2402c4: 0xc08f526  jal         func_23D498
    ctx->pc = 0x2402C4u;
    SET_GPR_U32(ctx, 31, 0x2402CCu);
    ctx->pc = 0x2402C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402C4u;
    // 0x2402c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D498u, 0x2402C4u, 0x2402CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402CCu;
label_2402cc:
    // 0x2402cc: 0xc08f90a  jal         func_23E428
    ctx->pc = 0x2402CCu;
    SET_GPR_U32(ctx, 31, 0x2402D4u);
    ctx->pc = 0x2402D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402CCu;
    // 0x2402d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E428u, 0x2402CCu, 0x2402D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402D4u;
label_2402d4:
    // 0x2402d4: 0xc08fdc6  jal         func_23F718
    ctx->pc = 0x2402D4u;
    SET_GPR_U32(ctx, 31, 0x2402DCu);
    ctx->pc = 0x2402D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402D4u;
    // 0x2402d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F718u, 0x2402D4u, 0x2402DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402DCu;
label_2402dc:
    // 0x2402dc: 0xc08fb28  jal         func_23ECA0
    ctx->pc = 0x2402DCu;
    SET_GPR_U32(ctx, 31, 0x2402E4u);
    ctx->pc = 0x2402E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402DCu;
    // 0x2402e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ECA0u, 0x2402DCu, 0x2402E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402E4u;
label_2402e4:
    // 0x2402e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2402E4u;
    {
        const bool branch_taken_0x2402e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402E4u;
        // 0x2402e8: 0xae004e0c  sw          $zero, 0x4E0C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 19980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402e4) {
            ctx->pc = 0x2402F4u;
            goto label_2402f4;
        }
    }
    ctx->pc = 0x2402ECu;
label_2402ec:
    // 0x2402ec: 0x8e024e0c  lw          $v0, 0x4E0C($s0)
    ctx->pc = 0x2402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19980)));
    // 0x2402f0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2402f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2402f4:
    // 0x2402f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2402f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2402f8:
    // 0x2402f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2402f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2402fc:
    // 0x2402fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2402fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240304: 0x3e00008  jr          $ra
    ctx->pc = 0x240304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240304u;
        // 0x240308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24030Cu;
    // 0x24030c: 0x0  nop
    ctx->pc = 0x24030cu;
    // NOP
    if (ctx->pc == 0x24030cu) { ctx->pc = 0x240310u; }
}
