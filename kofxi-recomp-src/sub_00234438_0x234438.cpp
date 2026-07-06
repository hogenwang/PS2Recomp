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

// Function: sub_00234438
// Address: 0x234438 - 0x234820
void sub_00234438_0x234438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234438_0x234438");
#endif

    switch (ctx->pc) {
        case 0x23449cu: goto label_23449c;
        case 0x234520u: goto label_234520;
        case 0x234558u: goto label_234558;
        case 0x234570u: goto label_234570;
        case 0x23457cu: goto label_23457c;
        case 0x234590u: goto label_234590;
        case 0x234598u: goto label_234598;
        case 0x2345acu: goto label_2345ac;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345ecu: goto label_2345ec;
        case 0x23460cu: goto label_23460c;
        case 0x234648u: goto label_234648;
        case 0x234660u: goto label_234660;
        case 0x23466cu: goto label_23466c;
        case 0x23468cu: goto label_23468c;
        case 0x234728u: goto label_234728;
        case 0x2347b4u: goto label_2347b4;
        default: break;
    }

    ctx->pc = 0x234438u;

    // 0x234438: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23443c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x234440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x234444: 0x8c62fcbc  lw          $v0, -0x344($v1)
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966460)));
    // 0x234448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23444c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x234450: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x234450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x234454: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x234454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x234458: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x234458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23445c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x234460: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x234460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x234464: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x234464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x234468: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23446c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23446Cu;
    {
        const bool branch_taken_0x23446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23446Cu;
        // 0x234470: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23446c) {
            ctx->pc = 0x234488u;
            goto label_234488;
        }
    }
    ctx->pc = 0x234474u;
    // 0x234474: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x234474u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x234478: 0x2602fcd0  addiu       $v0, $s0, -0x330
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966480));
    // 0x23447c: 0xae00fcd0  sw          $zero, -0x330($s0)
    ctx->pc = 0x23447cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966480), GPR_U32(ctx, 0));
    // 0x234480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234480u;
    {
        const bool branch_taken_0x234480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234480u;
        // 0x234484: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234480) {
            ctx->pc = 0x23448Cu;
            goto label_23448c;
        }
    }
    ctx->pc = 0x234488u;
label_234488:
    // 0x234488: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x234488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_23448c:
    // 0x23448c: 0x2636000c  addiu       $s6, $s1, 0xC
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x234490: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x234490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x234494: 0xc08d0fa  jal         func_2343E8
    ctx->pc = 0x234494u;
    SET_GPR_U32(ctx, 31, 0x23449Cu);
    ctx->pc = 0x234498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234494u;
    // 0x234498: 0xae360010  sw          $s6, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2343E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2343E8u, 0x234494u, 0x23449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23449Cu;
label_23449c:
    // 0x23449c: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x23449cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2344a0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2344a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2344a4: 0x2604fcd0  addiu       $a0, $s0, -0x330
    ctx->pc = 0x2344a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966480));
    // 0x2344a8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2344ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2344acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2344b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2344b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2344b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2344b8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2344b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2344bc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2344bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2344c0: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x2344c0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x2344c4: 0x8fc2fcc0  lw          $v0, -0x340($fp)
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966464)));
    // 0x2344c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2344C8u;
    {
        const bool branch_taken_0x2344c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344C8u;
        // 0x2344cc: 0x3c0b82d  daddu       $s7, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344c8) {
            ctx->pc = 0x234500u;
            goto label_234500;
        }
    }
    ctx->pc = 0x2344D0u;
    // 0x2344d0: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2344d4: 0x8e82fcc4  lw          $v0, -0x33C($s4)
    ctx->pc = 0x2344d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966468)));
    // 0x2344d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2344D8u;
    {
        const bool branch_taken_0x2344d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D8u;
        // 0x2344dc: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344d8) {
            ctx->pc = 0x234504u;
            goto label_234504;
        }
    }
    ctx->pc = 0x2344E0u;
    // 0x2344e0: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x2344e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2344e4: 0x8e62fcc8  lw          $v0, -0x338($s3)
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
    // 0x2344e8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2344e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2344ec: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2344ECu;
    {
        const bool branch_taken_0x2344ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2344F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344ECu;
        // 0x2344f0: 0x26350014  addiu       $s5, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344ec) {
            ctx->pc = 0x2345F4u;
            goto label_2345f4;
        }
    }
    ctx->pc = 0x2344F4u;
    // 0x2344f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2344F4u;
    {
        const bool branch_taken_0x2344f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F4u;
        // 0x2344f8: 0x8e62fcc8  lw          $v0, -0x338($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344f4) {
            ctx->pc = 0x234510u;
            goto label_234510;
        }
    }
    ctx->pc = 0x2344FCu;
    // 0x2344fc: 0x0  nop
    ctx->pc = 0x2344fcu;
    // NOP
