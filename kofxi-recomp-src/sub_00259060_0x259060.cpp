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

// Function: sub_00259060
// Address: 0x259060 - 0x259228
void sub_00259060_0x259060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259060_0x259060");
#endif

    switch (ctx->pc) {
        case 0x259098u: goto label_259098;
        case 0x2590a0u: goto label_2590a0;
        case 0x2590dcu: goto label_2590dc;
        case 0x2590e4u: goto label_2590e4;
        case 0x2590f0u: goto label_2590f0;
        case 0x2590fcu: goto label_2590fc;
        case 0x25910cu: goto label_25910c;
        case 0x259138u: goto label_259138;
        case 0x25916cu: goto label_25916c;
        default: break;
    }

    ctx->pc = 0x259060u;

    // 0x259060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x259064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x259064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259068: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x259068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25906c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x259070: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x259070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259074: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x259074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x259078: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x259078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25907c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259080: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x259080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x259084: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x259084u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x259088: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259088u;
    {
        const bool branch_taken_0x259088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259088u;
        // 0x25908c: 0x8e920030  lw          $s2, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259088) {
            ctx->pc = 0x259098u;
            goto label_259098;
        }
    }
    ctx->pc = 0x259090u;
    // 0x259090: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x259090u;
    {
        const bool branch_taken_0x259090 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x259090) {
            ctx->pc = 0x259094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259090u;
            // 0x259094: 0x8e91002c  lw          $s1, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2590C0u;
            goto label_2590c0;
        }
    }
    ctx->pc = 0x259098u;
label_259098:
    // 0x259098: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x259098u;
    {
        const bool branch_taken_0x259098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259098u;
        // 0x25909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259098) {
            ctx->pc = 0x259204u;
            goto label_259204;
        }
    }
    ctx->pc = 0x2590A0u;
label_2590a0:
    // 0x2590a0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2590a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2590a4: 0xa6330012  sh          $s3, 0x12($s1)
    ctx->pc = 0x2590a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 19));
    // 0x2590a8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2590a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2590ac: 0xa6330010  sh          $s3, 0x10($s1)
    ctx->pc = 0x2590acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 19));
    // 0x2590b0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2590b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2590b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2590b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2590b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2590B8u;
    {
        const bool branch_taken_0x2590b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590B8u;
        // 0x2590bc: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590b8) {
            ctx->pc = 0x259110u;
            goto label_259110;
        }
    }
    ctx->pc = 0x2590C0u;
label_2590c0:
    // 0x2590c0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2590C0u;
    {
        const bool branch_taken_0x2590c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590C0u;
        // 0x2590c4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590c0) {
            ctx->pc = 0x2590DCu;
            goto label_2590dc;
        }
    }
    ctx->pc = 0x2590C8u;
    // 0x2590c8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2590c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2590cc: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2590CCu;
    {
        const bool branch_taken_0x2590cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2590cc) {
            ctx->pc = 0x2590D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590CCu;
            // 0x2590d0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x2590D4u;
    // 0x2590d4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2590D4u;
    SET_GPR_U32(ctx, 31, 0x2590DCu);
    ctx->pc = 0x2590D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590D4u;
    // 0x2590d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2590D4u, 0x2590DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590DCu;
label_2590dc:
    // 0x2590dc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2590DCu;
    SET_GPR_U32(ctx, 31, 0x2590E4u);
    ctx->pc = 0x2590E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590DCu;
    // 0x2590e0: 0xae80002c  sw          $zero, 0x2C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2590DCu, 0x2590E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590E4u;
label_2590e4:
    // 0x2590e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2590e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590e8: 0xc098552  jal         func_261548
    ctx->pc = 0x2590E8u;
    SET_GPR_U32(ctx, 31, 0x2590F0u);
    ctx->pc = 0x2590ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590E8u;
    // 0x2590ec: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2590E8u, 0x2590F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590F0u;
label_2590f0:
    // 0x2590f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2590f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590f4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2590F4u;
    SET_GPR_U32(ctx, 31, 0x2590FCu);
    ctx->pc = 0x2590F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590F4u;
    // 0x2590f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2590F4u, 0x2590FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590FCu;
label_2590fc:
    // 0x2590fc: 0x1620ffe8  bnez        $s1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2590FCu;
    {
        const bool branch_taken_0x2590fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x259100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590FCu;
        // 0x259100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590fc) {
            ctx->pc = 0x2590A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2590a0;
        }
    }
    ctx->pc = 0x259104u;
    // 0x259104: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x259104u;
    SET_GPR_U32(ctx, 31, 0x25910Cu);
    ctx->pc = 0x259108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259104u;
    // 0x259108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x259104u, 0x25910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25910Cu;
