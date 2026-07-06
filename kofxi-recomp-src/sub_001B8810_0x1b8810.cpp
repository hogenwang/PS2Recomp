#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8810
// Address: 0x1b8810 - 0x1b8b70
void sub_001B8810_0x1b8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8810_0x1b8810");
#endif

    switch (ctx->pc) {
        case 0x1b8860u: goto label_1b8860;
        case 0x1b88b0u: goto label_1b88b0;
        case 0x1b88e4u: goto label_1b88e4;
        case 0x1b8960u: goto label_1b8960;
        case 0x1b8974u: goto label_1b8974;
        case 0x1b8990u: goto label_1b8990;
        case 0x1b89b8u: goto label_1b89b8;
        case 0x1b89e4u: goto label_1b89e4;
        case 0x1b89f8u: goto label_1b89f8;
        case 0x1b8a08u: goto label_1b8a08;
        case 0x1b8a18u: goto label_1b8a18;
        case 0x1b8a2cu: goto label_1b8a2c;
        case 0x1b8a34u: goto label_1b8a34;
        case 0x1b8a98u: goto label_1b8a98;
        case 0x1b8af4u: goto label_1b8af4;
        case 0x1b8b00u: goto label_1b8b00;
        case 0x1b8b08u: goto label_1b8b08;
        case 0x1b8b28u: goto label_1b8b28;
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b50u: goto label_1b8b50;
        case 0x1b8b58u: goto label_1b8b58;
        default: break;
    }

    ctx->pc = 0x1b8810u;

    // 0x1b8810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8814: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x1b8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x1b8818: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1b8818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b881c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8820: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b8824: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b8828: 0x2051023  subu        $v0, $s0, $a1
    ctx->pc = 0x1b8828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b882c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b882cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8830: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8834: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x1b8834u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b8838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b883c: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B883Cu;
    {
        const bool branch_taken_0x1b883c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B8840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B883Cu;
            // 0x1b8840: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b883c) {
            ctx->pc = 0x1B8854u;
            goto label_1b8854;
        }
    }
    ctx->pc = 0x1B8844u;
    // 0x1b8844: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8844u;
    {
        const bool branch_taken_0x1b8844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8844) {
            ctx->pc = 0x1B8848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8844u;
            // 0x1b8848: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8858u;
            goto label_1b8858;
        }
    }
    ctx->pc = 0x1B884Cu;
    // 0x1b884c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B884Cu;
    {
        const bool branch_taken_0x1b884c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B8850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B884Cu;
            // 0x1b8850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b884c) {
            ctx->pc = 0x1B8860u;
            goto label_1b8860;
        }
    }
    ctx->pc = 0x1B8854u;
label_1b8854:
    // 0x1b8854: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b8854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1b8858:
    // 0x1b8858: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B8858u;
    {
        const bool branch_taken_0x1b8858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8858u;
            // 0x1b885c: 0x24848028  addiu       $a0, $a0, -0x7FD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8858) {
            ctx->pc = 0x1B88A8u;
            goto label_1b88a8;
        }
    }
    ctx->pc = 0x1B8860u;
label_1b8860:
    // 0x1b8860: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1b8860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b8864: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B8864u;
    {
        const bool branch_taken_0x1b8864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8864u;
            // 0x1b8868: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8864) {
            ctx->pc = 0x1B8898u;
            goto label_1b8898;
        }
    }
    ctx->pc = 0x1B886Cu;
    // 0x1b886c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1b886cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b8870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b8874: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b8874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b8878: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b887c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b887cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b8880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b8884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b8884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8888: 0x80632368  lb          $v1, 0x2368($v1)
    ctx->pc = 0x1b8888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 9064)));
    // 0x1b888c: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B888Cu;
    {
        const bool branch_taken_0x1b888c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b888c) {
            ctx->pc = 0x1B8890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B888Cu;
            // 0x1b8890: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8860;
        }
    }
    ctx->pc = 0x1B8894u;
    // 0x1b8894: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b8898:
    // 0x1b8898: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8898u;
            // 0x1b889c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B88B8u;
            goto label_1b88b8;
        }
    }
    ctx->pc = 0x1B88A0u;
    // 0x1b88a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b88a4: 0x24848050  addiu       $a0, $a0, -0x7FB0
    ctx->pc = 0x1b88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934608));
