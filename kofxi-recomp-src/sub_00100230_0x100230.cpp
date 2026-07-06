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

// Function: sub_00100230
// Address: 0x100230 - 0x1003c0
void sub_00100230_0x100230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100230_0x100230");
#endif

    switch (ctx->pc) {
        case 0x1002a4u: goto label_1002a4;
        case 0x1002dcu: goto label_1002dc;
        case 0x1002f4u: goto label_1002f4;
        case 0x100300u: goto label_100300;
        case 0x100350u: goto label_100350;
        default: break;
    }

    ctx->pc = 0x100230u;

    // 0x100230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100234: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x100234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x100238: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x100238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10023c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x100240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x100244: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100248: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10024c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x10024cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x100250: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100254: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x100254u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x100258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10025c: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x10025cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x100260: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x100264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100268: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x100268u;
    {
        const bool branch_taken_0x100268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100268u;
        // 0x10026c: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100268) {
            ctx->pc = 0x100330u;
            goto label_100330;
        }
    }
    ctx->pc = 0x100270u;
    // 0x100270: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x100270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100274: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x100274u;
    {
        const bool branch_taken_0x100274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100274) {
            ctx->pc = 0x100278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100274u;
            // 0x100278: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10028Cu;
            goto label_10028c;
        }
    }
    ctx->pc = 0x10027Cu;
    // 0x10027c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10027Cu;
    {
        const bool branch_taken_0x10027c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10027Cu;
        // 0x100280: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10027c) {
            ctx->pc = 0x10029Cu;
            goto label_10029c;
        }
    }
    ctx->pc = 0x100284u;
    // 0x100284: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x100284u;
    {
        const bool branch_taken_0x100284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100284u;
        // 0x100288: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100284) {
            ctx->pc = 0x1003ACu;
            goto label_1003ac;
        }
    }
    ctx->pc = 0x10028Cu;
label_10028c:
    // 0x10028c: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10028Cu;
    {
        const bool branch_taken_0x10028c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x100290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10028Cu;
        // 0x100290: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10028c) {
            ctx->pc = 0x100348u;
            goto label_100348;
        }
    }
    ctx->pc = 0x100294u;
    // 0x100294: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x100294u;
    {
        const bool branch_taken_0x100294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100294u;
        // 0x100298: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100294) {
            ctx->pc = 0x1003ACu;
            goto label_1003ac;
        }
    }
    ctx->pc = 0x10029Cu;
label_10029c:
    // 0x10029c: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x10029Cu;
    SET_GPR_U32(ctx, 31, 0x1002A4u);
    ctx->pc = 0x1003C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003C0u, 0x10029Cu, 0x1002A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002A4u;
label_1002a4:
    // 0x1002a4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1002a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1002a8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1002ac: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1002acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1002b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1002b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002b4: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1002b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1002b8: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1002b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1002bc: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x1002bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1002c0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1002c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1002c4: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1002c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1002c8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1002c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1002cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1002ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1002d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1002d4: 0xc0433e8  jal         func_10CFA0
    ctx->pc = 0x1002D4u;
    SET_GPR_U32(ctx, 31, 0x1002DCu);
    ctx->pc = 0x1002D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002D4u;
    // 0x1002d8: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFA0u, 0x1002D4u, 0x1002DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002DCu;
label_1002dc:
    // 0x1002dc: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x1002dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1002e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1002e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1002e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1002E4u;
    {
        const bool branch_taken_0x1002e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002E4u;
        // 0x1002e8: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002e4) {
            ctx->pc = 0x100308u;
            goto label_100308;
        }
    }
    ctx->pc = 0x1002ECu;
    // 0x1002ec: 0xc0435d0  jal         func_10D740
    ctx->pc = 0x1002ECu;
    SET_GPR_U32(ctx, 31, 0x1002F4u);
    ctx->pc = 0x1002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ECu;
    // 0x1002f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D740u, 0x1002ECu, 0x1002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002F4u;
label_1002f4:
    // 0x1002f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1002f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1002f8: 0xc043258  jal         func_10C960
    ctx->pc = 0x1002F8u;
    SET_GPR_U32(ctx, 31, 0x100300u);
    ctx->pc = 0x1002FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002F8u;
    // 0x1002fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x1002F8u, 0x100300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100300u;
label_100300:
    // 0x100300: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x100300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x100304: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x100304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_100308:
    // 0x100308: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x100308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x10030c: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x10030cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x100310: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x100310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x100314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100318: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10031c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10031cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x100320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100328: 0x8043218  j           func_10C860
    ctx->pc = 0x100328u;
    ctx->pc = 0x10032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100328u;
    // 0x10032c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C860u, 0x100328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x100330u;
label_100330:
    // 0x100330: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x100330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x100334: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100338: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x100338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x10033c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x10033cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x100340: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x100340u;
    {
        const bool branch_taken_0x100340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100340u;
        // 0x100344: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100340) {
            ctx->pc = 0x1003A8u;
            goto label_1003a8;
        }
    }
    ctx->pc = 0x100348u;
label_100348:
    // 0x100348: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x100348u;
    SET_GPR_U32(ctx, 31, 0x100350u);
    ctx->pc = 0x1003C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003C0u, 0x100348u, 0x100350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100350u;
label_100350:
    // 0x100350: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x100350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x100354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100358: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x100358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x10035c: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x10035cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x100360: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x100360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100364: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x100368: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x100368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x10036c: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x10036cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x100370: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x100370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x100374: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x100374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x100378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10037c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x10037cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x100380: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x100380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x100384: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x100384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x100388: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x100388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x10038c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100390: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100394: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100398: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x100398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10039c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10039cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003a0: 0x8043218  j           func_10C860
    ctx->pc = 0x1003A0u;
    ctx->pc = 0x1003A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003A0u;
    // 0x1003a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C860u, 0x1003A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1003A8u;
label_1003a8:
    // 0x1003a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1003a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1003ac:
    // 0x1003ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1003acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1003b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1003b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1003b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1003b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1003B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003B8u;
        // 0x1003bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1003B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1003C0u;
}
