#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001187A8
// Address: 0x1187a8 - 0x1188b8
void sub_001187A8_0x1187a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001187A8_0x1187a8");
#endif

    switch (ctx->pc) {
        case 0x118828u: goto label_118828;
        case 0x118880u: goto label_118880;
        case 0x118888u: goto label_118888;
        case 0x118890u: goto label_118890;
        default: break;
    }

    ctx->pc = 0x1187a8u;

    // 0x1187a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1187ac: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1187acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1187b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1187b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1187b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1187b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1187b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1187b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1187bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1187c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1187c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1187c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1187c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1187c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1187ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1187d0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x1187d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1187d4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1187D4u;
    {
        const bool branch_taken_0x1187d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1187D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187D4u;
            // 0x1187d8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187d4) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x1187DCu;
    // 0x1187dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1187dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1187e0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1187e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1187e4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1187E4u;
    {
        const bool branch_taken_0x1187e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1187e4) {
            ctx->pc = 0x1187E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1187E4u;
            // 0x1187e8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1187F8u;
            goto label_1187f8;
        }
    }
    ctx->pc = 0x1187ECu;
label_1187ec:
    // 0x1187ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1187ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1187f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1187F0u;
    {
        const bool branch_taken_0x1187f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187F0u;
            // 0x1187f4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187f0) {
            ctx->pc = 0x118894u;
            goto label_118894;
        }
    }
    ctx->pc = 0x1187F8u;
label_1187f8:
    // 0x1187f8: 0x24519d48  addiu       $s1, $v0, -0x62B8
    ctx->pc = 0x1187f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x1187fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1187fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x118800: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118800u;
    {
        const bool branch_taken_0x118800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x118800) {
            ctx->pc = 0x118804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118800u;
            // 0x118804: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118814u;
            goto label_118814;
        }
    }
    ctx->pc = 0x118808u;
    // 0x118808: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11880c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11880Cu;
    {
        const bool branch_taken_0x11880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11880Cu;
            // 0x118810: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11880c) {
            ctx->pc = 0x118894u;
            goto label_118894;
        }
    }
    ctx->pc = 0x118814u;
label_118814:
    // 0x118814: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x118814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x118818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118818u;
    {
        const bool branch_taken_0x118818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118818) {
            ctx->pc = 0x11883Cu;
            goto label_11883c;
        }
    }
    ctx->pc = 0x118820u;
    // 0x118820: 0xc045f46  jal         func_117D18
    ctx->pc = 0x118820u;
    SET_GPR_U32(ctx, 31, 0x118828u);
    ctx->pc = 0x118824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118820u;
            // 0x118824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D18u;
    if (runtime->hasFunction(0x117D18u)) {
        auto targetFn = runtime->lookupFunction(0x117D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118828u; }
        if (ctx->pc != 0x118828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117D18_0x117d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118828u; }
        if (ctx->pc != 0x118828u) { return; }
    }
    ctx->pc = 0x118828u;
label_118828:
    // 0x118828: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11882c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x11882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x118830: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x118830u;
    {
        const bool branch_taken_0x118830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x118830) {
            ctx->pc = 0x118834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118830u;
            // 0x118834: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118838u;
            goto label_118838;
        }
    }
    ctx->pc = 0x118838u;
label_118838:
    // 0x118838: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x118838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11883c:
    // 0x11883c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11883Cu;
    {
        const bool branch_taken_0x11883c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x118840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11883Cu;
            // 0x118840: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11883c) {
            ctx->pc = 0x118858u;
            goto label_118858;
        }
    }
    ctx->pc = 0x118844u;
    // 0x118844: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118848: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x118848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x11884c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118850: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x118850u;
    {
        const bool branch_taken_0x118850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118850u;
            // 0x118854: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118850) {
            ctx->pc = 0x118880u;
            goto label_118880;
        }
    }
    ctx->pc = 0x118858u;
label_118858:
    // 0x118858: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x118858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x11885c: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x11885cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x118860: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x118860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x118864: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x118864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x118868: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x118868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11886c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x118870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118870u;
    {
        const bool branch_taken_0x118870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118870u;
            // 0x118874: 0xae140030  sw          $s4, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118870) {
            ctx->pc = 0x118880u;
            goto label_118880;
        }
    }
    ctx->pc = 0x118878u;
    // 0x118878: 0xc045f24  jal         func_117C90
    ctx->pc = 0x118878u;
    SET_GPR_U32(ctx, 31, 0x118880u);
    ctx->pc = 0x11887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118878u;
            // 0x11887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117C90u;
    if (runtime->hasFunction(0x117C90u)) {
        auto targetFn = runtime->lookupFunction(0x117C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118880u; }
        if (ctx->pc != 0x118880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117C90_0x117c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118880u; }
        if (ctx->pc != 0x118880u) { return; }
    }
    ctx->pc = 0x118880u;
label_118880:
    // 0x118880: 0xc046002  jal         func_118008
    ctx->pc = 0x118880u;
    SET_GPR_U32(ctx, 31, 0x118888u);
    ctx->pc = 0x118008u;
    if (runtime->hasFunction(0x118008u)) {
        auto targetFn = runtime->lookupFunction(0x118008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118888u; }
        if (ctx->pc != 0x118888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118008_0x118008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118888u; }
        if (ctx->pc != 0x118888u) { return; }
    }
    ctx->pc = 0x118888u;
label_118888:
    // 0x118888: 0xc045ec0  jal         func_117B00
    ctx->pc = 0x118888u;
    SET_GPR_U32(ctx, 31, 0x118890u);
    ctx->pc = 0x11888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118888u;
            // 0x11888c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (runtime->hasFunction(0x117B00u)) {
        auto targetFn = runtime->lookupFunction(0x117B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118890u; }
        if (ctx->pc != 0x118890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117B00_0x117b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118890u; }
        if (ctx->pc != 0x118890u) { return; }
    }
    ctx->pc = 0x118890u;
label_118890:
    // 0x118890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118894:
    // 0x118894: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118898: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11889c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11889cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1188a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1188a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1188a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1188a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1188a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1188a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1188ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1188ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1188B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1188ACu;
            // 0x1188b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1188B4u;
    // 0x1188b4: 0x0  nop
    ctx->pc = 0x1188b4u;
    // NOP
    ctx->pc = 0x1188b8u;
}
