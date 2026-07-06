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

// Function: sub_002FB810
// Address: 0x2fb810 - 0x2fc110
void sub_002FB810_0x2fb810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB810_0x2fb810");
#endif

    switch (ctx->pc) {
        case 0x2fb87cu: goto label_2fb87c;
        case 0x2fb8acu: goto label_2fb8ac;
        case 0x2fb8ccu: goto label_2fb8cc;
        case 0x2fb8fcu: goto label_2fb8fc;
        case 0x2fb934u: goto label_2fb934;
        case 0x2fb958u: goto label_2fb958;
        case 0x2fb980u: goto label_2fb980;
        case 0x2fb9a4u: goto label_2fb9a4;
        case 0x2fb9ccu: goto label_2fb9cc;
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fba18u: goto label_2fba18;
        case 0x2fba3cu: goto label_2fba3c;
        case 0x2fba64u: goto label_2fba64;
        case 0x2fba88u: goto label_2fba88;
        case 0x2fbaa8u: goto label_2fbaa8;
        case 0x2fbad8u: goto label_2fbad8;
        case 0x2fbaf4u: goto label_2fbaf4;
        case 0x2fbb00u: goto label_2fbb00;
        case 0x2fbb24u: goto label_2fbb24;
        case 0x2fbb30u: goto label_2fbb30;
        case 0x2fbb6cu: goto label_2fbb6c;
        case 0x2fbb84u: goto label_2fbb84;
        case 0x2fbbb8u: goto label_2fbbb8;
        case 0x2fbbdcu: goto label_2fbbdc;
        case 0x2fbc24u: goto label_2fbc24;
        case 0x2fbc2cu: goto label_2fbc2c;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc68u: goto label_2fbc68;
        case 0x2fbc80u: goto label_2fbc80;
        case 0x2fbcb4u: goto label_2fbcb4;
        case 0x2fbcd8u: goto label_2fbcd8;
        case 0x2fbd20u: goto label_2fbd20;
        case 0x2fbd28u: goto label_2fbd28;
        case 0x2fbd38u: goto label_2fbd38;
        case 0x2fbdf0u: goto label_2fbdf0;
        case 0x2fbe20u: goto label_2fbe20;
        case 0x2fbe28u: goto label_2fbe28;
        case 0x2fbe3cu: goto label_2fbe3c;
        case 0x2fbe44u: goto label_2fbe44;
        case 0x2fbe70u: goto label_2fbe70;
        case 0x2fbe90u: goto label_2fbe90;
        case 0x2fbea0u: goto label_2fbea0;
        case 0x2fbeb8u: goto label_2fbeb8;
        case 0x2fbec8u: goto label_2fbec8;
        case 0x2fbee0u: goto label_2fbee0;
        case 0x2fbef0u: goto label_2fbef0;
        case 0x2fbefcu: goto label_2fbefc;
        case 0x2fbf14u: goto label_2fbf14;
        case 0x2fbf3cu: goto label_2fbf3c;
        case 0x2fbf4cu: goto label_2fbf4c;
        case 0x2fbf80u: goto label_2fbf80;
        case 0x2fbf98u: goto label_2fbf98;
        case 0x2fbfacu: goto label_2fbfac;
        case 0x2fc058u: goto label_2fc058;
        case 0x2fc080u: goto label_2fc080;
        case 0x2fc0c4u: goto label_2fc0c4;
        case 0x2fc0ecu: goto label_2fc0ec;
        default: break;
    }

    ctx->pc = 0x2fb810u;

label_2fb810:
    // 0x2fb810: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2fb810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2fb814: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2fb814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2fb818: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2fb818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2fb81c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2fb81cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb820: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2fb820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2fb824: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2fb824u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb828: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2fb828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2fb82c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2fb82cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb830: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2fb830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2fb834: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2fb834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb838: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2fb838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2fb83c: 0x32a20018  andi        $v0, $s5, 0x18
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)24);
    // 0x2fb840: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fb840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fb844: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2fb844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2fb848: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2fb848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2fb84c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fb84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fb850: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2fb850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2fb854: 0x1040013e  beqz        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x2FB854u;
    {
        const bool branch_taken_0x2fb854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB854u;
        // 0x2fb858: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb854) {
            ctx->pc = 0x2FBD50u;
            goto label_2fbd50;
        }
    }
    ctx->pc = 0x2FB85Cu;
    // 0x2fb85c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fb860: 0x2405430c  addiu       $a1, $zero, 0x430C
    ctx->pc = 0x2fb860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17164));
    // 0x2fb864: 0x24842da8  addiu       $a0, $a0, 0x2DA8
    ctx->pc = 0x2fb864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11688));
    // 0x2fb868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb86c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb870: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2fb870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb874: 0xc045286  jal         func_114A18
    ctx->pc = 0x2FB874u;
    SET_GPR_U32(ctx, 31, 0x2FB87Cu);
    ctx->pc = 0x2FB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB874u;
    // 0x2fb878: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A18u, 0x2FB874u, 0x2FB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB87Cu;
label_2fb87c:
    // 0x2fb87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB87Cu;
    {
        const bool branch_taken_0x2fb87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB87Cu;
        // 0x2fb880: 0x2402f82d  addiu       $v0, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb87c) {
            ctx->pc = 0x2FB88Cu;
            goto label_2fb88c;
        }
    }
    ctx->pc = 0x2FB884u;
    // 0x2fb884: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2FB884u;
    {
        const bool branch_taken_0x2fb884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB884u;
        // 0x2fb888: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb884) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FB88Cu;
label_2fb88c:
    // 0x2fb88c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2fb88cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB890u;
    {
        const bool branch_taken_0x2fb890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB890u;
        // 0x2fb894: 0x2402f82d  addiu       $v0, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb890) {
            ctx->pc = 0x2FB8A0u;
            goto label_2fb8a0;
        }
    }
    ctx->pc = 0x2FB898u;
    // 0x2fb898: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x2FB898u;
    {
        const bool branch_taken_0x2fb898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB898u;
        // 0x2fb89c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb898) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FB8A0u;
label_2fb8a0:
    // 0x2fb8a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8a4: 0xc0bf3f8  jal         func_2FCFE0
    ctx->pc = 0x2FB8A4u;
    SET_GPR_U32(ctx, 31, 0x2FB8ACu);
    ctx->pc = 0x2FB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8A4u;
    // 0x2fb8a8: 0x24110064  addiu       $s1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCFE0u, 0x2FB8A4u, 0x2FB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8ACu;
label_2fb8ac:
    // 0x2fb8ac: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2fb8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb8b0: 0x27b20007  addiu       $s2, $sp, 0x7
    ctx->pc = 0x2fb8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 7));
    // 0x2fb8b4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2fb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2fb8b8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2fb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2fb8bc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2fb8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fb8c0: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x2fb8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb8c4: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB8C4u;
    SET_GPR_U32(ctx, 31, 0x2FB8CCu);
    ctx->pc = 0x2FB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8C4u;
    // 0x2fb8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB8C4u, 0x2FB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8CCu;