label_1b88a8:
    // 0x1b88a8: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B88A8u;
    SET_GPR_U32(ctx, 31, 0x1B88B0u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88B0u; }
        if (ctx->pc != 0x1B88B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88B0u; }
        if (ctx->pc != 0x1B88B0u) { return; }
    }
    ctx->pc = 0x1B88B0u;
label_1b88b0:
    // 0x1b88b0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1B88B0u;
    {
        const bool branch_taken_0x1b88b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88B0u;
            // 0x1b88b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88b0) {
            ctx->pc = 0x1B8B0Cu;
            goto label_1b8b0c;
        }
    }
    ctx->pc = 0x1B88B8u;
label_1b88b8:
    // 0x1b88b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b88b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b88bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b88c0: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1b88c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b88c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b88c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b88cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b88d0: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1b88d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1b88d4: 0x26312368  addiu       $s1, $s1, 0x2368
    ctx->pc = 0x1b88d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9064));
    // 0x1b88d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1b88d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b88dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B88DCu;
    SET_GPR_U32(ctx, 31, 0x1B88E4u);
    ctx->pc = 0x1B88E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B88DCu;
            // 0x1b88e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88E4u; }
        if (ctx->pc != 0x1B88E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B88E4u; }
        if (ctx->pc != 0x1B88E4u) { return; }
    }
    ctx->pc = 0x1B88E4u;
label_1b88e4:
    // 0x1b88e4: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x1b88e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1b88e8: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1b88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1b88ec: 0x240a0024  addiu       $t2, $zero, 0x24
    ctx->pc = 0x1b88ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1b88f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1b88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b88f4: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x1b88f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1b88f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b88fc: 0x24092060  addiu       $t1, $zero, 0x2060
    ctx->pc = 0x1b88fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    // 0x1b8900: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1b8900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b8904: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1b8904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1b8908: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1b8908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b890c: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x1b890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x1b8910: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x1b8910u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b8914: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b8918: 0x24a3fedc  addiu       $v1, $a1, -0x124
    ctx->pc = 0x1b8918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967004));
    // 0x1b891c: 0x24a506db  addiu       $a1, $a1, 0x6DB
    ctx->pc = 0x1b891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1755));
    // 0x1b8920: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x1b8920u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b8924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8928: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x1b8928u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1b892c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1b892cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1b8930: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1b8930u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1b8934: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x1b8934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x1b8938: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1b8938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1b893c: 0xae290034  sw          $t1, 0x34($s1)
    ctx->pc = 0x1b893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 9));
    // 0x1b8940: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1b8944: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b8944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8948: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1b8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b894c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1b894cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1b8950: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x1b8950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x1b8954: 0xae2a0028  sw          $t2, 0x28($s1)
    ctx->pc = 0x1b8954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 10));
    // 0x1b8958: 0xc072cec  jal         func_1CB3B0
    ctx->pc = 0x1B8958u;
    SET_GPR_U32(ctx, 31, 0x1B8960u);
    ctx->pc = 0x1B895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8958u;
            // 0x1b895c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (runtime->hasFunction(0x1CB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB3B0_0x1cb3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8960u; }
        if (ctx->pc != 0x1B8960u) { return; }
    }
    ctx->pc = 0x1B8960u;
