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

// Function: sub_00245048
// Address: 0x245048 - 0x245228
void sub_00245048_0x245048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245048_0x245048");
#endif

    switch (ctx->pc) {
        case 0x245090u: goto label_245090;
        case 0x245108u: goto label_245108;
        case 0x245124u: goto label_245124;
        case 0x245138u: goto label_245138;
        case 0x245178u: goto label_245178;
        case 0x245188u: goto label_245188;
        case 0x2451d4u: goto label_2451d4;
        default: break;
    }

    ctx->pc = 0x245048u;

    // 0x245048: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x245048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24504c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x245050: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x245050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x245054: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x245054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245058: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x245058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24505c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24505cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245064: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245068: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x245068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24506c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x24506cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245070: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x245070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x245074: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x245074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245078: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x245078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24507c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245080: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x245080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x245084: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x245084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x245088: 0xc08a946  jal         func_22A518
    ctx->pc = 0x245088u;
    SET_GPR_U32(ctx, 31, 0x245090u);
    ctx->pc = 0x24508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245088u;
    // 0x24508c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A518u, 0x245088u, 0x245090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245090u;
label_245090:
    // 0x245090: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x245090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245094: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x245094u;
    {
        const bool branch_taken_0x245094 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x245098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245094u;
        // 0x245098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245094) {
            ctx->pc = 0x2451F8u;
            goto label_2451f8;
        }
    }
    ctx->pc = 0x24509Cu;
    // 0x24509c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x24509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2450a0: 0x12c2000e  beq         $s6, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2450A0u;
    {
        const bool branch_taken_0x2450a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2450A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A0u;
        // 0x2450a4: 0x2ac20010  slti        $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a0) {
            ctx->pc = 0x2450DCu;
            goto label_2450dc;
        }
    }
    ctx->pc = 0x2450A8u;
    // 0x2450a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2450A8u;
    {
        const bool branch_taken_0x2450a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A8u;
        // 0x2450ac: 0x2ac2000e  slti        $v0, $s6, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a8) {
            ctx->pc = 0x2450C4u;
            goto label_2450c4;
        }
    }
    ctx->pc = 0x2450B0u;
    // 0x2450b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2450b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2450b4: 0x12c2000b  beq         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2450B4u;
    {
        const bool branch_taken_0x2450b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2450B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B4u;
        // 0x2450b8: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450b4) {
            ctx->pc = 0x2450E4u;
            goto label_2450e4;
        }
    }
    ctx->pc = 0x2450BCu;
    // 0x2450bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2450BCu;
    {
        const bool branch_taken_0x2450bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450BCu;
        // 0x2450c0: 0x2e6201cd  sltiu       $v0, $s3, 0x1CD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)461) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450bc) {
            ctx->pc = 0x2450F4u;
            goto label_2450f4;
        }
    }
    ctx->pc = 0x2450C4u;
label_2450c4:
    // 0x2450c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2450C4u;
    {
        const bool branch_taken_0x2450c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450C4u;
        // 0x2450c8: 0x2ac2000c  slti        $v0, $s6, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450c4) {
            ctx->pc = 0x2450ECu;
            goto label_2450ec;
        }
    }
    ctx->pc = 0x2450CCu;
    // 0x2450cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2450CCu;
    {
        const bool branch_taken_0x2450cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450CCu;
        // 0x2450d0: 0x24130078  addiu       $s3, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450cc) {
            ctx->pc = 0x2450F0u;
            goto label_2450f0;
        }
    }
    ctx->pc = 0x2450D4u;
    // 0x2450d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2450D4u;
    {
        const bool branch_taken_0x2450d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450D4u;
        // 0x2450d8: 0x24130014  addiu       $s3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450d4) {
            ctx->pc = 0x2450F0u;
            goto label_2450f0;
        }
    }
    ctx->pc = 0x2450DCu;
label_2450dc:
    // 0x2450dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2450DCu;
    {
        const bool branch_taken_0x2450dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450DCu;
        // 0x2450e0: 0x24130098  addiu       $s3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450dc) {
            ctx->pc = 0x2450F0u;
            goto label_2450f0;
        }
    }
    ctx->pc = 0x2450E4u;
label_2450e4:
    // 0x2450e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2450E4u;
    {
        const bool branch_taken_0x2450e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450E4u;
        // 0x2450e8: 0x24130018  addiu       $s3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450e4) {
            ctx->pc = 0x2450F0u;
            goto label_2450f0;
        }
    }
    ctx->pc = 0x2450ECu;
label_2450ec:
    // 0x2450ec: 0x24130078  addiu       $s3, $zero, 0x78
    ctx->pc = 0x2450ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2450f0:
    // 0x2450f0: 0x2e6201cd  sltiu       $v0, $s3, 0x1CD
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)461) ? 1 : 0);
label_2450f4:
    // 0x2450f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2450F4u;
    {
        const bool branch_taken_0x2450f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450F4u;
        // 0x2450f8: 0x2e6200e1  sltiu       $v0, $s3, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450f4) {
            ctx->pc = 0x245110u;
            goto label_245110;
        }
    }
    ctx->pc = 0x2450FCu;
    // 0x2450fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2450fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x245100: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x245100u;
    SET_GPR_U32(ctx, 31, 0x245108u);
    ctx->pc = 0x245104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245100u;
    // 0x245104: 0x24846750  addiu       $a0, $a0, 0x6750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x245100u, 0x245108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245108u;