label_2fb8cc:
    // 0x2fb8cc: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x2fb8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fb8d0: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2fb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2fb8d4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB8D4u;
    {
        const bool branch_taken_0x2fb8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb8d4) {
            ctx->pc = 0x2FB8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB8D4u;
            // 0x2fb8d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB8DCu;
            goto label_2fb8dc;
        }
    }
    ctx->pc = 0x2FB8DCu;
label_2fb8dc:
    // 0x2fb8dc: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x2fb8dcu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fb8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8e4: 0x1810  mfhi        $v1
    ctx->pc = 0x2fb8e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fb8e8: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x2fb8e8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb8ec: 0x1012  mflo        $v0
    ctx->pc = 0x2fb8ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fb8f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fb8f4: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB8F4u;
    SET_GPR_U32(ctx, 31, 0x2FB8FCu);
    ctx->pc = 0x2FB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8F4u;
    // 0x2fb8f8: 0xa3a20012  sb          $v0, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB8F4u, 0x2FB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8FCu;
label_2fb8fc:
    // 0x2fb8fc: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2fb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2fb900: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2fb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2fb904: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x2fb904u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb908: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB908u;
    {
        const bool branch_taken_0x2fb908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb908) {
            ctx->pc = 0x2FB90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB908u;
            // 0x2fb90c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB910u;
            goto label_2fb910;
        }
    }
    ctx->pc = 0x2FB910u;
label_2fb910:
    // 0x2fb910: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fb910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb914: 0x27b10006  addiu       $s1, $sp, 0x6
    ctx->pc = 0x2fb914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 6));
    // 0x2fb918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb91c: 0x2810  mfhi        $a1
    ctx->pc = 0x2fb91cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2fb920: 0xb0001a  div         $zero, $a1, $s0
    ctx->pc = 0x2fb920u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb924: 0x1010  mfhi        $v0
    ctx->pc = 0x2fb924u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2fb928: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fb928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fb92c: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB92Cu;
    SET_GPR_U32(ctx, 31, 0x2FB934u);
    ctx->pc = 0x2FB930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB92Cu;
    // 0x2fb930: 0xa3a20013  sb          $v0, 0x13($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB92Cu, 0x2FB934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB934u;
label_2fb934:
    // 0x2fb934: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb934u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb938: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fb938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb93c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB93Cu;
    {
        const bool branch_taken_0x2fb93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb93c) {
            ctx->pc = 0x2FB940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB93Cu;
            // 0x2fb940: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB944u;
            goto label_2fb944;
        }
    }
    ctx->pc = 0x2FB944u;
label_2fb944:
    // 0x2fb944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb948: 0x1012  mflo        $v0
    ctx->pc = 0x2fb948u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fb94c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fb950: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB950u;
    SET_GPR_U32(ctx, 31, 0x2FB958u);
    ctx->pc = 0x2FB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB950u;
    // 0x2fb954: 0xa3a20014  sb          $v0, 0x14($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB950u, 0x2FB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB958u;
label_2fb958:
    // 0x2fb958: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb958u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb95c: 0x27b10005  addiu       $s1, $sp, 0x5
    ctx->pc = 0x2fb95cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 5));
    // 0x2fb960: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fb960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb968: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB968u;
    {
        const bool branch_taken_0x2fb968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb968) {
            ctx->pc = 0x2FB96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB968u;
            // 0x2fb96c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB970u;
            goto label_2fb970;
        }
    }
    ctx->pc = 0x2FB970u;
label_2fb970:
    // 0x2fb970: 0x1810  mfhi        $v1
    ctx->pc = 0x2fb970u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fb974: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fb974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2fb978: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB978u;
    SET_GPR_U32(ctx, 31, 0x2FB980u);
    ctx->pc = 0x2FB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB978u;
    // 0x2fb97c: 0xa3a30015  sb          $v1, 0x15($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB978u, 0x2FB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB980u;
label_2fb980:
    // 0x2fb980: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb980u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb984: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb988: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB988u;
    {
        const bool branch_taken_0x2fb988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb988) {
            ctx->pc = 0x2FB98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB988u;
            // 0x2fb98c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB990u;
            goto label_2fb990;
        }
    }
    ctx->pc = 0x2FB990u;
label_2fb990:
    // 0x2fb990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb994: 0x1012  mflo        $v0
    ctx->pc = 0x2fb994u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fb998: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fb99c: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB99Cu;
    SET_GPR_U32(ctx, 31, 0x2FB9A4u);
    ctx->pc = 0x2FB9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB99Cu;
    // 0x2fb9a0: 0xa3a20016  sb          $v0, 0x16($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB99Cu, 0x2FB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9A4u;
label_2fb9a4:
    // 0x2fb9a4: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb9a4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb9a8: 0x27b10003  addiu       $s1, $sp, 0x3
    ctx->pc = 0x2fb9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3));
    // 0x2fb9ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB9B4u;
    {
        const bool branch_taken_0x2fb9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9b4) {
            ctx->pc = 0x2FB9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB9B4u;
            // 0x2fb9b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9BCu;
            goto label_2fb9bc;
        }
    }
    ctx->pc = 0x2FB9BCu;
label_2fb9bc:
    // 0x2fb9bc: 0x1810  mfhi        $v1
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fb9c0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2fb9c4: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB9C4u;
    SET_GPR_U32(ctx, 31, 0x2FB9CCu);
    ctx->pc = 0x2FB9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9C4u;
    // 0x2fb9c8: 0xa3a30017  sb          $v1, 0x17($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB9C4u, 0x2FB9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9CCu;
label_2fb9cc:
    // 0x2fb9cc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb9ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb9d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb9d4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FB9D4u;
    {
        const bool branch_taken_0x2fb9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9d4) {
            ctx->pc = 0x2FB9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB9D4u;
            // 0x2fb9d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB9DCu;
            goto label_2fb9dc;
        }
    }
    ctx->pc = 0x2FB9DCu;
label_2fb9dc:
    // 0x2fb9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9e0: 0x1012  mflo        $v0
    ctx->pc = 0x2fb9e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fb9e4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fb9e8: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FB9E8u;
    SET_GPR_U32(ctx, 31, 0x2FB9F0u);
    ctx->pc = 0x2FB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9E8u;
    // 0x2fb9ec: 0xa3a20018  sb          $v0, 0x18($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FB9E8u, 0x2FB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9F0u;
label_2fb9f0:
    // 0x2fb9f0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fb9f0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fb9f4: 0x27b10002  addiu       $s1, $sp, 0x2
    ctx->pc = 0x2fb9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x2fb9f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FBA00u;
    {
        const bool branch_taken_0x2fba00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba00) {
            ctx->pc = 0x2FBA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA00u;
            // 0x2fba04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA08u;
            goto label_2fba08;
        }
    }
    ctx->pc = 0x2FBA08u;
label_2fba08:
    // 0x2fba08: 0x1810  mfhi        $v1
    ctx->pc = 0x2fba08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fba0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2fba10: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FBA10u;
    SET_GPR_U32(ctx, 31, 0x2FBA18u);
    ctx->pc = 0x2FBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA10u;
    // 0x2fba14: 0xa3a30019  sb          $v1, 0x19($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FBA10u, 0x2FBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA18u;