label_234500:
    // 0x234500: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_234504:
    // 0x234504: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x234504u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x234508: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x23450c: 0x8e62fcc8  lw          $v0, -0x338($s3)
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
label_234510:
    // 0x234510: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x234510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x234514: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x234514u;
    {
        const bool branch_taken_0x234514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234514u;
        // 0x234518: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234514) {
            ctx->pc = 0x234544u;
            goto label_234544;
        }
    }
    ctx->pc = 0x23451Cu;
    // 0x23451c: 0x26350014  addiu       $s5, $s1, 0x14
    ctx->pc = 0x23451cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_234520:
    // 0x234520: 0x8ca2fcc8  lw          $v0, -0x338($a1)
    ctx->pc = 0x234520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966472)));
    // 0x234524: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x234524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x234528: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23452c: 0xaca2fcc8  sw          $v0, -0x338($a1)
    ctx->pc = 0x23452cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294966472), GPR_U32(ctx, 2));
    // 0x234530: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x234530u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x234534: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x234534u;
    {
        const bool branch_taken_0x234534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234534) {
            ctx->pc = 0x234520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234520;
        }
    }
    ctx->pc = 0x23453Cu;
    // 0x23453c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23453Cu;
    {
        const bool branch_taken_0x23453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23453Cu;
        // 0x234540: 0x8e62fcc8  lw          $v0, -0x338($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23453c) {
            ctx->pc = 0x23454Cu;
            goto label_23454c;
        }
    }
    ctx->pc = 0x234544u;
label_234544:
    // 0x234544: 0x26350014  addiu       $s5, $s1, 0x14
    ctx->pc = 0x234544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x234548: 0x8e62fcc8  lw          $v0, -0x338($s3)
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
label_23454c:
    // 0x23454c: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234550: 0xc098552  jal         func_261548
    ctx->pc = 0x234550u;
    SET_GPR_U32(ctx, 31, 0x234558u);
    ctx->pc = 0x234554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234550u;
    // 0x234554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x234550u, 0x234558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234558u;
label_234558:
    // 0x234558: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23455c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23455Cu;
    {
        const bool branch_taken_0x23455c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23455c) {
            ctx->pc = 0x234560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23455Cu;
            // 0x234560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234574u;
            goto label_234574;
        }
    }
    ctx->pc = 0x234564u;
    // 0x234564: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x234564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x234568: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x234568u;
    SET_GPR_U32(ctx, 31, 0x234570u);
    ctx->pc = 0x23456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234568u;
    // 0x23456c: 0x24844ad8  addiu       $a0, $a0, 0x4AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x234568u, 0x234570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234570u;
label_234570:
    // 0x234570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234574:
    // 0x234574: 0xc048c96  jal         func_123258
    ctx->pc = 0x234574u;
    SET_GPR_U32(ctx, 31, 0x23457Cu);
    ctx->pc = 0x234578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234574u;
    // 0x234578: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x234574u, 0x23457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23457Cu;
