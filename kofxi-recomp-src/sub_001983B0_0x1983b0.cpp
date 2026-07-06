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

// Function: sub_001983B0
// Address: 0x1983b0 - 0x1985d0
void sub_001983B0_0x1983b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001983B0_0x1983b0");
#endif

    switch (ctx->pc) {
        case 0x1983b0u: goto label_1983b0;
        case 0x1983b4u: goto label_1983b4;
        case 0x1983b8u: goto label_1983b8;
        case 0x1983bcu: goto label_1983bc;
        case 0x1983c0u: goto label_1983c0;
        case 0x1983c4u: goto label_1983c4;
        case 0x1983c8u: goto label_1983c8;
        case 0x1983ccu: goto label_1983cc;
        case 0x1983d0u: goto label_1983d0;
        case 0x1983d4u: goto label_1983d4;
        case 0x1983d8u: goto label_1983d8;
        case 0x1983dcu: goto label_1983dc;
        case 0x1983e0u: goto label_1983e0;
        case 0x1983e4u: goto label_1983e4;
        case 0x1983e8u: goto label_1983e8;
        case 0x1983ecu: goto label_1983ec;
        case 0x1983f0u: goto label_1983f0;
        case 0x1983f4u: goto label_1983f4;
        case 0x1983f8u: goto label_1983f8;
        case 0x1983fcu: goto label_1983fc;
        case 0x198400u: goto label_198400;
        case 0x198404u: goto label_198404;
        case 0x198408u: goto label_198408;
        case 0x19840cu: goto label_19840c;
        case 0x198410u: goto label_198410;
        case 0x198414u: goto label_198414;
        case 0x198418u: goto label_198418;
        case 0x19841cu: goto label_19841c;
        case 0x198420u: goto label_198420;
        case 0x198424u: goto label_198424;
        case 0x198428u: goto label_198428;
        case 0x19842cu: goto label_19842c;
        case 0x198430u: goto label_198430;
        case 0x198434u: goto label_198434;
        case 0x198438u: goto label_198438;
        case 0x19843cu: goto label_19843c;
        case 0x198440u: goto label_198440;
        case 0x198444u: goto label_198444;
        case 0x198448u: goto label_198448;
        case 0x19844cu: goto label_19844c;
        case 0x198450u: goto label_198450;
        case 0x198454u: goto label_198454;
        case 0x198458u: goto label_198458;
        case 0x19845cu: goto label_19845c;
        case 0x198460u: goto label_198460;
        case 0x198464u: goto label_198464;
        case 0x198468u: goto label_198468;
        case 0x19846cu: goto label_19846c;
        case 0x198470u: goto label_198470;
        case 0x198474u: goto label_198474;
        case 0x198478u: goto label_198478;
        case 0x19847cu: goto label_19847c;
        case 0x198480u: goto label_198480;
        case 0x198484u: goto label_198484;
        case 0x198488u: goto label_198488;
        case 0x19848cu: goto label_19848c;
        case 0x198490u: goto label_198490;
        case 0x198494u: goto label_198494;
        case 0x198498u: goto label_198498;
        case 0x19849cu: goto label_19849c;
        case 0x1984a0u: goto label_1984a0;
        case 0x1984a4u: goto label_1984a4;
        case 0x1984a8u: goto label_1984a8;
        case 0x1984acu: goto label_1984ac;
        case 0x1984b0u: goto label_1984b0;
        case 0x1984b4u: goto label_1984b4;
        case 0x1984b8u: goto label_1984b8;
        case 0x1984bcu: goto label_1984bc;
        case 0x1984c0u: goto label_1984c0;
        case 0x1984c4u: goto label_1984c4;
        case 0x1984c8u: goto label_1984c8;
        case 0x1984ccu: goto label_1984cc;
        case 0x1984d0u: goto label_1984d0;
        case 0x1984d4u: goto label_1984d4;
        case 0x1984d8u: goto label_1984d8;
        case 0x1984dcu: goto label_1984dc;
        case 0x1984e0u: goto label_1984e0;
        case 0x1984e4u: goto label_1984e4;
        case 0x1984e8u: goto label_1984e8;
        case 0x1984ecu: goto label_1984ec;
        case 0x1984f0u: goto label_1984f0;
        case 0x1984f4u: goto label_1984f4;
        case 0x1984f8u: goto label_1984f8;
        case 0x1984fcu: goto label_1984fc;
        case 0x198500u: goto label_198500;
        case 0x198504u: goto label_198504;
        case 0x198508u: goto label_198508;
        case 0x19850cu: goto label_19850c;
        case 0x198510u: goto label_198510;
        case 0x198514u: goto label_198514;
        case 0x198518u: goto label_198518;
        case 0x19851cu: goto label_19851c;
        case 0x198520u: goto label_198520;
        case 0x198524u: goto label_198524;
        case 0x198528u: goto label_198528;
        case 0x19852cu: goto label_19852c;
        case 0x198530u: goto label_198530;
        case 0x198534u: goto label_198534;
        case 0x198538u: goto label_198538;
        case 0x19853cu: goto label_19853c;
        case 0x198540u: goto label_198540;
        case 0x198544u: goto label_198544;
        case 0x198548u: goto label_198548;
        case 0x19854cu: goto label_19854c;
        case 0x198550u: goto label_198550;
        case 0x198554u: goto label_198554;
        case 0x198558u: goto label_198558;
        case 0x19855cu: goto label_19855c;
        case 0x198560u: goto label_198560;
        case 0x198564u: goto label_198564;
        case 0x198568u: goto label_198568;
        case 0x19856cu: goto label_19856c;
        case 0x198570u: goto label_198570;
        case 0x198574u: goto label_198574;
        case 0x198578u: goto label_198578;
        case 0x19857cu: goto label_19857c;
        case 0x198580u: goto label_198580;
        case 0x198584u: goto label_198584;
        case 0x198588u: goto label_198588;
        case 0x19858cu: goto label_19858c;
        case 0x198590u: goto label_198590;
        case 0x198594u: goto label_198594;
        case 0x198598u: goto label_198598;
        case 0x19859cu: goto label_19859c;
        case 0x1985a0u: goto label_1985a0;
        case 0x1985a4u: goto label_1985a4;
        case 0x1985a8u: goto label_1985a8;
        case 0x1985acu: goto label_1985ac;
        case 0x1985b0u: goto label_1985b0;
        case 0x1985b4u: goto label_1985b4;
        case 0x1985b8u: goto label_1985b8;
        case 0x1985bcu: goto label_1985bc;
        case 0x1985c0u: goto label_1985c0;
        case 0x1985c4u: goto label_1985c4;
        case 0x1985c8u: goto label_1985c8;
        case 0x1985ccu: goto label_1985cc;
        default: break;
    }

    ctx->pc = 0x1983b0u;