label_1b8960:
    // 0x1b8960: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B8960u;
    {
        const bool branch_taken_0x1b8960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8960u;
            // 0x1b8964: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8960) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B8968u;
    // 0x1b8968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b896c: 0xc06da30  jal         func_1B68C0
    ctx->pc = 0x1B896Cu;
    SET_GPR_U32(ctx, 31, 0x1B8974u);
    ctx->pc = 0x1B8970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B896Cu;
            // 0x1b8970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B68C0u;
    if (runtime->hasFunction(0x1B68C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B68C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8974u; }
        if (ctx->pc != 0x1B8974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B68C0_0x1b68c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8974u; }
        if (ctx->pc != 0x1B8974u) { return; }
    }
    ctx->pc = 0x1B8974u;
label_1b8974:
    // 0x1b8974: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B8974u;
    {
        const bool branch_taken_0x1b8974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8974u;
            // 0x1b8978: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8974) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B897Cu;
    // 0x1b897c: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B897Cu;
    {
        const bool branch_taken_0x1b897c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B8980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B897Cu;
            // 0x1b8980: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b897c) {
            ctx->pc = 0x1B89D0u;
            goto label_1b89d0;
        }
    }
    ctx->pc = 0x1B8984u;
    // 0x1b8984: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x1b8984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1b8988: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x1b8988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b898c: 0x0  nop
    ctx->pc = 0x1b898cu;
    // NOP
label_1b8990:
    // 0x1b8990: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1b8990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b8994: 0xd02018  mult        $a0, $a2, $s0
    ctx->pc = 0x1b8994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b8998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b899c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b89a0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1b89a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b89a4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1b89a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1b89a8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b89a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b89ac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1b89acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b89b0: 0xc072cec  jal         func_1CB3B0
    ctx->pc = 0x1B89B0u;
    SET_GPR_U32(ctx, 31, 0x1B89B8u);
    ctx->pc = 0x1B89B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89B0u;
            // 0x1b89b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (runtime->hasFunction(0x1CB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89B8u; }
        if (ctx->pc != 0x1B89B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB3B0_0x1cb3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89B8u; }
        if (ctx->pc != 0x1B89B8u) { return; }
    }
    ctx->pc = 0x1B89B8u;
label_1b89b8:
    // 0x1b89b8: 0x213182a  slt         $v1, $s0, $s3
    ctx->pc = 0x1b89b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b89bc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b89bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b89c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B89C0u;
    {
        const bool branch_taken_0x1b89c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89C0u;
            // 0x1b89c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89c0) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B89C8u;
    // 0x1b89c8: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B89C8u;
    {
        const bool branch_taken_0x1b89c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b89c8) {
            ctx->pc = 0x1B89CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89C8u;
            // 0x1b89cc: 0x8e260034  lw          $a2, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B8990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8990;
        }
    }
    ctx->pc = 0x1B89D0u;
label_1b89d0:
    // 0x1b89d0: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x1b89d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1b89d4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1b89d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b89d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b89d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89dc: 0xc06d3d2  jal         func_1B4F48
    ctx->pc = 0x1B89DCu;
    SET_GPR_U32(ctx, 31, 0x1B89E4u);
    ctx->pc = 0x1B89E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89DCu;
            // 0x1b89e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F48u;
    if (runtime->hasFunction(0x1B4F48u)) {
        auto targetFn = runtime->lookupFunction(0x1B4F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E4u; }
        if (ctx->pc != 0x1B89E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4F48_0x1b4f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89E4u; }
        if (ctx->pc != 0x1B89E4u) { return; }
    }
    ctx->pc = 0x1B89E4u;
label_1b89e4:
    // 0x1b89e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B89E4u;
    {
        const bool branch_taken_0x1b89e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89E4u;
            // 0x1b89e8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89e4) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B89ECu;
    // 0x1b89ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89f0: 0xc06d2c6  jal         func_1B4B18
    ctx->pc = 0x1B89F0u;
    SET_GPR_U32(ctx, 31, 0x1B89F8u);
    ctx->pc = 0x1B89F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89F0u;
            // 0x1b89f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B18u;
    if (runtime->hasFunction(0x1B4B18u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89F8u; }
        if (ctx->pc != 0x1B89F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B18_0x1b4b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B89F8u; }
        if (ctx->pc != 0x1B89F8u) { return; }
    }
    ctx->pc = 0x1B89F8u;
label_1b89f8:
    // 0x1b89f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B89F8u;
    {
        const bool branch_taken_0x1b89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B89F8u;
            // 0x1b89fc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89f8) {
            ctx->pc = 0x1B8A10u;
            goto label_1b8a10;
        }
    }
    ctx->pc = 0x1B8A00u;
    // 0x1b8a00: 0xc07174a  jal         func_1C5D28
    ctx->pc = 0x1B8A00u;
    SET_GPR_U32(ctx, 31, 0x1B8A08u);
    ctx->pc = 0x1B8A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A00u;
            // 0x1b8a04: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D28u;
    if (runtime->hasFunction(0x1C5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1C5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A08u; }
        if (ctx->pc != 0x1B8A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5D28_0x1c5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A08u; }
        if (ctx->pc != 0x1B8A08u) { return; }
    }
    ctx->pc = 0x1B8A08u;