label_2fba18:
    // 0x2fba18: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fba18u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fba1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fba20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FBA20u;
    {
        const bool branch_taken_0x2fba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba20) {
            ctx->pc = 0x2FBA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA20u;
            // 0x2fba24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA28u;
            goto label_2fba28;
        }
    }
    ctx->pc = 0x2FBA28u;
label_2fba28:
    // 0x2fba28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba2c: 0x1012  mflo        $v0
    ctx->pc = 0x2fba2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fba30: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fba34: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FBA34u;
    SET_GPR_U32(ctx, 31, 0x2FBA3Cu);
    ctx->pc = 0x2FBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA34u;
    // 0x2fba38: 0xa3a2001a  sb          $v0, 0x1A($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FBA34u, 0x2FBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA3Cu;
label_2fba3c:
    // 0x2fba3c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fba3cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fba40: 0x27b10001  addiu       $s1, $sp, 0x1
    ctx->pc = 0x2fba40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x2fba44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fba48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fba48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba4c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FBA4Cu;
    {
        const bool branch_taken_0x2fba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba4c) {
            ctx->pc = 0x2FBA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA4Cu;
            // 0x2fba50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA54u;
            goto label_2fba54;
        }
    }
    ctx->pc = 0x2FBA54u;
label_2fba54:
    // 0x2fba54: 0x1810  mfhi        $v1
    ctx->pc = 0x2fba54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fba58: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2fba5c: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FBA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FBA64u);
    ctx->pc = 0x2FBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA5Cu;
    // 0x2fba60: 0xa3a3001b  sb          $v1, 0x1B($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FBA5Cu, 0x2FBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA64u;
label_2fba64:
    // 0x2fba64: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fba64u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fba68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fba6c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FBA6Cu;
    {
        const bool branch_taken_0x2fba6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba6c) {
            ctx->pc = 0x2FBA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA6Cu;
            // 0x2fba70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA74u;
            goto label_2fba74;
        }
    }
    ctx->pc = 0x2FBA74u;
label_2fba74:
    // 0x2fba74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba78: 0x1012  mflo        $v0
    ctx->pc = 0x2fba78u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fba7c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2fba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2fba80: 0xc0bedca  jal         func_2FB728
    ctx->pc = 0x2FBA80u;
    SET_GPR_U32(ctx, 31, 0x2FBA88u);
    ctx->pc = 0x2FBA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA80u;
    // 0x2fba84: 0xa3a2001c  sb          $v0, 0x1C($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB728u, 0x2FBA80u, 0x2FBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA88u;
label_2fba88:
    // 0x2fba88: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2fba88u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fba8c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fba90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FBA90u;
    {
        const bool branch_taken_0x2fba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba90) {
            ctx->pc = 0x2FBA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA90u;
            // 0x2fba94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA98u;
            goto label_2fba98;
        }
    }
    ctx->pc = 0x2FBA98u;
label_2fba98:
    // 0x2fba98: 0xa3a0001e  sb          $zero, 0x1E($sp)
    ctx->pc = 0x2fba98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fba9c: 0x1810  mfhi        $v1
    ctx->pc = 0x2fba9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fbaa0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2fbaa4: 0xa3a3001d  sb          $v1, 0x1D($sp)
    ctx->pc = 0x2fbaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 3));
label_2fbaa8:
    // 0x2fbaa8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2fbaa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2fbaac: 0x0  nop
    ctx->pc = 0x2fbaacu;
    // NOP
    // 0x2fbab0: 0x0  nop
    ctx->pc = 0x2fbab0u;
    // NOP
    // 0x2fbab4: 0x0  nop
    ctx->pc = 0x2fbab4u;
    // NOP
    // 0x2fbab8: 0x0  nop
    ctx->pc = 0x2fbab8u;
    // NOP
    // 0x2fbabc: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FBABCu;
    {
        const bool branch_taken_0x2fbabc = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x2fbabc) {
            ctx->pc = 0x2FBAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbaa8;
        }
    }
    ctx->pc = 0x2FBAC4u;
    // 0x2fbac4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2fbac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2fbac8: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2FBAC8u;
    {
        const bool branch_taken_0x2fbac8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAC8u;
        // 0x2fbacc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbac8) {
            ctx->pc = 0x2FBD50u;
            goto label_2fbd50;
        }
    }
    ctx->pc = 0x2FBAD0u;
    // 0x2fbad0: 0x32be0020  andi        $fp, $s5, 0x20
    ctx->pc = 0x2fbad0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x2fbad4: 0x32b20010  andi        $s2, $s5, 0x10
    ctx->pc = 0x2fbad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_2fbad8:
    // 0x2fbad8: 0x13c0001b  beqz        $fp, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FBAD8u;
    {
        const bool branch_taken_0x2fbad8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAD8u;
        // 0x2fbadc: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbad8) {
            ctx->pc = 0x2FBB48u;
            goto label_2fbb48;
        }
    }
    ctx->pc = 0x2FBAE0u;
    // 0x2fbae0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2fbae4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2fbae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fbaec: 0xc0a39ae  jal         func_28E6B8
    ctx->pc = 0x2FBAECu;
    SET_GPR_U32(ctx, 31, 0x2FBAF4u);
    ctx->pc = 0x2FBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBAECu;
    // 0x2fbaf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6B8u, 0x2FBAECu, 0x2FBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBAF4u;
label_2fbaf4:
    // 0x2fbaf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fbaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbaf8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2fbafc: 0x0  nop
    ctx->pc = 0x2fbafcu;
    // NOP
label_2fbb00:
    // 0x2fbb00: 0x8e030684  lw          $v1, 0x684($s0)
    ctx->pc = 0x2fbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
    // 0x2fbb04: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x2fbb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fbb08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FBB08u;
    {
        const bool branch_taken_0x2fbb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB08u;
        // 0x2fbb0c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb08) {
            ctx->pc = 0x2FBB3Cu;
            goto label_2fbb3c;
        }
    }
    ctx->pc = 0x2FBB10u;
    // 0x2fbb10: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2fbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2fbb14: 0x8c440668  lw          $a0, 0x668($v0)
    ctx->pc = 0x2fbb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
    // 0x2fbb18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fbb1c: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2FBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBB24u);
    ctx->pc = 0x2FBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB1Cu;
    // 0x2fbb20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2FBB1Cu, 0x2FBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB24u;
label_2fbb24:
    // 0x2fbb24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fbb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb28: 0xc0afc54  jal         func_2BF150
    ctx->pc = 0x2FBB28u;
    SET_GPR_U32(ctx, 31, 0x2FBB30u);
    ctx->pc = 0x2FBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB28u;
    // 0x2fbb2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF150u, 0x2FBB28u, 0x2FBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB30u;