label_1983b0:
    // 0x1983b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1983b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1983b4:
    // 0x1983b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1983b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1983b8:
    // 0x1983b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1983b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1983bc:
    // 0x1983bc: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
label_1983c0:
    if (ctx->pc == 0x1983C0u) {
        ctx->pc = 0x1983C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983BCu;
        // 0x1983c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983C4u;
        goto label_1983c4;
    }
    ctx->pc = 0x1983BCu;
    {
        const bool branch_taken_0x1983bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983BCu;
        // 0x1983c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983bc) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1983C4u;
label_1983c4:
    // 0x1983c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1983c8:
    // 0x1983c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1983c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1983cc:
    // 0x1983cc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_1983d0:
    // 0x1983d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1983d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1983d4:
    // 0x1983d4: 0xc0692e0  jal         func_1A4B80
label_1983d8:
    if (ctx->pc == 0x1983D8u) {
        ctx->pc = 0x1983D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983D4u;
        // 0x1983d8: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983DCu;
        goto label_1983dc;
    }
    ctx->pc = 0x1983D4u;
    SET_GPR_U32(ctx, 31, 0x1983DCu);
    ctx->pc = 0x1983D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1983D4u;
    // 0x1983d8: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x1983D4u, 0x1983DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983DCu;
label_1983dc:
    // 0x1983dc: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_1983e0:
    if (ctx->pc == 0x1983E0u) {
        ctx->pc = 0x1983E4u;
        goto label_1983e4;
    }
    ctx->pc = 0x1983DCu;
    {
        const bool branch_taken_0x1983dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983dc) {
            ctx->pc = 0x1985B8u;
            goto label_1985b8;
        }
    }
    ctx->pc = 0x1983E4u;
label_1983e4:
    // 0x1983e4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1983e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_1983e8:
    // 0x1983e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1983e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1983ec:
    // 0x1983ec: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1983f0:
    // 0x1983f0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1983f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1983f4:
    // 0x1983f4: 0x2463e940  addiu       $v1, $v1, -0x16C0
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961472));
label_1983f8:
    // 0x1983f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1983f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1983fc:
    // 0x1983fc: 0x2484e930  addiu       $a0, $a0, -0x16D0
    ctx->pc = 0x1983fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961456));