label_245108:
    // 0x245108: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x245108u;
    {
        const bool branch_taken_0x245108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245108u;
        // 0x24510c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245108) {
            ctx->pc = 0x245160u;
            goto label_245160;
        }
    }
    ctx->pc = 0x245110u;
label_245110:
    // 0x245110: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x245110u;
    {
        const bool branch_taken_0x245110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245110) {
            ctx->pc = 0x245114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245110u;
            // 0x245114: 0xae53000c  sw          $s3, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245158u;
            goto label_245158;
        }
    }
    ctx->pc = 0x245118u;
    // 0x245118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24511c: 0xc08a922  jal         func_22A488
    ctx->pc = 0x24511Cu;
    SET_GPR_U32(ctx, 31, 0x245124u);
    ctx->pc = 0x245120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24511Cu;
    // 0x245120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x24511Cu, 0x245124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245128: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245128u;
    {
        const bool branch_taken_0x245128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245128u;
        // 0x24512c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245128) {
            ctx->pc = 0x245140u;
            goto label_245140;
        }
    }
    ctx->pc = 0x245130u;
    // 0x245130: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x245130u;
    SET_GPR_U32(ctx, 31, 0x245138u);
    ctx->pc = 0x245134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245130u;
    // 0x245134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x245130u, 0x245138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245138u;
label_245138:
    // 0x245138: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x245138u;
    {
        const bool branch_taken_0x245138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245138u;
        // 0x24513c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245138) {
            ctx->pc = 0x2451F8u;
            goto label_2451f8;
        }
    }
    ctx->pc = 0x245140u;
label_245140:
    // 0x245140: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x245140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x245144: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x245144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
    // 0x245148: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x245148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x24514c: 0x2662ff20  addiu       $v0, $s3, -0xE0
    ctx->pc = 0x24514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967072));
    // 0x245150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245150u;
    {
        const bool branch_taken_0x245150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245150u;
        // 0x245154: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245150) {
            ctx->pc = 0x24515Cu;
            goto label_24515c;
        }
    }
    ctx->pc = 0x245158u;
label_245158:
    // 0x245158: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x245158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
label_24515c:
    // 0x24515c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x24515cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_245160:
    // 0x245160: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x245160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24516c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24516cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245170: 0xc08aee0  jal         func_22BB80
    ctx->pc = 0x245170u;
    SET_GPR_U32(ctx, 31, 0x245178u);
    ctx->pc = 0x245174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245170u;
    // 0x245174: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB80u, 0x245170u, 0x245178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245178u;
label_245178:
    // 0x245178: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x245178u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24517c: 0x8e550008  lw          $s5, 0x8($s2)
    ctx->pc = 0x24517cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x245180: 0x26f10004  addiu       $s1, $s7, 0x4
    ctx->pc = 0x245180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x245184: 0x0  nop
    ctx->pc = 0x245184u;
    // NOP
label_245188:
    // 0x245188: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x245188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24518c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x24518Cu;
    {
        const bool branch_taken_0x24518c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x245190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24518Cu;
        // 0x245190: 0x29e1804  sllv        $v1, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24518c) {
            ctx->pc = 0x2451D4u;
            goto label_2451d4;
        }
    }
    ctx->pc = 0x245194u;
    // 0x245194: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x245198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x245198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24519c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x24519cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2451a0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2451a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2451a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2451A4u;
    {
        const bool branch_taken_0x2451a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451A4u;
        // 0x2451a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451a4) {
            ctx->pc = 0x2451BCu;
            goto label_2451bc;
        }
    }
    ctx->pc = 0x2451ACu;
    // 0x2451ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2451b0: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2451b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2451b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2451B4u;
    {
        const bool branch_taken_0x2451b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451B4u;
        // 0x2451b8: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451b4) {
            ctx->pc = 0x2451C0u;
            goto label_2451c0;
        }
    }
    ctx->pc = 0x2451BCu;
label_2451bc:
    // 0x2451bc: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2451c0:
    // 0x2451c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2451c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2451c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2451c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451cc: 0xc08aee0  jal         func_22BB80
    ctx->pc = 0x2451CCu;
    SET_GPR_U32(ctx, 31, 0x2451D4u);
    ctx->pc = 0x2451D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451CCu;
    // 0x2451d0: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB80u, 0x2451CCu, 0x2451D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451D4u;
label_2451d4:
    // 0x2451d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2451d8: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x2451d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2451dc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2451DCu;
    {
        const bool branch_taken_0x2451dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2451E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451DCu;
        // 0x2451e0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451dc) {
            ctx->pc = 0x245188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245188;
        }
    }
    ctx->pc = 0x2451E4u;
    // 0x2451e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2451e8: 0xa2b60003  sb          $s6, 0x3($s5)
    ctx->pc = 0x2451e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x2451ec: 0xa6b30000  sh          $s3, 0x0($s5)
    ctx->pc = 0x2451ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x2451f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2451f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451f4: 0xa2a30002  sb          $v1, 0x2($s5)
    ctx->pc = 0x2451f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 3));
label_2451f8:
    // 0x2451f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2451f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2451fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2451fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x245200: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x245200u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x245204: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x245204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245208: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x245208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24520c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24520cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245210: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x245210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245214: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245218: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24521c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24521cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245220: 0x3e00008  jr          $ra
    ctx->pc = 0x245220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245220u;
        // 0x245224: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245228u;
}