label_2fbb30:
    // 0x2fbb30: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FBB30u;
    {
        const bool branch_taken_0x2fbb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbb30) {
            ctx->pc = 0x2FBB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBB30u;
            // 0x2fbb34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbb00;
        }
    }
    ctx->pc = 0x2FBB38u;
    // 0x2fbb38: 0x8e030684  lw          $v1, 0x684($s0)
    ctx->pc = 0x2fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_2fbb3c:
    // 0x2fbb3c: 0x2c31826  xor         $v1, $s6, $v1
    ctx->pc = 0x2fbb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 3));
    // 0x2fbb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbb44: 0x43b80b  movn        $s7, $v0, $v1
    ctx->pc = 0x2fbb44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2fbb48:
    // 0x2fbb48: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FBB48u;
    {
        const bool branch_taken_0x2fbb48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB48u;
        // 0x2fbb4c: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb48) {
            ctx->pc = 0x2FBC44u;
            goto label_2fbc44;
        }
    }
    ctx->pc = 0x2FBB50u;
    // 0x2fbb50: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBB50u;
    {
        const bool branch_taken_0x2fbb50 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2FBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB50u;
        // 0x2fbb54: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb50) {
            ctx->pc = 0x2FBB98u;
            goto label_2fbb98;
        }
    }
    ctx->pc = 0x2FBB58u;
    // 0x2fbb58: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2fbb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2fbb5c: 0x8c440668  lw          $a0, 0x668($v0)
    ctx->pc = 0x2fbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
    // 0x2fbb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fbb64: 0xc0afd76  jal         func_2BF5D8
    ctx->pc = 0x2FBB64u;
    SET_GPR_U32(ctx, 31, 0x2FBB6Cu);
    ctx->pc = 0x2FBB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB64u;
    // 0x2fbb68: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5D8u, 0x2FBB64u, 0x2FBB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB6Cu;
label_2fbb6c:
    // 0x2fbb6c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fbb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbb70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2fbb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbb74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2fbb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fbb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fbb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb7c: 0xc0bedd2  jal         func_2FB748
    ctx->pc = 0x2FBB7Cu;
    SET_GPR_U32(ctx, 31, 0x2FBB84u);
    ctx->pc = 0x2FBB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB7Cu;
    // 0x2fbb80: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB748u, 0x2FBB7Cu, 0x2FBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB84u;
label_2fbb84:
    // 0x2fbb84: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FBB84u;
    {
        const bool branch_taken_0x2fbb84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB84u;
        // 0x2fbb88: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb84) {
            ctx->pc = 0x2FBBF8u;
            goto label_2fbbf8;
        }
    }
    ctx->pc = 0x2FBB8Cu;
    // 0x2fbb8c: 0x2402f82d  addiu       $v0, $zero, -0x7D3
    ctx->pc = 0x2fbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fbb90: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2FBB90u;
    {
        const bool branch_taken_0x2fbb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB90u;
        // 0x2fbb94: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb90) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBB98u;
label_2fbb98:
    // 0x2fbb98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2fbb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fbb9c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2fbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2fbba0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2fbba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fbba4: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2fbba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2fbba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fbbac: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2fbbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2fbbb0: 0xc0a3a1c  jal         func_28E870
    ctx->pc = 0x2FBBB0u;
    SET_GPR_U32(ctx, 31, 0x2FBBB8u);
    ctx->pc = 0x2FBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBBB0u;
    // 0x2fbbb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E870u, 0x2FBBB0u, 0x2FBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBBB8u;
label_2fbbb8:
    // 0x2fbbb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fbbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbbbc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FBBBCu;
    {
        const bool branch_taken_0x2fbbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBBCu;
        // 0x2fbbc0: 0x2402f82d  addiu       $v0, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbbc) {
            ctx->pc = 0x2FBBF0u;
            goto label_2fbbf0;
        }
    }
    ctx->pc = 0x2FBBC4u;
    // 0x2fbbc4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fbbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbbc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2fbbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbbcc: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x2fbbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2fbbd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fbbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbd4: 0xc0bedd2  jal         func_2FB748
    ctx->pc = 0x2FBBD4u;
    SET_GPR_U32(ctx, 31, 0x2FBBDCu);
    ctx->pc = 0x2FBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBBD4u;
    // 0x2fbbd8: 0xdfa70038  ld          $a3, 0x38($sp) (Delay Slot)
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB748u, 0x2FBBD4u, 0x2FBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBBDCu;
label_2fbbdc:
    // 0x2fbbdc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBBDCu;
    {
        const bool branch_taken_0x2fbbdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBDCu;
        // 0x2fbbe0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbdc) {
            ctx->pc = 0x2FBBF8u;
            goto label_2fbbf8;
        }
    }
    ctx->pc = 0x2FBBE4u;
    // 0x2fbbe4: 0x2402f82d  addiu       $v0, $zero, -0x7D3
    ctx->pc = 0x2fbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fbbe8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2FBBE8u;
    {
        const bool branch_taken_0x2fbbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBE8u;
        // 0x2fbbec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbe8) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBBF0u;
label_2fbbf0:
    // 0x2fbbf0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2FBBF0u;
    {
        const bool branch_taken_0x2fbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBF0u;
        // 0x2fbbf4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbf0) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBBF8u;
label_2fbbf8:
    // 0x2fbbf8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fbbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fbbfc: 0x1ae00004  blez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBBFCu;
    {
        const bool branch_taken_0x2fbbfc = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2FBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBFCu;
        // 0x2fbc00: 0x24442db0  addiu       $a0, $v0, 0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbfc) {
            ctx->pc = 0x2FBC10u;
            goto label_2fbc10;
        }
    }
    ctx->pc = 0x2FBC04u;
    // 0x2fbc04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fbc08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBC08u;
    {
        const bool branch_taken_0x2fbc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC08u;
        // 0x2fbc0c: 0x24462de0  addiu       $a2, $v0, 0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc08) {
            ctx->pc = 0x2FBC18u;
            goto label_2fbc18;
        }
    }
    ctx->pc = 0x2FBC10u;
label_2fbc10:
    // 0x2fbc10: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fbc14: 0x24462de8  addiu       $a2, $v0, 0x2DE8
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11752));
label_2fbc18:
    // 0x2fbc18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBC1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC24u);
    ctx->pc = 0x2FBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC1Cu;
    // 0x2fbc20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBC1Cu, 0x2FBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC24u;
label_2fbc24:
    // 0x2fbc24: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2FBC24u;
    SET_GPR_U32(ctx, 31, 0x2FBC2Cu);
    ctx->pc = 0x2FBC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC24u;
    // 0x2fbc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2FBC24u, 0x2FBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC2Cu;
label_2fbc2c:
    // 0x2fbc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fbc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc34: 0xc049c22  jal         func_127088
    ctx->pc = 0x2FBC34u;
    SET_GPR_U32(ctx, 31, 0x2FBC3Cu);
    ctx->pc = 0x2FBC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC34u;
    // 0x2fbc38: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2FBC34u, 0x2FBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC3Cu;
label_2fbc3c:
    // 0x2fbc3c: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2FBC3Cu;
    {
        const bool branch_taken_0x2fbc3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC3Cu;
        // 0x2fbc40: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc3c) {
            ctx->pc = 0x2FBD60u;
            goto label_2fbd60;
        }
    }
    ctx->pc = 0x2FBC44u;