label_23457c:
    // 0x23457c: 0x8fc4fcc0  lw          $a0, -0x340($fp)
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966464)));
    // 0x234580: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234580u;
    {
        const bool branch_taken_0x234580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234580u;
        // 0x234584: 0x123042  srl         $a2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234580) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234588u;
    // 0x234588: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x234588u;
    SET_GPR_U32(ctx, 31, 0x234590u);
    ctx->pc = 0x23458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234588u;
    // 0x23458c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x234588u, 0x234590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234590u;
label_234590:
    // 0x234590: 0xc098560  jal         func_261580
    ctx->pc = 0x234590u;
    SET_GPR_U32(ctx, 31, 0x234598u);
    ctx->pc = 0x234594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234590u;
    // 0x234594: 0x8ee4fcc0  lw          $a0, -0x340($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294966464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x234590u, 0x234598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234598u;
label_234598:
    // 0x234598: 0x8e62fcc8  lw          $v0, -0x338($s3)
    ctx->pc = 0x234598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966472)));
    // 0x23459c: 0xaef0fcc0  sw          $s0, -0x340($s7)
    ctx->pc = 0x23459cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294966464), GPR_U32(ctx, 16));
    // 0x2345a0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2345a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2345a4: 0xc098552  jal         func_261548
    ctx->pc = 0x2345A4u;
    SET_GPR_U32(ctx, 31, 0x2345ACu);
    ctx->pc = 0x2345A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345A4u;
    // 0x2345a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2345A4u, 0x2345ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345ACu;
label_2345ac:
    // 0x2345ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2345acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2345b0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2345B0u;
    {
        const bool branch_taken_0x2345b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2345b0) {
            ctx->pc = 0x2345B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2345B0u;
            // 0x2345b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2345C8u;
            goto label_2345c8;
        }
    }
    ctx->pc = 0x2345B8u;
    // 0x2345b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2345b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2345bc: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2345BCu;
    SET_GPR_U32(ctx, 31, 0x2345C4u);
    ctx->pc = 0x2345C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345BCu;
    // 0x2345c0: 0x24844ad8  addiu       $a0, $a0, 0x4AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x2345BCu, 0x2345C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345C4u;
label_2345c4:
    // 0x2345c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2345c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2345c8:
    // 0x2345c8: 0xc048c96  jal         func_123258
    ctx->pc = 0x2345C8u;
    SET_GPR_U32(ctx, 31, 0x2345D0u);
    ctx->pc = 0x2345CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345C8u;
    // 0x2345cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2345C8u, 0x2345D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345D0u;
label_2345d0:
    // 0x2345d0: 0x8e84fcc4  lw          $a0, -0x33C($s4)
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966468)));
    // 0x2345d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2345D4u;
    {
        const bool branch_taken_0x2345d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345D4u;
        // 0x2345d8: 0x123042  srl         $a2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345d4) {
            ctx->pc = 0x2345ECu;
            goto label_2345ec;
        }
    }
    ctx->pc = 0x2345DCu;
    // 0x2345dc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2345DCu;
    SET_GPR_U32(ctx, 31, 0x2345E4u);
    ctx->pc = 0x2345E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345DCu;
    // 0x2345e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2345DCu, 0x2345E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345E4u;
label_2345e4:
    // 0x2345e4: 0xc098560  jal         func_261580
    ctx->pc = 0x2345E4u;
    SET_GPR_U32(ctx, 31, 0x2345ECu);
    ctx->pc = 0x2345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345E4u;
    // 0x2345e8: 0x8e84fcc4  lw          $a0, -0x33C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2345E4u, 0x2345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345ECu;
label_2345ec:
    // 0x2345ec: 0xae90fcc4  sw          $s0, -0x33C($s4)
    ctx->pc = 0x2345ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966468), GPR_U32(ctx, 16));
    // 0x2345f0: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x2345f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2345f4:
    // 0x2345f4: 0x8e83fcc4  lw          $v1, -0x33C($s4)
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966468)));
    // 0x2345f8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2345fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234604: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x234604u;
    SET_GPR_U32(ctx, 31, 0x23460Cu);
    ctx->pc = 0x234608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234604u;
    // 0x234608: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x234604u, 0x23460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23460Cu;