label_1b8a08:
    // 0x1b8a08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8A08u;
    {
        const bool branch_taken_0x1b8a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A08u;
            // 0x1b8a0c: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a08) {
            ctx->pc = 0x1B8A20u;
            goto label_1b8a20;
        }
    }
    ctx->pc = 0x1B8A10u;
label_1b8a10:
    // 0x1b8a10: 0xc06e31c  jal         func_1B8C70
    ctx->pc = 0x1B8A10u;
    SET_GPR_U32(ctx, 31, 0x1B8A18u);
    ctx->pc = 0x1B8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A10u;
            // 0x1b8a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C70u;
    if (runtime->hasFunction(0x1B8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8C70_0x1b8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A18u; }
        if (ctx->pc != 0x1B8A18u) { return; }
    }
    ctx->pc = 0x1B8A18u;
label_1b8a18:
    // 0x1b8a18: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B8A18u;
    {
        const bool branch_taken_0x1b8a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A18u;
            // 0x1b8a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a18) {
            ctx->pc = 0x1B8B0Cu;
            goto label_1b8b0c;
        }
    }
    ctx->pc = 0x1B8A20u;
label_1b8a20:
    // 0x1b8a20: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1b8a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b8a24: 0xc0717ba  jal         func_1C5EE8
    ctx->pc = 0x1B8A24u;
    SET_GPR_U32(ctx, 31, 0x1B8A2Cu);
    ctx->pc = 0x1B8A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A24u;
            // 0x1b8a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5EE8u;
    if (runtime->hasFunction(0x1C5EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1C5EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A2Cu; }
        if (ctx->pc != 0x1B8A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5EE8_0x1c5ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A2Cu; }
        if (ctx->pc != 0x1B8A2Cu) { return; }
    }
    ctx->pc = 0x1B8A2Cu;
label_1b8a2c:
    // 0x1b8a2c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B8A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8A34u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A34u; }
        if (ctx->pc != 0x1B8A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8A34u; }
        if (ctx->pc != 0x1B8A34u) { return; }
    }
    ctx->pc = 0x1B8A34u;
label_1b8a34:
    // 0x1b8a34: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1b8a38: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1b8a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1b8a3c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1b8a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1b8a40: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1b8a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1b8a44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b8a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8a48: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b8a48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b8a4c: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1b8a50: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b8a50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b8a54: 0x8cc5c36c  lw          $a1, -0x3C94($a2)
    ctx->pc = 0x1b8a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951788)));
    // 0x1b8a58: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1b8a58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1b8a5c: 0xa6200040  sh          $zero, 0x40($s1)
    ctx->pc = 0x1b8a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8a60: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1b8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b8a64: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x1b8a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b8a68: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1b8a68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1b8a6c: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1b8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1b8a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8a74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b8a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b8a78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b8a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b8a7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b8a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b8a80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b8a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b8a84: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8A84u;
    {
        const bool branch_taken_0x1b8a84 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1B8A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A84u;
            // 0x1b8a88: 0xa622003e  sh          $v0, 0x3E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a84) {
            ctx->pc = 0x1B8AB4u;
            goto label_1b8ab4;
        }
    }
    ctx->pc = 0x1B8A8Cu;
    // 0x1b8a8c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1b8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a90: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x1b8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1b8a94: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x1b8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
label_1b8a98:
    // 0x1b8a98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b8a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b8a9c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1b8a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b8aa0: 0x0  nop
    ctx->pc = 0x1b8aa0u;
    // NOP
    // 0x1b8aa4: 0x0  nop
    ctx->pc = 0x1b8aa4u;
    // NOP
    // 0x1b8aa8: 0x0  nop
    ctx->pc = 0x1b8aa8u;
    // NOP
    // 0x1b8aac: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B8AACu;
    {
        const bool branch_taken_0x1b8aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AACu;
            // 0x1b8ab0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8aac) {
            ctx->pc = 0x1B8A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8a98;
        }
    }
    ctx->pc = 0x1B8AB4u;
