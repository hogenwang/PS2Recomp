#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002317F8
// Address: 0x2317f8 - 0x231970
void sub_002317F8_0x2317f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002317F8_0x2317f8");
#endif

    switch (ctx->pc) {
        case 0x23185cu: goto label_23185c;
        case 0x231870u: goto label_231870;
        case 0x231890u: goto label_231890;
        case 0x23189cu: goto label_23189c;
        case 0x2318acu: goto label_2318ac;
        case 0x2318b4u: goto label_2318b4;
        case 0x2318c0u: goto label_2318c0;
        case 0x231908u: goto label_231908;
        case 0x231920u: goto label_231920;
        default: break;
    }

    ctx->pc = 0x2317f8u;

    // 0x2317f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2317fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x231800: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231804: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x231804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x231808: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x231808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23180c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23180cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231810: 0x26530003  addiu       $s3, $s2, 0x3
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x231814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231818: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x231818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x23181c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x231820: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x231820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x231824: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x231828: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x231828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x23182c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231830: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x231830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x231834: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x231834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231838: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23183c: 0x2e020801  sltiu       $v0, $s0, 0x801
    ctx->pc = 0x23183cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
    // 0x231840: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231840u;
    {
        const bool branch_taken_0x231840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231840u;
            // 0x231844: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231840) {
            ctx->pc = 0x231864u;
            goto label_231864;
        }
    }
    ctx->pc = 0x231848u;
    // 0x231848: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x23184c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23184cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231850: 0x24a546f0  addiu       $a1, $a1, 0x46F0
    ctx->pc = 0x231850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18160));
    // 0x231854: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x231854u;
    SET_GPR_U32(ctx, 31, 0x23185Cu);
    ctx->pc = 0x231858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231854u;
            // 0x231858: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23185Cu; }
        if (ctx->pc != 0x23185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23185Cu; }
        if (ctx->pc != 0x23185Cu) { return; }
    }
    ctx->pc = 0x23185Cu;
label_23185c:
    // 0x23185c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x23185Cu;
    {
        const bool branch_taken_0x23185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23185Cu;
            // 0x231860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23185c) {
            ctx->pc = 0x231948u;
            goto label_231948;
        }
    }
    ctx->pc = 0x231864u;
label_231864:
    // 0x231864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231868: 0xc08a922  jal         func_22A488
    ctx->pc = 0x231868u;
    SET_GPR_U32(ctx, 31, 0x231870u);
    ctx->pc = 0x23186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231868u;
            // 0x23186c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231870u; }
        if (ctx->pc != 0x231870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231870u; }
        if (ctx->pc != 0x231870u) { return; }
    }
    ctx->pc = 0x231870u;
label_231870:
    // 0x231870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x231870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231874: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x231874u;
    {
        const bool branch_taken_0x231874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x231878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231874u;
            // 0x231878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231874) {
            ctx->pc = 0x231948u;
            goto label_231948;
        }
    }
    ctx->pc = 0x23187Cu;
    // 0x23187c: 0x2e0200ed  sltiu       $v0, $s0, 0xED
    ctx->pc = 0x23187cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x231880: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x231880u;
    {
        const bool branch_taken_0x231880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231880) {
            ctx->pc = 0x231884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x231880u;
            // 0x231884: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231910u;
            goto label_231910;
        }
    }
    ctx->pc = 0x231888u;
    // 0x231888: 0xc08c682  jal         func_231A08
    ctx->pc = 0x231888u;
    SET_GPR_U32(ctx, 31, 0x231890u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231890u; }
        if (ctx->pc != 0x231890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231890u; }
        if (ctx->pc != 0x231890u) { return; }
    }
    ctx->pc = 0x231890u;
label_231890:
    // 0x231890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231894: 0xc098552  jal         func_261548
    ctx->pc = 0x231894u;
    SET_GPR_U32(ctx, 31, 0x23189Cu);
    ctx->pc = 0x231898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231894u;
            // 0x231898: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23189Cu; }
        if (ctx->pc != 0x23189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23189Cu; }
        if (ctx->pc != 0x23189Cu) { return; }
    }
    ctx->pc = 0x23189Cu;