label_23460c:
    // 0x23460c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23460cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234610: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x234610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x234614: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x234614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x234618: 0x26770008  addiu       $s7, $s3, 0x8
    ctx->pc = 0x234618u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x23461c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x23461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234620: 0x2e2a021  addu        $s4, $s7, $v0
    ctx->pc = 0x234620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x234624: 0x74182b  sltu        $v1, $v1, $s4
    ctx->pc = 0x234624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x234628: 0x83a00a  movz        $s4, $a0, $v1
    ctx->pc = 0x234628u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
    // 0x23462c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x23462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x234630: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x234630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x234634: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x234634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234638: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x234638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x23463c: 0x24720038  addiu       $s2, $v1, 0x38
    ctx->pc = 0x23463cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x234640: 0xc098552  jal         func_261548
    ctx->pc = 0x234640u;
    SET_GPR_U32(ctx, 31, 0x234648u);
    ctx->pc = 0x234644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234640u;
    // 0x234644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x234640u, 0x234648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234648u;
label_234648:
    // 0x234648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23464c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23464Cu;
    {
        const bool branch_taken_0x23464c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23464Cu;
        // 0x234650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23464c) {
            ctx->pc = 0x234664u;
            goto label_234664;
        }
    }
    ctx->pc = 0x234654u;
    // 0x234654: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x234654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x234658: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x234658u;
    SET_GPR_U32(ctx, 31, 0x234660u);
    ctx->pc = 0x23465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234658u;
    // 0x23465c: 0x24844ad8  addiu       $a0, $a0, 0x4AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x234658u, 0x234660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234660u;
label_234660:
    // 0x234660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_234664:
    // 0x234664: 0xc048c96  jal         func_123258
    ctx->pc = 0x234664u;
    SET_GPR_U32(ctx, 31, 0x23466Cu);
    ctx->pc = 0x234668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234664u;
    // 0x234668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x234664u, 0x23466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23466Cu;
label_23466c:
    // 0x23466c: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x234670: 0xa2140038  sb          $s4, 0x38($s0)
    ctx->pc = 0x234670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 20));
    // 0x234674: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x234674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x234678: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x234678u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23467c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234680: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x234680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x234684: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x234684u;
    SET_GPR_U32(ctx, 31, 0x23468Cu);
    ctx->pc = 0x234688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234684u;
    // 0x234688: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x234684u, 0x23468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23468Cu;
label_23468c:
    // 0x23468c: 0xa2530005  sb          $s3, 0x5($s2)
    ctx->pc = 0x23468cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 19));
    // 0x234690: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x234694: 0x244452c8  addiu       $a0, $v0, 0x52C8
    ctx->pc = 0x234694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21192));
    // 0x234698: 0x9622002c  lhu         $v0, 0x2C($s1)
    ctx->pc = 0x234698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x23469c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x23469cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2346a0: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x2346a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2346a4: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x2346a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2346a8: 0x9622002c  lhu         $v0, 0x2C($s1)
    ctx->pc = 0x2346a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2346ac: 0x8fc3fcc0  lw          $v1, -0x340($fp)
    ctx->pc = 0x2346acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966464)));
    // 0x2346b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2346b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2346b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2346b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2346b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2346bc: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x2346bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x2346c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2346c4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x2346c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x2346c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2346cc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2346ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2346d0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2346d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2346d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2346D4u;
    {
        const bool branch_taken_0x2346d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346D4u;
        // 0x2346d8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346d4) {
            ctx->pc = 0x2346F0u;
            goto label_2346f0;
        }
    }
    ctx->pc = 0x2346DCu;
    // 0x2346dc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2346e0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2346e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2346E4u;
    {
        const bool branch_taken_0x2346e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E4u;
        // 0x2346e8: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346e4) {
            ctx->pc = 0x2346F8u;
            goto label_2346f8;
        }
    }
    ctx->pc = 0x2346ECu;
    // 0x2346ec: 0x0  nop
    ctx->pc = 0x2346ecu;
    // NOP