label_2fbc44:
    // 0x2fbc44: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FBC44u;
    {
        const bool branch_taken_0x2fbc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC44u;
        // 0x2fbc48: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc44) {
            ctx->pc = 0x2FBD40u;
            goto label_2fbd40;
        }
    }
    ctx->pc = 0x2FBC4Cu;
    // 0x2fbc4c: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FBC4Cu;
    {
        const bool branch_taken_0x2fbc4c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2FBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC4Cu;
        // 0x2fbc50: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc4c) {
            ctx->pc = 0x2FBC94u;
            goto label_2fbc94;
        }
    }
    ctx->pc = 0x2FBC54u;
    // 0x2fbc54: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2fbc58: 0x8c440668  lw          $a0, 0x668($v0)
    ctx->pc = 0x2fbc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1640)));
    // 0x2fbc5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fbc60: 0xc0afd7a  jal         func_2BF5E8
    ctx->pc = 0x2FBC60u;
    SET_GPR_U32(ctx, 31, 0x2FBC68u);
    ctx->pc = 0x2FBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC60u;
    // 0x2fbc64: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5E8u, 0x2FBC60u, 0x2FBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC68u;
label_2fbc68:
    // 0x2fbc68: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbc6c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2fbc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbc70: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2fbc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fbc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fbc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbc78: 0xc0bedd2  jal         func_2FB748
    ctx->pc = 0x2FBC78u;
    SET_GPR_U32(ctx, 31, 0x2FBC80u);
    ctx->pc = 0x2FBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC78u;
    // 0x2fbc7c: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB748u, 0x2FBC78u, 0x2FBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC80u;
label_2fbc80:
    // 0x2fbc80: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2FBC80u;
    {
        const bool branch_taken_0x2fbc80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC80u;
        // 0x2fbc84: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc80) {
            ctx->pc = 0x2FBCF4u;
            goto label_2fbcf4;
        }
    }
    ctx->pc = 0x2FBC88u;
    // 0x2fbc88: 0x2402f82d  addiu       $v0, $zero, -0x7D3
    ctx->pc = 0x2fbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fbc8c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2FBC8Cu;
    {
        const bool branch_taken_0x2fbc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC8Cu;
        // 0x2fbc90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc8c) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBC94u;
label_2fbc94:
    // 0x2fbc94: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2fbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fbc98: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2fbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2fbc9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2fbc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fbca0: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x2fbca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2fbca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fbca8: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2fbca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2fbcac: 0xc0a39f6  jal         func_28E7D8
    ctx->pc = 0x2FBCACu;
    SET_GPR_U32(ctx, 31, 0x2FBCB4u);
    ctx->pc = 0x2FBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBCACu;
    // 0x2fbcb0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7D8u, 0x2FBCACu, 0x2FBCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBCB4u;
label_2fbcb4:
    // 0x2fbcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbcb8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FBCB8u;
    {
        const bool branch_taken_0x2fbcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x2402f82d  addiu       $v0, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcb8) {
            ctx->pc = 0x2FBCECu;
            goto label_2fbcec;
        }
    }
    ctx->pc = 0x2FBCC0u;
    // 0x2fbcc0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fbcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbcc4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2fbcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbcc8: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x2fbcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2fbccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fbcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbcd0: 0xc0bedd2  jal         func_2FB748
    ctx->pc = 0x2FBCD0u;
    SET_GPR_U32(ctx, 31, 0x2FBCD8u);
    ctx->pc = 0x2FBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBCD0u;
    // 0x2fbcd4: 0xdfa70038  ld          $a3, 0x38($sp) (Delay Slot)
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB748u, 0x2FBCD0u, 0x2FBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBCD8u;
label_2fbcd8:
    // 0x2fbcd8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBCD8u;
    {
        const bool branch_taken_0x2fbcd8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCD8u;
        // 0x2fbcdc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcd8) {
            ctx->pc = 0x2FBCF4u;
            goto label_2fbcf4;
        }
    }
    ctx->pc = 0x2FBCE0u;
    // 0x2fbce0: 0x2402f82d  addiu       $v0, $zero, -0x7D3
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
    // 0x2fbce4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2FBCE4u;
    {
        const bool branch_taken_0x2fbce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCE4u;
        // 0x2fbce8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbce4) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBCECu;
label_2fbcec:
    // 0x2fbcec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2FBCECu;
    {
        const bool branch_taken_0x2fbcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCECu;
        // 0x2fbcf0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcec) {
            ctx->pc = 0x2FBD68u;
            goto label_2fbd68;
        }
    }
    ctx->pc = 0x2FBCF4u;
label_2fbcf4:
    // 0x2fbcf4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fbcf8: 0x1ae00004  blez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FBCF8u;
    {
        const bool branch_taken_0x2fbcf8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2FBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCF8u;
        // 0x2fbcfc: 0x24442df0  addiu       $a0, $v0, 0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcf8) {
            ctx->pc = 0x2FBD0Cu;
            goto label_2fbd0c;
        }
    }
    ctx->pc = 0x2FBD00u;
    // 0x2fbd00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fbd04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBD04u;
    {
        const bool branch_taken_0x2fbd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD04u;
        // 0x2fbd08: 0x24462de0  addiu       $a2, $v0, 0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd04) {
            ctx->pc = 0x2FBD14u;
            goto label_2fbd14;
        }
    }
    ctx->pc = 0x2FBD0Cu;
label_2fbd0c:
    // 0x2fbd0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fbd10: 0x24462de8  addiu       $a2, $v0, 0x2DE8
    ctx->pc = 0x2fbd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11752));
label_2fbd14:
    // 0x2fbd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd18: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBD18u;
    SET_GPR_U32(ctx, 31, 0x2FBD20u);
    ctx->pc = 0x2FBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD18u;
    // 0x2fbd1c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBD18u, 0x2FBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD20u;
label_2fbd20:
    // 0x2fbd20: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2FBD20u;
    SET_GPR_U32(ctx, 31, 0x2FBD28u);
    ctx->pc = 0x2FBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD20u;
    // 0x2fbd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2FBD20u, 0x2FBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD28u;
label_2fbd28:
    // 0x2fbd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fbd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd30: 0xc049c22  jal         func_127088
    ctx->pc = 0x2FBD30u;
    SET_GPR_U32(ctx, 31, 0x2FBD38u);
    ctx->pc = 0x2FBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD30u;
    // 0x2fbd34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2FBD30u, 0x2FBD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD38u;
label_2fbd38:
    // 0x2fbd38: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBD38u;
    {
        const bool branch_taken_0x2fbd38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2FBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD38u;
        // 0x2fbd3c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd38) {
            ctx->pc = 0x2FBD58u;
            goto label_2fbd58;
        }
    }
    ctx->pc = 0x2FBD40u;
label_2fbd40:
    // 0x2fbd40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2fbd40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2fbd44: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x2fbd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fbd48: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2FBD48u;
    {
        const bool branch_taken_0x2fbd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbd48) {
            ctx->pc = 0x2FBAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbad8;
        }
    }
    ctx->pc = 0x2FBD50u;
label_2fbd50:
    // 0x2fbd50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBD50u;
    {
        const bool branch_taken_0x2fbd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD50u;
        // 0x2fbd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd50) {
            ctx->pc = 0x2FBD70u;
            goto label_2fbd70;
        }
    }
    ctx->pc = 0x2FBD58u;