label_23189c:
    // 0x23189c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23189Cu;
    {
        const bool branch_taken_0x23189c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2318A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23189Cu;
            // 0x2318a0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23189c) {
            ctx->pc = 0x2318B8u;
            goto label_2318b8;
        }
    }
    ctx->pc = 0x2318A4u;
    // 0x2318a4: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x2318A4u;
    SET_GPR_U32(ctx, 31, 0x2318ACu);
    ctx->pc = 0x2318A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318A4u;
            // 0x2318a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318ACu; }
        if (ctx->pc != 0x2318ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318ACu; }
        if (ctx->pc != 0x2318ACu) { return; }
    }
    ctx->pc = 0x2318ACu;
label_2318ac:
    // 0x2318ac: 0xc098552  jal         func_261548
    ctx->pc = 0x2318ACu;
    SET_GPR_U32(ctx, 31, 0x2318B4u);
    ctx->pc = 0x2318B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318ACu;
            // 0x2318b0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318B4u; }
        if (ctx->pc != 0x2318B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318B4u; }
        if (ctx->pc != 0x2318B4u) { return; }
    }
    ctx->pc = 0x2318B4u;
label_2318b4:
    // 0x2318b4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2318b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2318b8:
    // 0x2318b8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2318B8u;
    SET_GPR_U32(ctx, 31, 0x2318C0u);
    ctx->pc = 0x2318BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2318B8u;
            // 0x2318bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318C0u; }
        if (ctx->pc != 0x2318C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2318C0u; }
        if (ctx->pc != 0x2318C0u) { return; }
    }
    ctx->pc = 0x2318C0u;
label_2318c0:
    // 0x2318c0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2318c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2318c4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2318C4u;
    {
        const bool branch_taken_0x2318c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2318C4u;
            // 0x2318c8: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c4) {
            ctx->pc = 0x2318F0u;
            goto label_2318f0;
        }
    }
    ctx->pc = 0x2318CCu;
    // 0x2318cc: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2318ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2318d0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2318d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2318d4: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2318d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2318d8: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2318d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2318dc: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2318dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2318e0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2318e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2318e4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2318e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x2318e8: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2318e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x2318ec: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2318ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2318f0:
    // 0x2318f0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2318f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2318f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2318f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2318f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2318F8u;
    {
        const bool branch_taken_0x2318f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2318f8) {
            ctx->pc = 0x2318FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2318F8u;
            // 0x2318fc: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x231910u;
            goto label_231910;
        }
    }
    ctx->pc = 0x231900u;
    // 0x231900: 0xc08a996  jal         func_22A658
    ctx->pc = 0x231900u;
    SET_GPR_U32(ctx, 31, 0x231908u);
    ctx->pc = 0x231904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231900u;
            // 0x231904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231908u; }
        if (ctx->pc != 0x231908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231908u; }
        if (ctx->pc != 0x231908u) { return; }
    }
    ctx->pc = 0x231908u;
label_231908:
    // 0x231908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x231908u;
    {
        const bool branch_taken_0x231908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231908u;
            // 0x23190c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231908) {
            ctx->pc = 0x231948u;
            goto label_231948;
        }
    }
    ctx->pc = 0x231910u;
label_231910:
    // 0x231910: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x231910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x231914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231918: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x231918u;
    SET_GPR_U32(ctx, 31, 0x231920u);
    ctx->pc = 0x23191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231918u;
            // 0x23191c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231920u; }
        if (ctx->pc != 0x231920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231920u; }
        if (ctx->pc != 0x231920u) { return; }
    }
    ctx->pc = 0x231920u;
label_231920:
    // 0x231920: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x231920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x231924: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x231928: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x231928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x23192c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231930: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x231930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x231934: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x231934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x231938: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x231938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x23193c: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x23193cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x231940: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x231940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x231944: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x231944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
label_231948:
    // 0x231948: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x231948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23194c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x23194cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231950: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x231950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231954: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x231954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231958: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x231958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23195c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23195cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231960: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231968: 0x3e00008  jr          $ra
    ctx->pc = 0x231968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231968u;
            // 0x23196c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231970u;
    ctx->pc = 0x231970u;
}