label_2346f0:
    // 0x2346f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2346f4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2346f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2346f8:
    // 0x2346f8: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x2346f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x2346fc: 0xae160014  sw          $s6, 0x14($s0)
    ctx->pc = 0x2346fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 22));
    // 0x234700: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x234700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x234704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234708: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x234708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x23470c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x23470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x234710: 0xae3200f0  sw          $s2, 0xF0($s1)
    ctx->pc = 0x234710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 18));
    // 0x234714: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x234714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x234718: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x234718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x23471c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x23471Cu;
    {
        const bool branch_taken_0x23471c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x234720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23471Cu;
        // 0x234720: 0xa2570000  sb          $s7, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23471c) {
            ctx->pc = 0x234744u;
            goto label_234744;
        }
    }
    ctx->pc = 0x234724u;
    // 0x234724: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x234724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_234728:
    // 0x234728: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x234728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x23472c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234730: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x234730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x234734: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x234734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x234738: 0x0  nop
    ctx->pc = 0x234738u;
    // NOP
    // 0x23473c: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23473Cu;
    {
        const bool branch_taken_0x23473c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23473c) {
            ctx->pc = 0x234728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234728;
        }
    }
    ctx->pc = 0x234744u;
label_234744:
    // 0x234744: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x234744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x234748: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x234748u;
    {
        const bool branch_taken_0x234748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234748) {
            ctx->pc = 0x23474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234748u;
            // 0x23474c: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234760u;
            goto label_234760;
        }
    }
    ctx->pc = 0x234750u;
    // 0x234750: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234754: 0x8c43fcb0  lw          $v1, -0x350($v0)
    ctx->pc = 0x234754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966448)));
    // 0x234758: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x234758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
    // 0x23475c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x23475cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_234760:
    // 0x234760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x234760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234764: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x234764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x234768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23476c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x234770: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x234770u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x234774: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x234774u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234778: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x234778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23477c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23477cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234780: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x234780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234784: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x234784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234788: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x234788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23478c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23478cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234794: 0x80915fa  j           func_2457E8
    ctx->pc = 0x234794u;
    ctx->pc = 0x234798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234794u;
    // 0x234798: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2457E8u;
    sub_002457E8_0x2457e8(rdram, ctx, runtime); return;
    ctx->pc = 0x23479Cu;
    // 0x23479c: 0x0  nop
    ctx->pc = 0x23479cu;
    // NOP
    // 0x2347a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2347a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2347a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2347a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2347a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2347a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2347ac: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2347ACu;
    SET_GPR_U32(ctx, 31, 0x2347B4u);
    ctx->pc = 0x2347B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347ACu;
    // 0x2347b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2347ACu, 0x2347B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347B4u;
label_2347b4:
    // 0x2347b4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x2347b8: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x2347bc: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x2347c0: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x2347c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x2347c4: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x2347c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
    // 0x2347c8: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x2347c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x2347cc: 0x3c0a0023  lui         $t2, 0x23
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)35 << 16));
    // 0x2347d0: 0x246343b0  addiu       $v1, $v1, 0x43B0
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17328));
    // 0x2347d4: 0x24a543b8  addiu       $a1, $a1, 0x43B8
    ctx->pc = 0x2347d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17336));
    // 0x2347d8: 0x24c643c0  addiu       $a2, $a2, 0x43C0
    ctx->pc = 0x2347d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17344));
    // 0x2347dc: 0x24e743c8  addiu       $a3, $a3, 0x43C8
    ctx->pc = 0x2347dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17352));
    // 0x2347e0: 0x250843d0  addiu       $t0, $t0, 0x43D0
    ctx->pc = 0x2347e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17360));
    // 0x2347e4: 0x252943d8  addiu       $t1, $t1, 0x43D8
    ctx->pc = 0x2347e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17368));
    // 0x2347e8: 0x254a43e0  addiu       $t2, $t2, 0x43E0
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 17376));
    // 0x2347ec: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2347ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2347f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2347f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2347f4: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2347f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x2347f8: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x2347f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x2347fc: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2347fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x234800: 0xae0700cc  sw          $a3, 0xCC($s0)
    ctx->pc = 0x234800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 7));
    // 0x234804: 0xae0800d0  sw          $t0, 0xD0($s0)
    ctx->pc = 0x234804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 8));
    // 0x234808: 0xae0900d4  sw          $t1, 0xD4($s0)
    ctx->pc = 0x234808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 9));
    // 0x23480c: 0xae0a00d8  sw          $t2, 0xD8($s0)
    ctx->pc = 0x23480cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 10));
    // 0x234810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234818: 0x808c698  j           func_231A60
    ctx->pc = 0x234818u;
    ctx->pc = 0x23481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234818u;
    // 0x23481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x234820u;
}