label_198400:
    // 0x198400: 0x91480000  lbu         $t0, 0x0($t2)
    ctx->pc = 0x198400u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_198404:
    // 0x198404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198408:
    // 0x198408: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x198408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_19840c:
    // 0x19840c: 0x0  nop
    ctx->pc = 0x19840cu;
    // NOP
label_198410:
    // 0x198410: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x198410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_198414:
    // 0x198414: 0x30c80080  andi        $t0, $a2, 0x80
    ctx->pc = 0x198414u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_198418:
    // 0x198418: 0x11000055  beqz        $t0, . + 4 + (0x55 << 2)
label_19841c:
    if (ctx->pc == 0x19841Cu) {
        ctx->pc = 0x198420u;
        goto label_198420;
    }
    ctx->pc = 0x198418u;
    {
        const bool branch_taken_0x198418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x198418) {
            ctx->pc = 0x198570u;
            goto label_198570;
        }
    }
    ctx->pc = 0x198420u;
label_198420:
    // 0x198420: 0x914d0000  lbu         $t5, 0x0($t2)
    ctx->pc = 0x198420u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_198424:
    // 0x198424: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x198424u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198428:
    // 0x198428: 0xd4103  sra         $t0, $t5, 4
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 13), 4));
label_19842c:
    // 0x19842c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_198430:
    // 0x198430: 0x310c000f  andi        $t4, $t0, 0xF
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_198434:
    // 0x198434: 0x31a8000f  andi        $t0, $t5, 0xF
    ctx->pc = 0x198434u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
label_198438:
    // 0x198438: 0xac6823  subu        $t5, $a1, $t4
    ctx->pc = 0x198438u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19843c:
    // 0x19843c: 0x886021  addu        $t4, $a0, $t0
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_198440:
    // 0x198440: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x198440u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_198444:
    // 0x198444: 0x12d4023  subu        $t0, $t1, $t5
    ctx->pc = 0x198444u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_198448:
    // 0x198448: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_19844c:
    // 0x19844c: 0x2d810011  sltiu       $at, $t4, 0x11
    ctx->pc = 0x19844cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_198450:
    // 0x198450: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_198454:
    if (ctx->pc == 0x198454u) {
        ctx->pc = 0x198454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198450u;
        // 0x198454: 0xae0b0000  sw          $t3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198458u;
        goto label_198458;
    }
    ctx->pc = 0x198450u;
    {
        const bool branch_taken_0x198450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198450u;
        // 0x198454: 0xae0b0000  sw          $t3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198450) {
            ctx->pc = 0x198590u;
            goto label_198590;
        }
    }
    ctx->pc = 0x198458u;
label_198458:
    // 0x198458: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_19845c:
    // 0x19845c: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_198460:
    // 0x198460: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_198464:
    // 0x198464: 0x1600008  jr          $t3
label_198468:
    if (ctx->pc == 0x198468u) {
        ctx->pc = 0x19846Cu;
        goto label_19846c;
    }
    ctx->pc = 0x198464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19846Cu;
label_19846c:
    // 0x19846c: 0x0  nop
    ctx->pc = 0x19846cu;
    // NOP
label_198470:
    // 0x198470: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198470u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198474:
    // 0x198474: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198474u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198478:
    // 0x198478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19847c:
    // 0x19847c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198480:
    // 0x198480: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198484:
    // 0x198484: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198484u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198488:
    // 0x198488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19848c:
    // 0x19848c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198490:
    // 0x198490: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198490u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198494:
    // 0x198494: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198494u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198498:
    // 0x198498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19849c:
    // 0x19849c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984a0:
    // 0x1984a0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984a0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984a4:
    // 0x1984a4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984a8:
    // 0x1984a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984ac:
    // 0x1984ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984b0:
    // 0x1984b0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984b0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984b4:
    // 0x1984b4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984b8:
    // 0x1984b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984bc:
    // 0x1984bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984c0:
    // 0x1984c0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984c4:
    // 0x1984c4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984c8:
    // 0x1984c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984cc:
    // 0x1984cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984d0:
    // 0x1984d0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984d4:
    // 0x1984d4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984d8:
    // 0x1984d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984dc:
    // 0x1984dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984e0:
    // 0x1984e0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984e0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984e4:
    // 0x1984e4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984e8:
    // 0x1984e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984ec:
    // 0x1984ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1984f0:
    // 0x1984f0: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1984f4:
    // 0x1984f4: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x1984f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_1984f8:
    // 0x1984f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1984fc:
    // 0x1984fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1984fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198500:
    // 0x198500: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198504:
    // 0x198504: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198504u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198508:
    // 0x198508: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19850c:
    // 0x19850c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19850cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198510:
    // 0x198510: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198514:
    // 0x198514: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198514u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198518:
    // 0x198518: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19851c:
    // 0x19851c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19851cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198520:
    // 0x198520: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198520u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198524:
    // 0x198524: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198524u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198528:
    // 0x198528: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19852c:
    // 0x19852c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19852cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198530:
    // 0x198530: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198534:
    // 0x198534: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198534u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198538:
    // 0x198538: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19853c:
    // 0x19853c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19853cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198540:
    // 0x198540: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198540u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198544:
    // 0x198544: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198544u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198548:
    // 0x198548: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19854c:
    // 0x19854c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19854cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198550:
    // 0x198550: 0x810b0000  lb          $t3, 0x0($t0)
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198554:
    // 0x198554: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x198554u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
