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

// Function: sub_003231A0
// Address: 0x3231a0 - 0x3234f0
void sub_003231A0_0x3231a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003231A0_0x3231a0");
#endif

    switch (ctx->pc) {
        case 0x3232c8u: goto label_3232c8;
        case 0x3233d4u: goto label_3233d4;
        default: break;
    }

    ctx->pc = 0x3231a0u;

    // 0x3231a0: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x3231a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3231a4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3231a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3231a8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x3231a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3231ac: 0x14200092  bnez        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x3231ACu;
    {
        const bool branch_taken_0x3231ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231ACu;
        // 0x3231b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231ac) {
            ctx->pc = 0x3233F8u;
            goto label_3233f8;
        }
    }
    ctx->pc = 0x3231B4u;
    // 0x3231b4: 0x865823  subu        $t3, $a0, $a2
    ctx->pc = 0x3231b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3231b8: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x3231b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3231bc: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x3231bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3231c0: 0x14200079  bnez        $at, . + 4 + (0x79 << 2)
    ctx->pc = 0x3231C0u;
    {
        const bool branch_taken_0x3231c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231C0u;
        // 0x3231c4: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231c0) {
            ctx->pc = 0x3233A8u;
            goto label_3233a8;
        }
    }
    ctx->pc = 0x3231C8u;
    // 0x3231c8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x3231c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3231cc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3231ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3231d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3231d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3231d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3231dc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3231DCu;
    {
        const bool branch_taken_0x3231dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231DCu;
        // 0x3231e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231dc) {
            ctx->pc = 0x3231FCu;
            goto label_3231fc;
        }
    }
    ctx->pc = 0x3231E4u;
    // 0x3231e4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x3231e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x3231e8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x3231e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x3231ec: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x3231ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3231f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3231F0u;
    {
        const bool branch_taken_0x3231f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3231f0) {
            ctx->pc = 0x3231FCu;
            goto label_3231fc;
        }
    }
    ctx->pc = 0x3231F8u;
    // 0x3231f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3231f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3231fc:
    // 0x3231fc: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3231FCu;
    {
        const bool branch_taken_0x3231fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3231fc) {
            ctx->pc = 0x32321Cu;
            goto label_32321c;
        }
    }
    ctx->pc = 0x323204u;
    // 0x323204: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x323204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x323208: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x323208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x32320c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x32320cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x323210: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x323210u;
    {
        const bool branch_taken_0x323210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x323210) {
            ctx->pc = 0x32321Cu;
            goto label_32321c;
        }
    }
    ctx->pc = 0x323218u;
    // 0x323218: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x323218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32321c:
    // 0x32321c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32321Cu;
    {
        const bool branch_taken_0x32321c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x32321c) {
            ctx->pc = 0x323234u;
            goto label_323234;
        }
    }
    ctx->pc = 0x323224u;
    // 0x323224: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x323224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x323228: 0x10c70002  beq         $a2, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x323228u;
    {
        const bool branch_taken_0x323228 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x323228) {
            ctx->pc = 0x323234u;
            goto label_323234;
        }
    }
    ctx->pc = 0x323230u;
    // 0x323230: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x323230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323234:
    // 0x323234: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x323234u;
    {
        const bool branch_taken_0x323234 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x323234) {
            ctx->pc = 0x323270u;
            goto label_323270;
        }
    }
    ctx->pc = 0x32323Cu;
    // 0x32323c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x32323cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x323240: 0x63823  negu        $a3, $a2
    ctx->pc = 0x323240u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x323244: 0x894024  and         $t0, $a0, $t1
    ctx->pc = 0x323244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x323248: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x323248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x32324c: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x32324Cu;
    {
        const bool branch_taken_0x32324c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x323250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32324Cu;
        // 0x323250: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32324c) {
            ctx->pc = 0x323264u;
            goto label_323264;
        }
    }
    ctx->pc = 0x323254u;
    // 0x323254: 0x1693824  and         $a3, $t3, $t1
    ctx->pc = 0x323254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x323258: 0x11070002  beq         $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x323258u;
    {
        const bool branch_taken_0x323258 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x323258) {
            ctx->pc = 0x323264u;
            goto label_323264;
        }
    }
    ctx->pc = 0x323260u;
    // 0x323260: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x323260u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323264:
    // 0x323264: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x323264u;
    {
        const bool branch_taken_0x323264 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x323264) {
            ctx->pc = 0x323270u;
            goto label_323270;
        }
    }
    ctx->pc = 0x32326Cu;
    // 0x32326c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x32326cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323270:
    // 0x323270: 0x11a0000c  beqz        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x323270u;
    {
        const bool branch_taken_0x323270 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x323270) {
            ctx->pc = 0x3232A4u;
            goto label_3232a4;
        }
    }
    ctx->pc = 0x323278u;
    // 0x323278: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x32327c: 0x1683824  and         $a3, $t3, $t0
    ctx->pc = 0x32327cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & GPR_U64(ctx, 8));
    // 0x323280: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x323280u;
    {
        const bool branch_taken_0x323280 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x323284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323280u;
        // 0x323284: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323280) {
            ctx->pc = 0x323298u;
            goto label_323298;
        }
    }
    ctx->pc = 0x323288u;
    // 0x323288: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x323288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x32328c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x32328Cu;
    {
        const bool branch_taken_0x32328c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32328c) {
            ctx->pc = 0x323298u;
            goto label_323298;
        }
    }
    ctx->pc = 0x323294u;
    // 0x323294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x323294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323298:
    // 0x323298: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x323298u;
    {
        const bool branch_taken_0x323298 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x323298) {
            ctx->pc = 0x3232A4u;
            goto label_3232a4;
        }
    }
    ctx->pc = 0x3232A0u;
    // 0x3232a0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3232a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3232a4:
    // 0x3232a4: 0x11c00040  beqz        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x3232A4u;
    {
        const bool branch_taken_0x3232a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x3232a4) {
            ctx->pc = 0x3233A8u;
            goto label_3233a8;
        }
    }
    ctx->pc = 0x3232ACu;
    // 0x3232ac: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x3232acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3232b0: 0x3c0701dd  lui         $a3, 0x1DD
    ctx->pc = 0x3232b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)477 << 16));
    // 0x3232b4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x3232b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3232b8: 0x24e79410  addiu       $a3, $a3, -0x6BF0
    ctx->pc = 0x3232b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939664));
    // 0x3232bc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x3232bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3232c0: 0xe86821  addu        $t5, $a3, $t0
    ctx->pc = 0x3232c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3232c4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x3232c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_3232c8:
    // 0x3232c8: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x3232c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3232cc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3232ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3232d0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3232d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3232d4: 0x24ac0002  addiu       $t4, $a1, 0x2
    ctx->pc = 0x3232d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3232d8: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x3232d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3232dc: 0x24ab0003  addiu       $t3, $a1, 0x3
    ctx->pc = 0x3232dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3232e0: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x3232e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3232e4: 0x24a90005  addiu       $t1, $a1, 0x5
    ctx->pc = 0x3232e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x3232e8: 0x24a80006  addiu       $t0, $a1, 0x6
    ctx->pc = 0x3232e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3232ec: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x3232ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3232f0: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3232f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3232f4: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x3232f4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3232f8: 0x0  nop
    ctx->pc = 0x3232f8u;
    // NOP
    // 0x3232fc: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x3232fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x323300: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x323300u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323304: 0x0  nop
    ctx->pc = 0x323304u;
    // NOP
    // 0x323308: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x323308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x32330c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x32330cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323310: 0x0  nop
    ctx->pc = 0x323310u;
    // NOP
    // 0x323314: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x323314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x323318: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x323318u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x32331c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x32331cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323320: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x323320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x323324: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x323324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x323328: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x323328u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32332c: 0x0  nop
    ctx->pc = 0x32332cu;
    // NOP
    // 0x323330: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x323330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x323334: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x323334u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323338: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x323338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x32333c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x32333cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323340: 0x46086a1c  madd.s      $f8, $f13, $f8
    ctx->pc = 0x323340u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[8]));
    // 0x323344: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x323344u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323348: 0x4606699c  madd.s      $f6, $f13, $f6
    ctx->pc = 0x323348u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[6]));
    // 0x32334c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x32334cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323350: 0x4605695c  madd.s      $f5, $f13, $f5
    ctx->pc = 0x323350u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[5]));
    // 0x323354: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x323354u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323358: 0x4604691c  madd.s      $f4, $f13, $f4
    ctx->pc = 0x323358u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[4]));
    // 0x32335c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x32335cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323360: 0xe5a80010  swc1        $f8, 0x10($t5)
    ctx->pc = 0x323360u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
    // 0x323364: 0x460368dc  madd.s      $f3, $f13, $f3
    ctx->pc = 0x323364u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[3]));
    // 0x323368: 0xe5a60028  swc1        $f6, 0x28($t5)
    ctx->pc = 0x323368u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 40), bits); }
    // 0x32336c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x32336cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323370: 0xe5a50040  swc1        $f5, 0x40($t5)
    ctx->pc = 0x323370u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x323374: 0x4602689c  madd.s      $f2, $f13, $f2
    ctx->pc = 0x323374u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[2]));
    // 0x323378: 0xe5a40058  swc1        $f4, 0x58($t5)
    ctx->pc = 0x323378u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 88), bits); }
    // 0x32337c: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x32337cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323380: 0xe5a30070  swc1        $f3, 0x70($t5)
    ctx->pc = 0x323380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x323384: 0x4601685c  madd.s      $f1, $f13, $f1
    ctx->pc = 0x323384u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[1]));
    // 0x323388: 0xe5a20088  swc1        $f2, 0x88($t5)
    ctx->pc = 0x323388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 136), bits); }
    // 0x32338c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32338cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323390: 0x460c3818  adda.s      $f7, $f12
    ctx->pc = 0x323390u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[12]));
    // 0x323394: 0xe5a100a0  swc1        $f1, 0xA0($t5)
    ctx->pc = 0x323394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x323398: 0x4600681c  madd.s      $f0, $f13, $f0
    ctx->pc = 0x323398u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[0]));
    // 0x32339c: 0xe5a000b8  swc1        $f0, 0xB8($t5)
    ctx->pc = 0x32339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 184), bits); }
    // 0x3233a0: 0x1020ffc9  beqz        $at, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3233A0u;
    {
        const bool branch_taken_0x3233a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233A0u;
        // 0x3233a4: 0x25ad00c0  addiu       $t5, $t5, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233a0) {
            ctx->pc = 0x3232C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3232c8;
        }
    }
    ctx->pc = 0x3233A8u;
