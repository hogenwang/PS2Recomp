#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8898
// Address: 0x1e8898 - 0x1e8ad0
void sub_001E8898_0x1e8898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8898_0x1e8898");
#endif

    switch (ctx->pc) {
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        case 0x1e8928u: goto label_1e8928;
        case 0x1e8978u: goto label_1e8978;
        case 0x1e89b8u: goto label_1e89b8;
        case 0x1e89f4u: goto label_1e89f4;
        case 0x1e8a18u: goto label_1e8a18;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a70u: goto label_1e8a70;
        default: break;
    }

    ctx->pc = 0x1e8898u;

    // 0x1e8898: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e8898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e889c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e88a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e88a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e88a8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1e88a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88ac: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1e88b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e88b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e88b4: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x1e88b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e88b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e88bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e88bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e88c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e88c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1e88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1e88c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e88c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88cc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1e88ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1e88d0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1e88d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e88d8: 0x2869021  addu        $s2, $s4, $a2
    ctx->pc = 0x1e88d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1e88dc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1e88dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1e88e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e88e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E88E4u;
    {
        const bool branch_taken_0x1e88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88E4u;
            // 0x1e88e8: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88e4) {
            ctx->pc = 0x1E8958u;
            goto label_1e8958;
        }
    }
    ctx->pc = 0x1E88ECu;
    // 0x1e88ec: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1e88ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e88f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88f4: 0x0  nop
    ctx->pc = 0x1e88f4u;
    // NOP
label_1e88f8:
    // 0x1e88f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e88f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e88fc:
    // 0x1e88fc: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1e88fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e8900: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E8900u;
    {
        const bool branch_taken_0x1e8900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8900) {
            ctx->pc = 0x1E8940u;
            goto label_1e8940;
        }
    }
    ctx->pc = 0x1E8908u;
    // 0x1e8908: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1e8908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e890c: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E890Cu;
    {
        const bool branch_taken_0x1e890c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e890c) {
            ctx->pc = 0x1E8910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E890Cu;
            // 0x1e8910: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E88FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e88fc;
        }
    }
    ctx->pc = 0x1E8914u;
    // 0x1e8914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8918: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1e8918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e891c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e891cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8920: 0xc06ee4c  jal         func_1BB930
    ctx->pc = 0x1E8920u;
    SET_GPR_U32(ctx, 31, 0x1E8928u);
    ctx->pc = 0x1E8924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8920u;
            // 0x1e8924: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB930u;
    if (runtime->hasFunction(0x1BB930u)) {
        auto targetFn = runtime->lookupFunction(0x1BB930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8928u; }
        if (ctx->pc != 0x1E8928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB930_0x1bb930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8928u; }
        if (ctx->pc != 0x1E8928u) { return; }
    }
    ctx->pc = 0x1E8928u;
label_1e8928:
    // 0x1e8928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8928u;
    {
        const bool branch_taken_0x1e8928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8928u;
            // 0x1e892c: 0x2b0102b  sltu        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8928) {
            ctx->pc = 0x1E8940u;
            goto label_1e8940;
        }
    }
    ctx->pc = 0x1E8930u;
    // 0x1e8930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8930u;
    {
        const bool branch_taken_0x1e8930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8930) {
            ctx->pc = 0x1E8940u;
            goto label_1e8940;
        }
    }
    ctx->pc = 0x1E8938u;
    // 0x1e8938: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1e8938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e893c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1e893cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8940:
    // 0x1e8940: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E8940u;
    {
        const bool branch_taken_0x1e8940 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8940u;
            // 0x1e8944: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8940) {
            ctx->pc = 0x1E8984u;
            goto label_1e8984;
        }
    }
    ctx->pc = 0x1E8948u;
    // 0x1e8948: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1e8948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e894c: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x1e894cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1e8950: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E8950u;
    {
        const bool branch_taken_0x1e8950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8950) {
            ctx->pc = 0x1E8954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8950u;
            // 0x1e8954: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E88F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e88f8;
        }
    }
    ctx->pc = 0x1E8958u;