label_198558:
    // 0x198558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x198558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19855c:
    // 0x19855c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198560:
    // 0x198560: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x198560u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_198564:
    // 0x198564: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x198564u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_198568:
    // 0x198568: 0x10000009  b           . + 4 + (0x9 << 2)
label_19856c:
    if (ctx->pc == 0x19856Cu) {
        ctx->pc = 0x19856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198568u;
        // 0x19856c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198570u;
        goto label_198570;
    }
    ctx->pc = 0x198568u;
    {
        const bool branch_taken_0x198568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198568u;
        // 0x19856c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198568) {
            ctx->pc = 0x198590u;
            goto label_198590;
        }
    }
    ctx->pc = 0x198570u;
label_198570:
    // 0x198570: 0x81480000  lb          $t0, 0x0($t2)
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_198574:
    // 0x198574: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x198574u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_198578:
    // 0x198578: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_19857c:
    // 0x19857c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x19857cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198580:
    // 0x198580: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_198584:
    // 0x198584: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_198588:
    // 0x198588: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x198588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_19858c:
    // 0x19858c: 0x0  nop
    ctx->pc = 0x19858cu;
    // NOP
label_198590:
    // 0x198590: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_198594:
    // 0x198594: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x198594u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_198598:
    // 0x198598: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19859c:
    // 0x19859c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x19859cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1985a0:
    // 0x1985a0: 0x28e60008  slti        $a2, $a3, 0x8
    ctx->pc = 0x1985a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_1985a4:
    // 0x1985a4: 0x14c0ff9a  bnez        $a2, . + 4 + (-0x66 << 2)
label_1985a8:
    if (ctx->pc == 0x1985A8u) {
        ctx->pc = 0x1985ACu;
        goto label_1985ac;
    }
    ctx->pc = 0x1985A4u;
    {
        const bool branch_taken_0x1985a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1985a4) {
            ctx->pc = 0x198410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198410;
        }
    }
    ctx->pc = 0x1985ACu;
label_1985ac:
    // 0x1985ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1985b0:
    // 0x1985b0: 0x5cc0ff94  bgtzl       $a2, . + 4 + (-0x6C << 2)
label_1985b4:
    if (ctx->pc == 0x1985B4u) {
        ctx->pc = 0x1985B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985B0u;
        // 0x1985b4: 0x91480000  lbu         $t0, 0x0($t2) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1985B8u;
        goto label_1985b8;
    }
    ctx->pc = 0x1985B0u;
    {
        const bool branch_taken_0x1985b0 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1985b0) {
            ctx->pc = 0x1985B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1985B0u;
            // 0x1985b4: 0x91480000  lbu         $t0, 0x0($t2) (Delay Slot)
            SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198404;
        }
    }
    ctx->pc = 0x1985B8u;
label_1985b8:
    // 0x1985b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1985b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1985bc:
    // 0x1985bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1985bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1985c0:
    // 0x1985c0: 0x3e00008  jr          $ra
label_1985c4:
    if (ctx->pc == 0x1985C4u) {
        ctx->pc = 0x1985C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985C0u;
        // 0x1985c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1985C8u;
        goto label_1985c8;
    }
    ctx->pc = 0x1985C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1985C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985C0u;
        // 0x1985c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1985C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985C8u;
label_1985c8:
    // 0x1985c8: 0x0  nop
    ctx->pc = 0x1985c8u;
    // NOP
label_1985cc:
    // 0x1985cc: 0x0  nop
    ctx->pc = 0x1985ccu;
    // NOP
}