label_3233a8:
    // 0x3233a8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x3233a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3233ac: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x3233ACu;
    {
        const bool branch_taken_0x3233ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3233ac) {
            ctx->pc = 0x3233F8u;
            goto label_3233f8;
        }
    }
    ctx->pc = 0x3233B4u;
    // 0x3233b4: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x3233b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3233b8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3233b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3233bc: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x3233bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3233c0: 0x24639410  addiu       $v1, $v1, -0x6BF0
    ctx->pc = 0x3233c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939664));
    // 0x3233c4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x3233c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3233c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3233c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3233cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3233d0: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x3233d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[12]));
label_3233d4:
    // 0x3233d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3233d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3233d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3233d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3233dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3233dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3233e0: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x3233e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3233e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3233e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3233e8: 0x4600681c  madd.s      $f0, $f13, $f0
    ctx->pc = 0x3233e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[0]));
    // 0x3233ec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3233ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3233f0: 0x1020fff8  beqz        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3233F0u;
    {
        const bool branch_taken_0x3233f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233F0u;
        // 0x3233f4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233f0) {
            ctx->pc = 0x3233D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3233d4;
        }
    }
    ctx->pc = 0x3233F8u;
label_3233f8:
    // 0x3233f8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3233f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3233fc: 0xc46195e8  lwc1        $f1, -0x6A18($v1)
    ctx->pc = 0x3233fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323400: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x323404: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x323408: 0x3c0601dd  lui         $a2, 0x1DD
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)477 << 16));
    // 0x32340c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323410: 0xc4609600  lwc1        $f0, -0x6A00($v1)
    ctx->pc = 0x323410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323414: 0xe4819708  swc1        $f1, -0x68F8($a0)
    ctx->pc = 0x323414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294940424), bits); }
    // 0x323418: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32341c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32341cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323420: 0xc46197f8  lwc1        $f1, -0x6808($v1)
    ctx->pc = 0x323420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323424: 0xe4a09720  swc1        $f0, -0x68E0($a1)
    ctx->pc = 0x323424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294940448), bits); }
    // 0x323428: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x32342c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32342cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323430: 0xc4609810  lwc1        $f0, -0x67F0($v1)
    ctx->pc = 0x323430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323434: 0xe48198e8  swc1        $f1, -0x6718($a0)
    ctx->pc = 0x323434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294940904), bits); }
    // 0x323438: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32343c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323440: 0xc4619828  lwc1        $f1, -0x67D8($v1)
    ctx->pc = 0x323440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323444: 0xe4a09900  swc1        $f0, -0x6700($a1)
    ctx->pc = 0x323444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294940928), bits); }
    // 0x323448: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x32344c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32344cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323450: 0xc4609840  lwc1        $f0, -0x67C0($v1)
    ctx->pc = 0x323450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323454: 0xe4819918  swc1        $f1, -0x66E8($a0)
    ctx->pc = 0x323454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294940952), bits); }
    // 0x323458: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32345c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32345cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323460: 0xc4619858  lwc1        $f1, -0x67A8($v1)
    ctx->pc = 0x323460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323464: 0xe4a09930  swc1        $f0, -0x66D0($a1)
    ctx->pc = 0x323464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294940976), bits); }
    // 0x323468: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x32346c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323470: 0xc4609870  lwc1        $f0, -0x6790($v1)
    ctx->pc = 0x323470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323474: 0xe4819948  swc1        $f1, -0x66B8($a0)
    ctx->pc = 0x323474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941000), bits); }
    // 0x323478: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32347c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32347cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323480: 0xc4619888  lwc1        $f1, -0x6778($v1)
    ctx->pc = 0x323480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323484: 0xe4a09960  swc1        $f0, -0x66A0($a1)
    ctx->pc = 0x323484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294941024), bits); }
    // 0x323488: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x323488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x32348c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x323490: 0xc46098a0  lwc1        $f0, -0x6760($v1)
    ctx->pc = 0x323490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323494: 0xe4819978  swc1        $f1, -0x6688($a0)
    ctx->pc = 0x323494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294941048), bits); }
    // 0x323498: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x323498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x32349c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3234a0: 0xc46299a8  lwc1        $f2, -0x6658($v1)
    ctx->pc = 0x3234a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3234a4: 0xe4a09990  swc1        $f0, -0x6670($a1)
    ctx->pc = 0x3234a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294941072), bits); }
    // 0x3234a8: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x3234a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x3234ac: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3234acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3234b0: 0xc46199c0  lwc1        $f1, -0x6640($v1)
    ctx->pc = 0x3234b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3234b4: 0xe4829618  swc1        $f2, -0x69E8($a0)
    ctx->pc = 0x3234b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294940184), bits); }
    // 0x3234b8: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x3234b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x3234bc: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3234bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3234c0: 0xc46099d8  lwc1        $f0, -0x6628($v1)
    ctx->pc = 0x3234c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3234c4: 0xe4c19630  swc1        $f1, -0x69D0($a2)
    ctx->pc = 0x3234c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294940208), bits); }
    // 0x3234c8: 0xe4819750  swc1        $f1, -0x68B0($a0)
    ctx->pc = 0x3234c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294940496), bits); }
    // 0x3234cc: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3234ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3234d0: 0xe4629738  swc1        $f2, -0x68C8($v1)
    ctx->pc = 0x3234d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940472), bits); }
    // 0x3234d4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3234d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3234d8: 0xe4a09648  swc1        $f0, -0x69B8($a1)
    ctx->pc = 0x3234d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294940232), bits); }
    // 0x3234dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3234DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234DCu;
        // 0x3234e0: 0xe4609768  swc1        $f0, -0x6898($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940520), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3234DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3234E4u;
    // 0x3234e4: 0x0  nop
    ctx->pc = 0x3234e4u;
    // NOP
    // 0x3234e8: 0x0  nop
    ctx->pc = 0x3234e8u;
    // NOP
    // 0x3234ec: 0x0  nop
    ctx->pc = 0x3234ecu;
    // NOP
}