label_2fbd58:
    // 0x2fbd58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FBD58u;
    {
        const bool branch_taken_0x2fbd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD58u;
        // 0x2fbd5c: 0x2402f82c  addiu       $v0, $zero, -0x7D4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd58) {
            ctx->pc = 0x2FBD64u;
            goto label_2fbd64;
        }
    }
    ctx->pc = 0x2FBD60u;
label_2fbd60:
    // 0x2fbd60: 0x2402f82b  addiu       $v0, $zero, -0x7D5
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965291));
label_2fbd64:
    // 0x2fbd64: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2fbd68:
    // 0x2fbd68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2fbd6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2fbd6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd70:
    // 0x2fbd70: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2fbd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fbd74: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2fbd74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fbd78: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2fbd78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fbd7c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2fbd7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fbd80: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2fbd80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fbd84: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fbd84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fbd88: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2fbd88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fbd8c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2fbd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fbd90: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2fbd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fbd94: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fbd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fbd98: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD98u;
        // 0x2fbd9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBDA0u;
    // 0x2fbda0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fbda4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2fbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2fbda8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2fbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2fbdac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2fbdacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdb0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2fbdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2fbdb4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2fbdb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fbdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2fbdbc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2fbdbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdc0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2fbdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2fbdc4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2fbdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2fbdc8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2fbdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2fbdcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fbdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2fbdd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2fbdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2fbdd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fbdd8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2fbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2fbddc: 0x1ec00006  bgtz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBDDCu;
    {
        const bool branch_taken_0x2fbddc = (GPR_S32(ctx, 22) > 0);
        ctx->pc = 0x2FBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDDCu;
        // 0x2fbde0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbddc) {
            ctx->pc = 0x2FBDF8u;
            goto label_2fbdf8;
        }
    }
    ctx->pc = 0x2FBDE4u;
    // 0x2fbde4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fbde8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBDE8u;
    SET_GPR_U32(ctx, 31, 0x2FBDF0u);
    ctx->pc = 0x2FBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDE8u;
    // 0x2fbdec: 0x24842e20  addiu       $a0, $a0, 0x2E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBDE8u, 0x2FBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDF0u;
label_2fbdf0:
    // 0x2fbdf0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2FBDF0u;
    {
        const bool branch_taken_0x2fbdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDF0u;
        // 0x2fbdf4: 0x2402f82d  addiu       $v0, $zero, -0x7D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdf0) {
            ctx->pc = 0x2FBFB0u;
            goto label_2fbfb0;
        }
    }
    ctx->pc = 0x2FBDF8u;
label_2fbdf8:
    // 0x2fbdf8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbdfc: 0x8c460174  lw          $a2, 0x174($v0)
    ctx->pc = 0x2fbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x2fbe00: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x2fbe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x2fbe04: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FBE04u;
    {
        const bool branch_taken_0x2fbe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE04u;
        // 0x2fbe08: 0x30c20018  andi        $v0, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe04) {
            ctx->pc = 0x2FBE5Cu;
            goto label_2fbe5c;
        }
    }
    ctx->pc = 0x2FBE0Cu;
    // 0x2fbe0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fbe0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe10: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2fbe10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2fbe14: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fbe14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fbe18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fbe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe1c: 0x0  nop
    ctx->pc = 0x2fbe1cu;
    // NOP
label_2fbe20:
    // 0x2fbe20: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBE20u;
    SET_GPR_U32(ctx, 31, 0x2FBE28u);
    ctx->pc = 0x2FBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE20u;
    // 0x2fbe24: 0x26242e38  addiu       $a0, $s1, 0x2E38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBE20u, 0x2FBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE28u;
label_2fbe28:
    // 0x2fbe28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2fbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2fbe2c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2fbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2fbe30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fbe30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fbe34: 0xc0bf066  jal         func_2FC198
    ctx->pc = 0x2FBE34u;
    SET_GPR_U32(ctx, 31, 0x2FBE3Cu);
    ctx->pc = 0x2FBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE34u;
    // 0x2fbe38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC198u, 0x2FBE34u, 0x2FBE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE3Cu;
label_2fbe3c:
    // 0x2fbe3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBE3Cu;
    SET_GPR_U32(ctx, 31, 0x2FBE44u);
    ctx->pc = 0x2FBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE3Cu;
    // 0x2fbe40: 0x26042e50  addiu       $a0, $s0, 0x2E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBE3Cu, 0x2FBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE44u;
label_2fbe44:
    // 0x2fbe44: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x2fbe44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2fbe48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FBE48u;
    {
        const bool branch_taken_0x2fbe48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE48u;
        // 0x2fbe4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe48) {
            ctx->pc = 0x2FBE20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbe20;
        }
    }
    ctx->pc = 0x2FBE50u;
    // 0x2fbe50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fbe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbe54: 0x8c660174  lw          $a2, 0x174($v1)
    ctx->pc = 0x2fbe54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x2fbe58: 0x30c20018  andi        $v0, $a2, 0x18
    ctx->pc = 0x2fbe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24);
label_2fbe5c:
    // 0x2fbe5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FBE5Cu;
    {
        const bool branch_taken_0x2fbe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE5Cu;
        // 0x2fbe60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe5c) {
            ctx->pc = 0x2FBEA8u;
            goto label_2fbea8;
        }
    }
    ctx->pc = 0x2FBE64u;
    // 0x2fbe64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fbe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe68: 0xc0bee04  jal         func_2FB810
    ctx->pc = 0x2FBE68u;
    SET_GPR_U32(ctx, 31, 0x2FBE70u);
    ctx->pc = 0x2FBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE68u;
    // 0x2fbe6c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB810u;
    goto label_2fb810;
    ctx->pc = 0x2FBE70u;
label_2fbe70:
    // 0x2fbe70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fbe70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbe78: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2FBE78u;
    {
        const bool branch_taken_0x2fbe78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE78u;
        // 0x2fbe7c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe78) {
            ctx->pc = 0x2FBFB8u;
            goto label_2fbfb8;
        }
    }
    ctx->pc = 0x2FBE80u;
    // 0x2fbe80: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBE80u;
    {
        const bool branch_taken_0x2fbe80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE80u;
        // 0x2fbe84: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe80) {
            ctx->pc = 0x2FBEA8u;
            goto label_2fbea8;
        }
    }
    ctx->pc = 0x2FBE88u;
    // 0x2fbe88: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBE88u;
    SET_GPR_U32(ctx, 31, 0x2FBE90u);
    ctx->pc = 0x2FBE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE88u;
    // 0x2fbe8c: 0x24842e58  addiu       $a0, $a0, 0x2E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBE88u, 0x2FBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE90u;
label_2fbe90:
    // 0x2fbe90: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fbe90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fbe94: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fbe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe98: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBE98u;
    SET_GPR_U32(ctx, 31, 0x2FBEA0u);
    ctx->pc = 0x2FBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE98u;
    // 0x2fbe9c: 0x24842e78  addiu       $a0, $a0, 0x2E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBE98u, 0x2FBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBEA0u;