label_1e8958:
    // 0x1e8958: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8958u;
    {
        const bool branch_taken_0x1e8958 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8958u;
            // 0x1e895c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8958) {
            ctx->pc = 0x1E8984u;
            goto label_1e8984;
        }
    }
    ctx->pc = 0x1E8960u;
    // 0x1e8960: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8960u;
    {
        const bool branch_taken_0x1e8960 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8960) {
            ctx->pc = 0x1E8964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8960u;
            // 0x1e8964: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8980u;
            goto label_1e8980;
        }
    }
    ctx->pc = 0x1E8968u;
    // 0x1e8968: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e8968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e896c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8970: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1E8970u;
    SET_GPR_U32(ctx, 31, 0x1E8978u);
    ctx->pc = 0x1E8974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8970u;
            // 0x1e8974: 0x34a50c0a  ori         $a1, $a1, 0xC0A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3082);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8978u; }
        if (ctx->pc != 0x1E8978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8978u; }
        if (ctx->pc != 0x1E8978u) { return; }
    }
    ctx->pc = 0x1E8978u;
label_1e8978:
    // 0x1e8978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8978u;
    {
        const bool branch_taken_0x1e8978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8978u;
            // 0x1e897c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8978) {
            ctx->pc = 0x1E8984u;
            goto label_1e8984;
        }
    }
    ctx->pc = 0x1E8980u;
label_1e8980:
    // 0x1e8980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e8980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8984:
    // 0x1e8984: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e8984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8988: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e8988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e898c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e898cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8990: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e8990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8994: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e8994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8998: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e8998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e899c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1e899cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e89a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1e89a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e89a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1e89a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e89a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1e89a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e89ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E89ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E89B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89ACu;
            // 0x1e89b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E89B4u;
    // 0x1e89b4: 0x0  nop
    ctx->pc = 0x1e89b4u;
    // NOP
label_1e89b8:
    // 0x1e89b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e89b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e89bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e89bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e89c0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e89c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e89c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e89c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e89c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e89d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e89d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e89d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e89d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e89dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e89e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e89e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e89e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e89e8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e89ec: 0xc07b51c  jal         func_1ED470
    ctx->pc = 0x1E89ECu;
    SET_GPR_U32(ctx, 31, 0x1E89F4u);
    ctx->pc = 0x1E89F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89ECu;
            // 0x1e89f0: 0x8e54205c  lw          $s4, 0x205C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED470u;
    if (runtime->hasFunction(0x1ED470u)) {
        auto targetFn = runtime->lookupFunction(0x1ED470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89F4u; }
        if (ctx->pc != 0x1E89F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED470_0x1ed470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E89F4u; }
        if (ctx->pc != 0x1E89F4u) { return; }
    }
    ctx->pc = 0x1E89F4u;
label_1e89f4:
    // 0x1e89f4: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1e89f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1e89f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E89F8u;
    {
        const bool branch_taken_0x1e89f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E89F8u;
            // 0x1e89fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89f8) {
            ctx->pc = 0x1E8A10u;
            goto label_1e8a10;
        }
    }
    ctx->pc = 0x1E8A00u;
    // 0x1e8a00: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e8a04: 0x244287d8  addiu       $v0, $v0, -0x7828
    ctx->pc = 0x1e8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936536));
    // 0x1e8a08: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1E8A08u;
    {
        const bool branch_taken_0x1e8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A08u;
            // 0x1e8a0c: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a08) {
            ctx->pc = 0x1E8AA8u;
            goto label_1e8aa8;
        }
    }
    ctx->pc = 0x1E8A10u;
label_1e8a10:
    // 0x1e8a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8A10u;
    {
        const bool branch_taken_0x1e8a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A10u;
            // 0x1e8a14: 0x2673ffee  addiu       $s3, $s3, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a10) {
            ctx->pc = 0x1E8A1Cu;
            goto label_1e8a1c;
        }
    }
    ctx->pc = 0x1E8A18u;