label_25910c:
    // 0x25910c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25910cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259110:
    // 0x259110: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x259110u;
    {
        const bool branch_taken_0x259110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259110u;
        // 0x259114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259110) {
            ctx->pc = 0x259204u;
            goto label_259204;
        }
    }
    ctx->pc = 0x259118u;
    // 0x259118: 0x1220ffdf  beqz        $s1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x259118u;
    {
        const bool branch_taken_0x259118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259118u;
        // 0x25911c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259118) {
            ctx->pc = 0x259098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259098;
        }
    }
    ctx->pc = 0x259120u;
    // 0x259120: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x259120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x259124: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x259124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x259128: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x259128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25912c: 0x0  nop
    ctx->pc = 0x25912cu;
    // NOP
label_259130:
    // 0x259130: 0xc048c96  jal         func_123258
    ctx->pc = 0x259130u;
    SET_GPR_U32(ctx, 31, 0x259138u);
    ctx->pc = 0x259134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259130u;
    // 0x259134: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x259130u, 0x259138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259138u;
label_259138:
    // 0x259138: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x259138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25913c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259140: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x259140u;
    {
        const bool branch_taken_0x259140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259140u;
        // 0x259144: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259140) {
            ctx->pc = 0x2591A0u;
            goto label_2591a0;
        }
    }
    ctx->pc = 0x259148u;
    // 0x259148: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x259148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25914c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x25914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x259150: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x259150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259154: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x259154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x259158: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x259158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25915c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x25915cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x259160: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x259160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x259164: 0xc08a262  jal         func_228988
    ctx->pc = 0x259164u;
    SET_GPR_U32(ctx, 31, 0x25916Cu);
    ctx->pc = 0x259168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259164u;
    // 0x259168: 0xa2050009  sb          $a1, 0x9($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x259164u, 0x25916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25916Cu;
label_25916c:
    // 0x25916c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x25916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x259170: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x259170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x259174: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x259174u;
    {
        const bool branch_taken_0x259174 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x259178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259174u;
        // 0x259178: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259174) {
            ctx->pc = 0x25919Cu;
            goto label_25919c;
        }
    }
    ctx->pc = 0x25917Cu;
    // 0x25917c: 0x8a420047  lwl         $v0, 0x47($s2)
    ctx->pc = 0x25917cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x259180: 0x9a420044  lwr         $v0, 0x44($s2)
    ctx->pc = 0x259180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x259184: 0xaa02000f  swl         $v0, 0xF($s0)
    ctx->pc = 0x259184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259188: 0xba02000c  swr         $v0, 0xC($s0)
    ctx->pc = 0x259188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25918c: 0x8a42004b  lwl         $v0, 0x4B($s2)
    ctx->pc = 0x25918cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x259190: 0x9a420048  lwr         $v0, 0x48($s2)
    ctx->pc = 0x259190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x259194: 0xaa020013  swl         $v0, 0x13($s0)
    ctx->pc = 0x259194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x259198: 0xba020010  swr         $v0, 0x10($s0)
    ctx->pc = 0x259198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_25919c:
    // 0x25919c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2591a0:
    // 0x2591a0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2591A0u;
    {
        const bool branch_taken_0x2591a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2591A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591A0u;
        // 0x2591a4: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2591a0) {
            ctx->pc = 0x2591C8u;
            goto label_2591c8;
        }
    }
    ctx->pc = 0x2591A8u;
    // 0x2591a8: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x2591a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2591ac: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x2591acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2591b0: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x2591b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x2591b4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2591b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2591b8: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x2591b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2591bc: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x2591bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x2591c0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2591c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2591c4: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2591c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_2591c8:
    // 0x2591c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2591c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591cc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2591d0: 0xa8a30007  swl         $v1, 0x7($a1)
    ctx->pc = 0x2591d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2591d4: 0xb8a30004  swr         $v1, 0x4($a1)
    ctx->pc = 0x2591d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2591d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2591d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591dc: 0xa8a3000b  swl         $v1, 0xB($a1)
    ctx->pc = 0x2591dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2591e0: 0xb8a30008  swr         $v1, 0x8($a1)
    ctx->pc = 0x2591e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2591e4: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x2591e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x2591e8: 0xa0a00013  sb          $zero, 0x13($a1)
    ctx->pc = 0x2591e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2591ec: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x2591ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2591f0: 0xa0a0000e  sb          $zero, 0xE($a1)
    ctx->pc = 0x2591f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2591f4: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x2591f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2591f8: 0xa0a00010  sb          $zero, 0x10($a1)
    ctx->pc = 0x2591f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2591fc: 0xa0a00011  sb          $zero, 0x11($a1)
    ctx->pc = 0x2591fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x259200: 0xa0a00012  sb          $zero, 0x12($a1)
    ctx->pc = 0x259200u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 0));
label_259204:
    // 0x259204: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x259204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259208: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25920c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25920cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259210: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x259210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259214: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x259214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25921c: 0x3e00008  jr          $ra
    ctx->pc = 0x25921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25921Cu;
        // 0x259220: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25921Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259224u;
    // 0x259224: 0x0  nop
    ctx->pc = 0x259224u;
    // NOP
    if (ctx->pc == 0x259224u) { ctx->pc = 0x259228u; }
}