label_2fbea0:
    // 0x2fbea0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2FBEA0u;
    {
        const bool branch_taken_0x2fbea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA0u;
        // 0x2fbea4: 0xfe700000  sd          $s0, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbea0) {
            ctx->pc = 0x2FBFB4u;
            goto label_2fbfb4;
        }
    }
    ctx->pc = 0x2FBEA8u;
label_2fbea8:
    // 0x2fbea8: 0x1ac00032  blez        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x2FBEA8u;
    {
        const bool branch_taken_0x2fbea8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2FBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA8u;
        // 0x2fbeac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbea8) {
            ctx->pc = 0x2FBF74u;
            goto label_2fbf74;
        }
    }
    ctx->pc = 0x2FBEB0u;
    // 0x2fbeb0: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x2fbeb0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x2fbeb4: 0x12b880  sll         $s7, $s2, 2
    ctx->pc = 0x2fbeb4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2fbeb8:
    // 0x2fbeb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fbeb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbebc: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x2fbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x2fbec0: 0xc0afc48  jal         func_2BF120
    ctx->pc = 0x2FBEC0u;
    SET_GPR_U32(ctx, 31, 0x2FBEC8u);
    ctx->pc = 0x2FBEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBEC0u;
    // 0x2fbec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF120u, 0x2FBEC0u, 0x2FBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBEC8u;
label_2fbec8:
    // 0x2fbec8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fbec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbecc: 0x8fc20684  lw          $v0, 0x684($fp)
    ctx->pc = 0x2fbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1668)));
    // 0x2fbed0: 0x58400025  blezl       $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FBED0u;
    {
        const bool branch_taken_0x2fbed0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fbed0) {
            ctx->pc = 0x2FBED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBED0u;
            // 0x2fbed4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF68u;
            goto label_2fbf68;
        }
    }
    ctx->pc = 0x2FBED8u;
    // 0x2fbed8: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2fbed8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2fbedc: 0x8e620668  lw          $v0, 0x668($s3)
    ctx->pc = 0x2fbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
label_2fbee0:
    // 0x2fbee0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2fbee0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2fbee4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fbee8: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2FBEE8u;
    SET_GPR_U32(ctx, 31, 0x2FBEF0u);
    ctx->pc = 0x2FBEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBEE8u;
    // 0x2fbeec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2FBEE8u, 0x2FBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBEF0u;
label_2fbef0:
    // 0x2fbef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fbef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbef4: 0xc0afc54  jal         func_2BF150
    ctx->pc = 0x2FBEF4u;
    SET_GPR_U32(ctx, 31, 0x2FBEFCu);
    ctx->pc = 0x2FBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBEF4u;
    // 0x2fbef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF150u, 0x2FBEF4u, 0x2FBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBEFCu;
label_2fbefc:
    // 0x2fbefc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FBEFCu;
    {
        const bool branch_taken_0x2fbefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEFCu;
        // 0x2fbf00: 0x8fc20684  lw          $v0, 0x684($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbefc) {
            ctx->pc = 0x2FBF54u;
            goto label_2fbf54;
        }
    }
    ctx->pc = 0x2FBF04u;
    // 0x2fbf04: 0x8e620668  lw          $v0, 0x668($s3)
    ctx->pc = 0x2fbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
    // 0x2fbf08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fbf0c: 0xc0afcf8  jal         func_2BF3E0
    ctx->pc = 0x2FBF0Cu;
    SET_GPR_U32(ctx, 31, 0x2FBF14u);
    ctx->pc = 0x2FBF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF0Cu;
    // 0x2fbf10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF3E0u, 0x2FBF0Cu, 0x2FBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF14u;
label_2fbf14:
    // 0x2fbf14: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbf18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fbf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf1c: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x2fbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x2fbf20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2fbf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2fbf24: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBF24u;
    {
        const bool branch_taken_0x2fbf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF24u;
        // 0x2fbf28: 0x2f51021  addu        $v0, $s7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf24) {
            ctx->pc = 0x2FBF8Cu;
            goto label_2fbf8c;
        }
    }
    ctx->pc = 0x2FBF2Cu;
    // 0x2fbf2c: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2fbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2fbf30: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2fbf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fbf34: 0xc0bed80  jal         func_2FB600
    ctx->pc = 0x2FBF34u;
    SET_GPR_U32(ctx, 31, 0x2FBF3Cu);
    ctx->pc = 0x2FBF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF34u;
    // 0x2fbf38: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB600u, 0x2FBF34u, 0x2FBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF3Cu;
label_2fbf3c:
    // 0x2fbf3c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FBF3Cu;
    {
        const bool branch_taken_0x2fbf3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF3Cu;
        // 0x2fbf40: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf3c) {
            ctx->pc = 0x2FBF88u;
            goto label_2fbf88;
        }
    }
    ctx->pc = 0x2FBF44u;
    // 0x2fbf44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBF44u;
    SET_GPR_U32(ctx, 31, 0x2FBF4Cu);
    ctx->pc = 0x2FBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF44u;
    // 0x2fbf48: 0x24842ec8  addiu       $a0, $a0, 0x2EC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBF44u, 0x2FBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF4Cu;
label_2fbf4c:
    // 0x2fbf4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2FBF4Cu;
    {
        const bool branch_taken_0x2fbf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF4Cu;
        // 0x2fbf50: 0x2402f829  addiu       $v0, $zero, -0x7D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf4c) {
            ctx->pc = 0x2FBFB0u;
            goto label_2fbfb0;
        }
    }
    ctx->pc = 0x2FBF54u;
label_2fbf54:
    // 0x2fbf54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fbf54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fbf58: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fbf58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbf5c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FBF5Cu;
    {
        const bool branch_taken_0x2fbf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF5Cu;
        // 0x2fbf60: 0x8e620668  lw          $v0, 0x668($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf5c) {
            ctx->pc = 0x2FBEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbee0;
        }
    }
    ctx->pc = 0x2FBF64u;
    // 0x2fbf64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fbf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fbf68:
    // 0x2fbf68: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x2fbf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2fbf6c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2FBF6Cu;
    {
        const bool branch_taken_0x2fbf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF6Cu;
        // 0x2fbf70: 0x12b880  sll         $s7, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf6c) {
            ctx->pc = 0x2FBEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbeb8;
        }
    }
    ctx->pc = 0x2FBF74u;
label_2fbf74:
    // 0x2fbf74: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fbf74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fbf78: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBF78u;
    SET_GPR_U32(ctx, 31, 0x2FBF80u);
    ctx->pc = 0x2FBF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF78u;
    // 0x2fbf7c: 0x24842e90  addiu       $a0, $a0, 0x2E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBF78u, 0x2FBF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF80u;
label_2fbf80:
    // 0x2fbf80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FBF80u;
    {
        const bool branch_taken_0x2fbf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF80u;
        // 0x2fbf84: 0x2402f82a  addiu       $v0, $zero, -0x7D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf80) {
            ctx->pc = 0x2FBFB0u;
            goto label_2fbfb0;
        }
    }
    ctx->pc = 0x2FBF88u;
label_2fbf88:
    // 0x2fbf88: 0x2f51021  addu        $v0, $s7, $s5
    ctx->pc = 0x2fbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