label_1b8ab4:
    // 0x1b8ab4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b8ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ac0: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x1b8ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8ac4: 0xa230006c  sb          $s0, 0x6C($s1)
    ctx->pc = 0x1b8ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b8ac8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1b8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1b8acc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1b8accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1b8ad0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1b8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1b8ad4: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x1b8ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8ad8: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x1b8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x1b8adc: 0xa6200068  sh          $zero, 0x68($s1)
    ctx->pc = 0x1b8adcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8ae0: 0xa620006a  sh          $zero, 0x6A($s1)
    ctx->pc = 0x1b8ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8ae4: 0xa230006d  sb          $s0, 0x6D($s1)
    ctx->pc = 0x1b8ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b8ae8: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x1b8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8aec: 0xc06ed96  jal         func_1BB658
    ctx->pc = 0x1B8AECu;
    SET_GPR_U32(ctx, 31, 0x1B8AF4u);
    ctx->pc = 0x1B8AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AECu;
            // 0x1b8af0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB658u;
    if (runtime->hasFunction(0x1BB658u)) {
        auto targetFn = runtime->lookupFunction(0x1BB658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF4u; }
        if (ctx->pc != 0x1B8AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB658_0x1bb658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AF4u; }
        if (ctx->pc != 0x1B8AF4u) { return; }
    }
    ctx->pc = 0x1B8AF4u;
label_1b8af4:
    // 0x1b8af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8af8: 0xc06e8ea  jal         func_1BA3A8
    ctx->pc = 0x1B8AF8u;
    SET_GPR_U32(ctx, 31, 0x1B8B00u);
    ctx->pc = 0x1B8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AF8u;
            // 0x1b8afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA3A8u;
    if (runtime->hasFunction(0x1BA3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BA3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B00u; }
        if (ctx->pc != 0x1B8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA3A8_0x1ba3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B00u; }
        if (ctx->pc != 0x1B8B00u) { return; }
    }
    ctx->pc = 0x1B8B00u;
label_1b8b00:
    // 0x1b8b00: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B8B00u;
    SET_GPR_U32(ctx, 31, 0x1B8B08u);
    ctx->pc = 0x1B8B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B00u;
            // 0x1b8b04: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B08u; }
        if (ctx->pc != 0x1B8B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B08u; }
        if (ctx->pc != 0x1B8B08u) { return; }
    }
    ctx->pc = 0x1B8B08u;
label_1b8b08:
    // 0x1b8b08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b8b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8b0c:
    // 0x1b8b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8b14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B20u;
            // 0x1b8b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8B28u;
label_1b8b28:
    // 0x1b8b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8b3c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B44u);
    ctx->pc = 0x1B8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B3Cu;
            // 0x1b8b40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B44u; }
        if (ctx->pc != 0x1B8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B44u; }
        if (ctx->pc != 0x1B8B44u) { return; }
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b48: 0xc06e2dc  jal         func_1B8B70
    ctx->pc = 0x1B8B48u;
    SET_GPR_U32(ctx, 31, 0x1B8B50u);
    ctx->pc = 0x1B8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B48u;
            // 0x1b8b4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8B70u;
    if (runtime->hasFunction(0x1B8B70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B50u; }
        if (ctx->pc != 0x1B8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8B70_0x1b8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B50u; }
        if (ctx->pc != 0x1B8B50u) { return; }
    }
    ctx->pc = 0x1B8B50u;
label_1b8b50:
    // 0x1b8b50: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1B8B50u;
    SET_GPR_U32(ctx, 31, 0x1B8B58u);
    ctx->pc = 0x1B8B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B50u;
            // 0x1b8b54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B58u; }
        if (ctx->pc != 0x1B8B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B58u; }
        if (ctx->pc != 0x1B8B58u) { return; }
    }
    ctx->pc = 0x1B8B58u;
label_1b8b58:
    // 0x1b8b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B68u;
            // 0x1b8b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8B70u;
    ctx->pc = 0x1b8b70u;
}