label_1e8a18:
    // 0x1e8a18: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1e8a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1e8a1c:
    // 0x1e8a1c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1e8a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1e8a20: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8A20u;
    {
        const bool branch_taken_0x1e8a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a20) {
            ctx->pc = 0x1E8A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A20u;
            // 0x1e8a24: 0xde4209c8  ld          $v0, 0x9C8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8A54u;
            goto label_1e8a54;
        }
    }
    ctx->pc = 0x1E8A28u;
    // 0x1e8a28: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e8a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a30: 0x24a5e630  addiu       $a1, $a1, -0x19D0
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960688));
    // 0x1e8a34: 0xc049c22  jal         func_127088
    ctx->pc = 0x1E8A34u;
    SET_GPR_U32(ctx, 31, 0x1E8A3Cu);
    ctx->pc = 0x1E8A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A34u;
            // 0x1e8a38: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A3Cu; }
        if (ctx->pc != 0x1E8A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A3Cu; }
        if (ctx->pc != 0x1E8A3Cu) { return; }
    }
    ctx->pc = 0x1E8A3Cu;
label_1e8a3c:
    // 0x1e8a3c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8A3Cu;
    {
        const bool branch_taken_0x1e8a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A3Cu;
            // 0x1e8a40: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a3c) {
            ctx->pc = 0x1E8A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e8a18;
        }
    }
    ctx->pc = 0x1E8A44u;
    // 0x1e8a44: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e8a48: 0x244287d8  addiu       $v0, $v0, -0x7828
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936536));
    // 0x1e8a4c: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1e8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x1e8a50: 0xde4209c8  ld          $v0, 0x9C8($s2)
    ctx->pc = 0x1e8a50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
label_1e8a54:
    // 0x1e8a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a58: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x1e8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x1e8a5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a60: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1e8a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1e8a64: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e8a68: 0xc07a2b4  jal         func_1E8AD0
    ctx->pc = 0x1E8A68u;
    SET_GPR_U32(ctx, 31, 0x1E8A70u);
    ctx->pc = 0x1E8A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A68u;
            // 0x1e8a6c: 0xfe4209c8  sd          $v0, 0x9C8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8AD0u;
    if (runtime->hasFunction(0x1E8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A70u; }
        if (ctx->pc != 0x1E8A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8AD0_0x1e8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8A70u; }
        if (ctx->pc != 0x1E8A70u) { return; }
    }
    ctx->pc = 0x1E8A70u;
label_1e8a70:
    // 0x1e8a70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E8A70u;
    {
        const bool branch_taken_0x1e8a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A70u;
            // 0x1e8a74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a70) {
            ctx->pc = 0x1E8AACu;
            goto label_1e8aac;
        }
    }
    ctx->pc = 0x1E8A78u;
    // 0x1e8a78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8a7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e8a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8a84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e8a88: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1e8a88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e8a8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8A8Cu;
    {
        const bool branch_taken_0x1e8a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a8c) {
            ctx->pc = 0x1E8A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8A8Cu;
            // 0x1e8a90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E8A94u;
            goto label_1e8a94;
        }
    }
    ctx->pc = 0x1E8A94u;
label_1e8a94:
    // 0x1e8a94: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1e8a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1e8a98: 0x2012  mflo        $a0
    ctx->pc = 0x1e8a98u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1e8a9c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1e8aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e8aa4: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x1e8aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_1e8aa8:
    // 0x1e8aa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e8aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8aac:
    // 0x1e8aac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e8aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8ab0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e8ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8ab4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e8ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8ab8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e8ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8abc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e8abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8ac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8AC4u;
            // 0x1e8ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8ACCu;
    // 0x1e8acc: 0x0  nop
    ctx->pc = 0x1e8accu;
    // NOP
    ctx->pc = 0x1e8ad0u;
}