label_2fbf8c:
    // 0x2fbf8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf90: 0xc0b00d8  jal         func_2C0360
    ctx->pc = 0x2FBF90u;
    SET_GPR_U32(ctx, 31, 0x2FBF98u);
    ctx->pc = 0x2FBF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF90u;
    // 0x2fbf94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0360u, 0x2FBF90u, 0x2FBF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF98u;
label_2fbf98:
    // 0x2fbf98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBF98u;
    {
        const bool branch_taken_0x2fbf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF98u;
        // 0x2fbf9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf98) {
            ctx->pc = 0x2FBFC4u;
            goto label_2fbfc4;
        }
    }
    ctx->pc = 0x2FBFA0u;
    // 0x2fbfa0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fbfa4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FBFA4u;
    SET_GPR_U32(ctx, 31, 0x2FBFACu);
    ctx->pc = 0x2FBFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFA4u;
    // 0x2fbfa8: 0x24842f00  addiu       $a0, $a0, 0x2F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FBFA4u, 0x2FBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBFACu;
label_2fbfac:
    // 0x2fbfac: 0x2402f82f  addiu       $v0, $zero, -0x7D1
    ctx->pc = 0x2fbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965295));
label_2fbfb0:
    // 0x2fbfb0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2fbfb4:
    // 0x2fbfb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2fbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbfb8:
    // 0x2fbfb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fbfb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbfbc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2fbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fbfc0: 0xac830168  sw          $v1, 0x168($a0)
    ctx->pc = 0x2fbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 3));
label_2fbfc4:
    // 0x2fbfc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fbfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fbfc8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fbfc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fbfcc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2fbfccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fbfd0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2fbfd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fbfd4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2fbfd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fbfd8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2fbfd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fbfdc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fbfdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fbfe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fbfe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fbfe4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fbfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbfe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fbfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbfec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFECu;
        // 0x2fbff0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBFF4u;
    // 0x2fbff4: 0x0  nop
    ctx->pc = 0x2fbff4u;
    // NOP
    // 0x2fbff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fbff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fbffc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fbffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fc000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc004: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2fc004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fc008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fc00c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2fc00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc010: 0x6400037  bltz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FC010u;
    {
        const bool branch_taken_0x2fc010 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2FC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC010u;
        // 0x2fc014: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc010) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC018u;
    // 0x2fc018: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x2fc018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2fc01c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FC01Cu;
    {
        const bool branch_taken_0x2fc01c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC01Cu;
        // 0x2fc020: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc01c) {
            ctx->pc = 0x2FC088u;
            goto label_2fc088;
        }
    }
    ctx->pc = 0x2FC024u;
    // 0x2fc024: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2fc024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2fc028: 0x8e23066c  lw          $v1, 0x66C($s1)
    ctx->pc = 0x2fc028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
    // 0x2fc02c: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x2fc02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2fc030: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2FC030u;
    {
        const bool branch_taken_0x2fc030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC030u;
        // 0x2fc034: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc030) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC038u;
    // 0x2fc038: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x2fc038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2fc03c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FC03Cu;
    {
        const bool branch_taken_0x2fc03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC03Cu;
        // 0x2fc040: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc03c) {
            ctx->pc = 0x2FC068u;
            goto label_2fc068;
        }
    }
    ctx->pc = 0x2FC044u;
    // 0x2fc044: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fc044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc048: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x2fc048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x2fc04c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fc04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc050: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FC050u;
    SET_GPR_U32(ctx, 31, 0x2FC058u);
    ctx->pc = 0x2FC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC050u;
    // 0x2fc054: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FC050u, 0x2FC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC058u;
label_2fc058:
    // 0x2fc058: 0x8e23066c  lw          $v1, 0x66C($s1)
    ctx->pc = 0x2fc058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1644)));
    // 0x2fc05c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fc060: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FC060u;
    {
        const bool branch_taken_0x2fc060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC060u;
        // 0x2fc064: 0xae23066c  sw          $v1, 0x66C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc060) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC068u;
label_2fc068:
    // 0x2fc068: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x2fc068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fc06c: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x2fc070: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fc070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc074: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2fc074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fc078: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FC078u;
    SET_GPR_U32(ctx, 31, 0x2FC080u);
    ctx->pc = 0x2FC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC078u;
    // 0x2fc07c: 0x2033023  subu        $a2, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FC078u, 0x2FC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC080u;
label_2fc080:
    // 0x2fc080: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FC080u;
    {
        const bool branch_taken_0x2fc080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC080u;
        // 0x2fc084: 0xae30066c  sw          $s0, 0x66C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1644), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc080) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC088u;
label_2fc088:
    // 0x2fc088: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FC088u;
    {
        const bool branch_taken_0x2fc088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC088u;
        // 0x2fc08c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc088) {
            ctx->pc = 0x2FC0F4u;
            goto label_2fc0f4;
        }
    }
    ctx->pc = 0x2FC090u;
    // 0x2fc090: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2fc090u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2fc094: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x2fc098: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x2fc098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2fc09c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC09Cu;
    {
        const bool branch_taken_0x2fc09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC09Cu;
        // 0x2fc0a0: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc09c) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC0A4u;
    // 0x2fc0a4: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x2fc0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2fc0a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FC0A8u;
    {
        const bool branch_taken_0x2fc0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0A8u;
        // 0x2fc0ac: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0a8) {
            ctx->pc = 0x2FC0D4u;
            goto label_2fc0d4;
        }
    }
    ctx->pc = 0x2FC0B0u;
    // 0x2fc0b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fc0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0b4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2fc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x2fc0b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fc0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0bc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FC0BCu;
    SET_GPR_U32(ctx, 31, 0x2FC0C4u);
    ctx->pc = 0x2FC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0BCu;
    // 0x2fc0c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FC0BCu, 0x2FC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0C4u;
label_2fc0c4:
    // 0x2fc0c4: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x2fc0c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fc0cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC0CCu;
    {
        const bool branch_taken_0x2fc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0CCu;
        // 0x2fc0d0: 0xae230670  sw          $v1, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0cc) {
            ctx->pc = 0x2FC0F0u;
            goto label_2fc0f0;
        }
    }
    ctx->pc = 0x2FC0D4u;
label_2fc0d4:
    // 0x2fc0d4: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x2fc0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fc0d8: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x2fc0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x2fc0dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fc0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2fc0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fc0e4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FC0E4u;
    SET_GPR_U32(ctx, 31, 0x2FC0ECu);
    ctx->pc = 0x2FC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0E4u;
    // 0x2fc0e8: 0x2033023  subu        $a2, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FC0E4u, 0x2FC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0ECu;
label_2fc0ec:
    // 0x2fc0ec: 0xae300670  sw          $s0, 0x670($s1)
    ctx->pc = 0x2fc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 16));
label_2fc0f0:
    // 0x2fc0f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fc0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fc0f4:
    // 0x2fc0f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fc0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fc0f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fc0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc0fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fc0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc104: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC104u;
        // 0x2fc108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC10Cu;
    // 0x2fc10c: 0x0  nop
    ctx->pc = 0x2fc10cu;
    // NOP
    if (ctx->pc == 0x2fc10cu) { ctx->pc = 0x2fc110u; }
}
