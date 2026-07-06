#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002857E8
// Address: 0x2857e8 - 0x2858c0
void sub_002857E8_0x2857e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002857E8_0x2857e8");
#endif

    switch (ctx->pc) {
        case 0x285830u: goto label_285830;
        case 0x285848u: goto label_285848;
        case 0x285864u: goto label_285864;
        case 0x2858a0u: goto label_2858a0;
        default: break;
    }

    ctx->pc = 0x2857e8u;

    // 0x2857e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2857ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2857ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2857f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2857f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2857f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2857f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2857f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2857f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2857fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2857fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x285800: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x285800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285804: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x285808: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28580c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x28580Cu;
    {
        const bool branch_taken_0x28580c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28580Cu;
            // 0x285810: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28580c) {
            ctx->pc = 0x28587Cu;
            goto label_28587c;
        }
    }
    ctx->pc = 0x285814u;
    // 0x285814: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x285814u;
    {
        const bool branch_taken_0x285814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285814u;
            // 0x285818: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285814) {
            ctx->pc = 0x285824u;
            goto label_285824;
        }
    }
    ctx->pc = 0x28581Cu;
    // 0x28581c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x28581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285824:
    // 0x285824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285828: 0xc0a1c04  jal         func_287010
    ctx->pc = 0x285828u;
    SET_GPR_U32(ctx, 31, 0x285830u);
    ctx->pc = 0x28582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285828u;
            // 0x28582c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287010u;
    if (runtime->hasFunction(0x287010u)) {
        auto targetFn = runtime->lookupFunction(0x287010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285830u; }
        if (ctx->pc != 0x285830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287010_0x287010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285830u; }
        if (ctx->pc != 0x285830u) { return; }
    }
    ctx->pc = 0x285830u;
label_285830:
    // 0x285830: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x285830u;
    {
        const bool branch_taken_0x285830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x285834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285830u;
            // 0x285834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285830) {
            ctx->pc = 0x285858u;
            goto label_285858;
        }
    }
    ctx->pc = 0x285838u;
    // 0x285838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x285838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28583c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285840: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x285840u;
    SET_GPR_U32(ctx, 31, 0x285848u);
    ctx->pc = 0x285844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285840u;
            // 0x285844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (runtime->hasFunction(0x285A30u)) {
        auto targetFn = runtime->lookupFunction(0x285A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285848u; }
        if (ctx->pc != 0x285848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285A30_0x285a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285848u; }
        if (ctx->pc != 0x285848u) { return; }
    }
    ctx->pc = 0x285848u;
label_285848:
    // 0x285848: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285848u;
    {
        const bool branch_taken_0x285848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285848u;
            // 0x28584c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285848) {
            ctx->pc = 0x28586Cu;
            goto label_28586c;
        }
    }
    ctx->pc = 0x285850u;
    // 0x285850: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x285850u;
    {
        const bool branch_taken_0x285850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285850u;
            // 0x285854: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285850) {
            ctx->pc = 0x2858A4u;
            goto label_2858a4;
        }
    }
    ctx->pc = 0x285858u;
label_285858:
    // 0x285858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x285858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28585c: 0xc0a168c  jal         func_285A30
    ctx->pc = 0x28585Cu;
    SET_GPR_U32(ctx, 31, 0x285864u);
    ctx->pc = 0x285860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28585Cu;
            // 0x285860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285A30u;
    if (runtime->hasFunction(0x285A30u)) {
        auto targetFn = runtime->lookupFunction(0x285A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285864u; }
        if (ctx->pc != 0x285864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285A30_0x285a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285864u; }
        if (ctx->pc != 0x285864u) { return; }
    }
    ctx->pc = 0x285864u;
label_285864:
    // 0x285864: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x285864u;
    {
        const bool branch_taken_0x285864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285864) {
            ctx->pc = 0x285868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285864u;
            // 0x285868: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285874u;
            goto label_285874;
        }
    }
    ctx->pc = 0x28586Cu;
label_28586c:
    // 0x28586c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28586Cu;
    {
        const bool branch_taken_0x28586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28586Cu;
            // 0x285870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28586c) {
            ctx->pc = 0x2858A4u;
            goto label_2858a4;
        }
    }
    ctx->pc = 0x285874u;
label_285874:
    // 0x285874: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x285874u;
    {
        const bool branch_taken_0x285874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285874u;
            // 0x285878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285874) {
            ctx->pc = 0x2858A4u;
            goto label_2858a4;
        }
    }
    ctx->pc = 0x28587Cu;
label_28587c:
    // 0x28587c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28587Cu;
    {
        const bool branch_taken_0x28587c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28587Cu;
            // 0x285880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28587c) {
            ctx->pc = 0x28588Cu;
            goto label_28588c;
        }
    }
    ctx->pc = 0x285884u;
    // 0x285884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285884u;
            // 0x285888: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285884) {
            ctx->pc = 0x285890u;
            goto label_285890;
        }
    }
    ctx->pc = 0x28588Cu;
label_28588c:
    // 0x28588c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x28588cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_285890:
    // 0x285890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x285894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285898: 0xc0a1630  jal         func_2858C0
    ctx->pc = 0x285898u;
    SET_GPR_U32(ctx, 31, 0x2858A0u);
    ctx->pc = 0x28589Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285898u;
            // 0x28589c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2858C0u;
    if (runtime->hasFunction(0x2858C0u)) {
        auto targetFn = runtime->lookupFunction(0x2858C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858A0u; }
        if (ctx->pc != 0x2858A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002858C0_0x2858c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858A0u; }
        if (ctx->pc != 0x2858A0u) { return; }
    }
    ctx->pc = 0x2858A0u;
label_2858a0:
    // 0x2858a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2858a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2858a4:
    // 0x2858a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2858a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2858a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2858a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2858ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2858acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2858b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2858b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2858B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2858B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858B4u;
            // 0x2858b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2858BCu;
    // 0x2858bc: 0x0  nop
    ctx->pc = 0x2858bcu;
    // NOP
    ctx->pc = 0x2858c0u;
}
