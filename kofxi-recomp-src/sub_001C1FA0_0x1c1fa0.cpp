#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1FA0
// Address: 0x1c1fa0 - 0x1c20c0
void sub_001C1FA0_0x1c1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FA0_0x1c1fa0");
#endif

    switch (ctx->pc) {
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c20a8u: goto label_1c20a8;
        default: break;
    }

    ctx->pc = 0x1c1fa0u;

    // 0x1c1fa0: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1c1fa4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1fa8: 0x24e75900  addiu       $a3, $a3, 0x5900
    ctx->pc = 0x1c1fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22784));
    // 0x1c1fac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1fb0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1fb4: 0x3c0901bf  lui         $t1, 0x1BF
    ctx->pc = 0x1c1fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)447 << 16));
    // 0x1c1fb8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1c1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1c1fbc: 0x2444d910  addiu       $a0, $v0, -0x26F0
    ctx->pc = 0x1c1fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957328));
    // 0x1c1fc0: 0x25295a00  addiu       $t1, $t1, 0x5A00
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23040));
    // 0x1c1fc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1fc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fcc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1fd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1C1FD8u;
    SET_GPR_U32(ctx, 31, 0x1C1FE0u);
    ctx->pc = 0x1C1FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FD8u;
            // 0x1c1fdc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FE0u; }
        if (ctx->pc != 0x1C1FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FE0u; }
        if (ctx->pc != 0x1C1FE0u) { return; }
    }
    ctx->pc = 0x1C1FE0u;
label_1c1fe0:
    // 0x1c1fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FE4u;
            // 0x1c1fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1FECu;
    // 0x1c1fec: 0x0  nop
    ctx->pc = 0x1c1fecu;
    // NOP
label_1c1ff0:
    // 0x1c1ff0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1ff4: 0x2463d080  addiu       $v1, $v1, -0x2F80
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955136));
    // 0x1c1ff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2000: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2000u;
            // 0x1c2004: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2008u;
label_1c2008:
    // 0x1c2008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c200c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2018: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2018u;
    {
        const bool branch_taken_0x1c2018 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2018u;
            // 0x1c201c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2018) {
            ctx->pc = 0x1C2044u;
            goto label_1c2044;
        }
    }
    ctx->pc = 0x1C2020u;
    // 0x1c2020: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x1c2024: 0x0  nop
    ctx->pc = 0x1c2024u;
    // NOP
label_1c2028:
    // 0x1c2028: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1c2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c202c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c2030: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1c2030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c2034: 0x0  nop
    ctx->pc = 0x1c2034u;
    // NOP
    // 0x1c2038: 0x0  nop
    ctx->pc = 0x1c2038u;
    // NOP
    // 0x1c203c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C203Cu;
    {
        const bool branch_taken_0x1c203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C203Cu;
            // 0x1c2040: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c203c) {
            ctx->pc = 0x1C2028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C2044u;
label_1c2044:
    // 0x1c2044: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c2044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c2048: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c2048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c204c: 0x2610d084  addiu       $s0, $s0, -0x2F7C
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955140));
    // 0x1c2050: 0x24a59bd8  addiu       $a1, $a1, -0x6428
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941656));
    // 0x1c2054: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1C2054u;
    SET_GPR_U32(ctx, 31, 0x1C205Cu);
    ctx->pc = 0x1C2058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2054u;
            // 0x1c2058: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C205Cu; }
        if (ctx->pc != 0x1C205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C205Cu; }
        if (ctx->pc != 0x1C205Cu) { return; }
    }
    ctx->pc = 0x1C205Cu;
label_1c205c:
    // 0x1c205c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2060: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2068: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c2068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c206c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c206cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2070: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2070u;
            // 0x1c2074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2078u;
label_1c2078:
    // 0x1c2078: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c207c: 0x2c850010  sltiu       $a1, $a0, 0x10
    ctx->pc = 0x1c207cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c2080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2084: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2084u;
    {
        const bool branch_taken_0x1c2084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2084u;
            // 0x1c2088: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2084) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C208Cu;
    // 0x1c208c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2090: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1c2094: 0x2421d090  addiu       $at, $at, -0x2F70
    ctx->pc = 0x1c2094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955152));
    // 0x1c2098: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1c2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1c209c:
    // 0x1c209c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C209Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C20A4u;
    // 0x1c20a4: 0x0  nop
    ctx->pc = 0x1c20a4u;
    // NOP
label_1c20a8:
    // 0x1c20a8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1c20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1c20ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1c20acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1c20b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1c20b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20B4u;
            // 0x1c20b8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C20BCu;
    // 0x1c20bc: 0x0  nop
    ctx->pc = 0x1c20bcu;
    // NOP
    ctx->pc = 0x1c20c0u;
}
