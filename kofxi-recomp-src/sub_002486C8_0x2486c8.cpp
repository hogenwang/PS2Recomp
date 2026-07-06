#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002486C8
// Address: 0x2486c8 - 0x248fb0
void sub_002486C8_0x2486c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002486C8_0x2486c8");
#endif

    switch (ctx->pc) {
        case 0x2486f0u: goto label_2486f0;
        case 0x24870cu: goto label_24870c;
        case 0x248750u: goto label_248750;
        case 0x2487f4u: goto label_2487f4;
        case 0x248818u: goto label_248818;
        case 0x248844u: goto label_248844;
        case 0x2488a4u: goto label_2488a4;
        case 0x2488c0u: goto label_2488c0;
        case 0x248950u: goto label_248950;
        case 0x248964u: goto label_248964;
        case 0x248988u: goto label_248988;
        case 0x2489a8u: goto label_2489a8;
        case 0x2489e0u: goto label_2489e0;
        case 0x248a00u: goto label_248a00;
        case 0x248a10u: goto label_248a10;
        case 0x248a20u: goto label_248a20;
        case 0x248a48u: goto label_248a48;
        case 0x248a88u: goto label_248a88;
        case 0x248a9cu: goto label_248a9c;
        case 0x248ab8u: goto label_248ab8;
        case 0x248ae0u: goto label_248ae0;
        case 0x248b10u: goto label_248b10;
        case 0x248b24u: goto label_248b24;
        case 0x248b34u: goto label_248b34;
        case 0x248b50u: goto label_248b50;
        case 0x248ba8u: goto label_248ba8;
        case 0x248be0u: goto label_248be0;
        case 0x248c40u: goto label_248c40;
        case 0x248c54u: goto label_248c54;
        case 0x248c78u: goto label_248c78;
        case 0x248cb0u: goto label_248cb0;
        case 0x248d08u: goto label_248d08;
        case 0x248d50u: goto label_248d50;
        case 0x248de4u: goto label_248de4;
        case 0x248df8u: goto label_248df8;
        case 0x248e24u: goto label_248e24;
        case 0x248e38u: goto label_248e38;
        case 0x248e70u: goto label_248e70;
        case 0x248ec8u: goto label_248ec8;
        case 0x248f10u: goto label_248f10;
        case 0x248f80u: goto label_248f80;
        default: break;
    }

    ctx->pc = 0x2486c8u;

label_2486c8:
    // 0x2486c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2486c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2486cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2486ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2486d0: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x2486d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2486d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2486d8: 0x8e25ae48  lw          $a1, -0x51B8($s1)
    ctx->pc = 0x2486d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946376)));
    // 0x2486dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2486dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486e0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2486E0u;
    {
        const bool branch_taken_0x2486e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2486E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486E0u;
            // 0x2486e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486e0) {
            ctx->pc = 0x248704u;
            goto label_248704;
        }
    }
    ctx->pc = 0x2486E8u;
    // 0x2486e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2486e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2486ec: 0x0  nop
    ctx->pc = 0x2486ecu;
    // NOP
label_2486f0:
    // 0x2486f0: 0x10500011  beq         $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2486F0u;
    {
        const bool branch_taken_0x2486f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2486F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486F0u;
            // 0x2486f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486f0) {
            ctx->pc = 0x248738u;
            goto label_248738;
        }
    }
    ctx->pc = 0x2486F8u;
    // 0x2486f8: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x2486f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2486fc: 0x54a0fffc  bnel        $a1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2486FCu;
    {
        const bool branch_taken_0x2486fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2486fc) {
            ctx->pc = 0x248700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2486FCu;
            // 0x248700: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2486F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2486f0;
        }
    }
    ctx->pc = 0x248704u;
label_248704:
    // 0x248704: 0xc098552  jal         func_261548
    ctx->pc = 0x248704u;
    SET_GPR_U32(ctx, 31, 0x24870Cu);
    ctx->pc = 0x248708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248704u;
            // 0x248708: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24870Cu; }
        if (ctx->pc != 0x24870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24870Cu; }
        if (ctx->pc != 0x24870Cu) { return; }
    }
    ctx->pc = 0x24870Cu;
label_24870c:
    // 0x24870c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248710: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248710u;
    {
        const bool branch_taken_0x248710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x248714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248710u;
            // 0x248714: 0x8e24ae48  lw          $a0, -0x51B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248710) {
            ctx->pc = 0x248720u;
            goto label_248720;
        }
    }
    ctx->pc = 0x248718u;
    // 0x248718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248718u;
    {
        const bool branch_taken_0x248718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248718u;
            // 0x24871c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248718) {
            ctx->pc = 0x248738u;
            goto label_248738;
        }
    }
    ctx->pc = 0x248720u;
label_248720:
    // 0x248720: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248724: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x248724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x248728: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x248728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24872c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x24872cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x248730: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x248730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x248734: 0xae25ae48  sw          $a1, -0x51B8($s1)
    ctx->pc = 0x248734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946376), GPR_U32(ctx, 5));
label_248738:
    // 0x248738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x248738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24873c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24873cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248744: 0x3e00008  jr          $ra
    ctx->pc = 0x248744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248744u;
            // 0x248748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24874Cu;
    // 0x24874c: 0x0  nop
    ctx->pc = 0x24874cu;
    // NOP
label_248750:
    // 0x248750: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x248750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x248754: 0xffa60110  sd          $a2, 0x110($sp)
    ctx->pc = 0x248754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 6));
    // 0x248758: 0xffa50108  sd          $a1, 0x108($sp)
    ctx->pc = 0x248758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 5));
    // 0x24875c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x24875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x248760: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x248760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x248764: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x248764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x248768: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x248768u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
    // 0x24876c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x248770: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x248770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248774: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x248774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x248778: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x248778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x24877c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x248780: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x248780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x248784: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x248784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x248788: 0xffa70118  sd          $a3, 0x118($sp)
    ctx->pc = 0x248788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 7));
    // 0x24878c: 0xffa80120  sd          $t0, 0x120($sp)
    ctx->pc = 0x24878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 8));
    // 0x248790: 0xffa90128  sd          $t1, 0x128($sp)
    ctx->pc = 0x248790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 9));
    // 0x248794: 0xffaa0130  sd          $t2, 0x130($sp)
    ctx->pc = 0x248794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 10));
    // 0x248798: 0xffab0138  sd          $t3, 0x138($sp)
    ctx->pc = 0x248798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 11));
    // 0x24879c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2487a0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2487a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2487a4: 0x8eb60014  lw          $s6, 0x14($s5)
    ctx->pc = 0x2487a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2487a8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2487a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2487ac: 0xdee20148  ld          $v0, 0x148($s7)
    ctx->pc = 0x2487acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 328)));
    // 0x2487b0: 0x8eb40008  lw          $s4, 0x8($s5)
    ctx->pc = 0x2487b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2487b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2487b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2487b8: 0x8fbe0108  lw          $fp, 0x108($sp)
    ctx->pc = 0x2487b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2487bc: 0xfee20148  sd          $v0, 0x148($s7)
    ctx->pc = 0x2487bcu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 328), GPR_U64(ctx, 2));
    // 0x2487c0: 0x27d00008  addiu       $s0, $fp, 0x8
    ctx->pc = 0x2487c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x2487c4: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x2487c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x2487c8: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x2487c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2487cc: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2487ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2487d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2487d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2487d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2487d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2487d8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2487d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2487dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2487DCu;
    {
        const bool branch_taken_0x2487dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487DCu;
            // 0x2487e0: 0x26e50148  addiu       $a1, $s7, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487dc) {
            ctx->pc = 0x2487FCu;
            goto label_2487fc;
        }
    }
    ctx->pc = 0x2487E4u;
    // 0x2487e4: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x2487e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2487e8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2487e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2487ec: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2487ECu;
    SET_GPR_U32(ctx, 31, 0x2487F4u);
    ctx->pc = 0x2487F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2487ECu;
            // 0x2487f0: 0xfca20008  sd          $v0, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2487F4u; }
        if (ctx->pc != 0x2487F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2487F4u; }
        if (ctx->pc != 0x2487F4u) { return; }
    }
    ctx->pc = 0x2487F4u;
label_2487f4:
    // 0x2487f4: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x2487F4u;
    {
        const bool branch_taken_0x2487f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487F4u;
            // 0x2487f8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487f4) {
            ctx->pc = 0x248F84u;
            goto label_248f84;
        }
    }
    ctx->pc = 0x2487FCu;
label_2487fc:
    // 0x2487fc: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x2487fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x248800: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248804: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x248804u;
    {
        const bool branch_taken_0x248804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248804) {
            ctx->pc = 0x248808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248804u;
            // 0x248808: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248830u;
            goto label_248830;
        }
    }
    ctx->pc = 0x24880Cu;
    // 0x24880c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x248810: 0xc08a254  jal         func_228950
    ctx->pc = 0x248810u;
    SET_GPR_U32(ctx, 31, 0x248818u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248818u; }
        if (ctx->pc != 0x248818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248818u; }
        if (ctx->pc != 0x248818u) { return; }
    }
    ctx->pc = 0x248818u;
label_248818:
    // 0x248818: 0x8a83000f  lwl         $v1, 0xF($s4)
    ctx->pc = 0x248818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24881c: 0x9a83000c  lwr         $v1, 0xC($s4)
    ctx->pc = 0x24881cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248824: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x248824u;
    {
        const bool branch_taken_0x248824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248824u;
            // 0x248828: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248824) {
            ctx->pc = 0x24883Cu;
            goto label_24883c;
        }
    }
    ctx->pc = 0x24882Cu;
    // 0x24882c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_248830:
    // 0x248830: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x248830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x248834: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x248834u;
    {
        const bool branch_taken_0x248834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248834u;
            // 0x248838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248834) {
            ctx->pc = 0x248870u;
            goto label_248870;
        }
    }
    ctx->pc = 0x24883Cu;
label_24883c:
    // 0x24883c: 0xc08acea  jal         func_22B3A8
    ctx->pc = 0x24883Cu;
    SET_GPR_U32(ctx, 31, 0x248844u);
    ctx->pc = 0x248840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24883Cu;
            // 0x248840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (runtime->hasFunction(0x22B3A8u)) {
        auto targetFn = runtime->lookupFunction(0x22B3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248844u; }
        if (ctx->pc != 0x248844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3A8_0x22b3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248844u; }
        if (ctx->pc != 0x248844u) { return; }
    }
    ctx->pc = 0x248844u;
label_248844:
    // 0x248844: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x248844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248848: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x248848u;
    {
        const bool branch_taken_0x248848 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x248848) {
            ctx->pc = 0x24884Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248848u;
            // 0x24884c: 0x8eb40008  lw          $s4, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248864u;
            goto label_248864;
        }
    }
    ctx->pc = 0x248850u;
    // 0x248850: 0x26e30148  addiu       $v1, $s7, 0x148
    ctx->pc = 0x248850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
    // 0x248854: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x248854u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x248858: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248858u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x24885c: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x24885Cu;
    {
        const bool branch_taken_0x24885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24885Cu;
            // 0x248860: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24885c) {
            ctx->pc = 0x248F80u;
            goto label_248f80;
        }
    }
    ctx->pc = 0x248864u;
label_248864:
    // 0x248864: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x248864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x248868: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248868u;
    {
        const bool branch_taken_0x248868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248868u;
            // 0x24886c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248868) {
            ctx->pc = 0x248874u;
            goto label_248874;
        }
    }
    ctx->pc = 0x248870u;
label_248870:
    // 0x248870: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_248874:
    // 0x248874: 0x5e9821  addu        $s3, $v0, $fp
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x248878: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x248878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24887c: 0x7e1023  subu        $v0, $v1, $fp
    ctx->pc = 0x24887cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x248880: 0xaeb30008  sw          $s3, 0x8($s5)
    ctx->pc = 0x248880u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 19));
    // 0x248884: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x248884u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x248888: 0x92850003  lbu         $a1, 0x3($s4)
    ctx->pc = 0x248888u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x24888c: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x24888cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x248890: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x248890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x248894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x248894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x248898: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x248898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x24889c: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x24889Cu;
    SET_GPR_U32(ctx, 31, 0x2488A4u);
    ctx->pc = 0x2488A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24889Cu;
            // 0x2488a0: 0xbe2823  subu        $a1, $a1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (runtime->hasFunction(0x24B5F8u)) {
        auto targetFn = runtime->lookupFunction(0x24B5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488A4u; }
        if (ctx->pc != 0x2488A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B5F8_0x24b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488A4u; }
        if (ctx->pc != 0x2488A4u) { return; }
    }
    ctx->pc = 0x2488A4u;
label_2488a4:
    // 0x2488a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2488A4u;
    {
        const bool branch_taken_0x2488a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488A4u;
            // 0x2488a8: 0x26e30148  addiu       $v1, $s7, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488a4) {
            ctx->pc = 0x2488C8u;
            goto label_2488c8;
        }
    }
    ctx->pc = 0x2488ACu;
    // 0x2488ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2488acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488b0: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2488b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2488b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2488b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2488b8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2488B8u;
    SET_GPR_U32(ctx, 31, 0x2488C0u);
    ctx->pc = 0x2488BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2488B8u;
            // 0x2488bc: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488C0u; }
        if (ctx->pc != 0x2488C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2488C0u; }
        if (ctx->pc != 0x2488C0u) { return; }
    }
    ctx->pc = 0x2488C0u;
label_2488c0:
    // 0x2488c0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2488C0u;
    {
        const bool branch_taken_0x2488c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488C0u;
            // 0x2488c4: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488c0) {
            ctx->pc = 0x248F84u;
            goto label_248f84;
        }
    }
    ctx->pc = 0x2488C8u;
label_2488c8:
    // 0x2488c8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2488cc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2488d0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2488d4: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2488d8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2488d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2488dc: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2488dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x2488e0: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x2488e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x2488e4: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2488e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2488e8: 0x106400ca  beq         $v1, $a0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2488E8u;
    {
        const bool branch_taken_0x2488e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2488ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488E8u;
            // 0x2488ec: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488e8) {
            ctx->pc = 0x248C14u;
            goto label_248c14;
        }
    }
    ctx->pc = 0x2488F0u;
    // 0x2488f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2488F0u;
    {
        const bool branch_taken_0x2488f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488F0u;
            // 0x2488f4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f0) {
            ctx->pc = 0x248908u;
            goto label_248908;
        }
    }
    ctx->pc = 0x2488F8u;
    // 0x2488f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2488F8u;
    {
        const bool branch_taken_0x2488f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488F8u;
            // 0x2488fc: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f8) {
            ctx->pc = 0x24891Cu;
            goto label_24891c;
        }
    }
    ctx->pc = 0x248900u;
    // 0x248900: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x248900u;
    {
        const bool branch_taken_0x248900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248900u;
            // 0x248904: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248900) {
            ctx->pc = 0x248F78u;
            goto label_248f78;
        }
    }
    ctx->pc = 0x248908u;
label_248908:
    // 0x248908: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x248908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x24890c: 0x1062012a  beq         $v1, $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x24890Cu;
    {
        const bool branch_taken_0x24890c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24890Cu;
            // 0x248910: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24890c) {
            ctx->pc = 0x248DB8u;
            goto label_248db8;
        }
    }
    ctx->pc = 0x248914u;
    // 0x248914: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x248914u;
    {
        const bool branch_taken_0x248914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248914u;
            // 0x248918: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248914) {
            ctx->pc = 0x248F78u;
            goto label_248f78;
        }
    }
    ctx->pc = 0x24891Cu;
label_24891c:
    // 0x24891c: 0x26f10148  addiu       $s1, $s7, 0x148
    ctx->pc = 0x24891cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
    // 0x248920: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x248920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x248924: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248924u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248928: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x248928u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x24892c: 0x96c30030  lhu         $v1, 0x30($s6)
    ctx->pc = 0x24892cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x248930: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x248930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x248934: 0x1460018f  bnez        $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x248934u;
    {
        const bool branch_taken_0x248934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248934u;
            // 0x248938: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248934) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x24893Cu;
    // 0x24893c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x24893cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x248940: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x248940u;
    {
        const bool branch_taken_0x248940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248940) {
            ctx->pc = 0x248A7Cu;
            goto label_248a7c;
        }
    }
    ctx->pc = 0x248948u;
    // 0x248948: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x248948u;
    SET_GPR_U32(ctx, 31, 0x248950u);
    ctx->pc = 0x24894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248948u;
            // 0x24894c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    goto label_2486c8;
    ctx->pc = 0x248950u;
label_248950:
    // 0x248950: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x248950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248954: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x248954u;
    {
        const bool branch_taken_0x248954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248954u;
            // 0x248958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248954) {
            ctx->pc = 0x24896Cu;
            goto label_24896c;
        }
    }
    ctx->pc = 0x24895Cu;
    // 0x24895c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24895Cu;
    SET_GPR_U32(ctx, 31, 0x248964u);
    ctx->pc = 0x248960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24895Cu;
            // 0x248960: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248964u; }
        if (ctx->pc != 0x248964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248964u; }
        if (ctx->pc != 0x248964u) { return; }
    }
    ctx->pc = 0x248964u;
label_248964:
    // 0x248964: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x248964u;
    {
        const bool branch_taken_0x248964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248964u;
            // 0x248968: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248964) {
            ctx->pc = 0x248F84u;
            goto label_248f84;
        }
    }
    ctx->pc = 0x24896Cu;
label_24896c:
    // 0x24896c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x24896cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x248970: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x248970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x248974: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248978: 0x8a900013  lwl         $s0, 0x13($s4)
    ctx->pc = 0x248978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x24897c: 0x9a900010  lwr         $s0, 0x10($s4)
    ctx->pc = 0x24897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x248980: 0xc08a254  jal         func_228950
    ctx->pc = 0x248980u;
    SET_GPR_U32(ctx, 31, 0x248988u);
    ctx->pc = 0x248984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248980u;
            // 0x248984: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248988u; }
        if (ctx->pc != 0x248988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248988u; }
        if (ctx->pc != 0x248988u) { return; }
    }
    ctx->pc = 0x248988u;
label_248988:
    // 0x248988: 0x56020047  bnel        $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x248988u;
    {
        const bool branch_taken_0x248988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x248988) {
            ctx->pc = 0x24898Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248988u;
            // 0x24898c: 0xde220020  ld          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248AA8u;
            goto label_248aa8;
        }
    }
    ctx->pc = 0x248990u;
    // 0x248990: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x248990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x248994: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x248994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x248998: 0x8c4311a0  lw          $v1, 0x11A0($v0)
    ctx->pc = 0x248998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x24899c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24899cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2489a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2489a4: 0x0  nop
    ctx->pc = 0x2489a4u;
    // NOP
label_2489a8:
    // 0x2489a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2489ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2489ACu;
    {
        const bool branch_taken_0x2489ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2489ac) {
            ctx->pc = 0x2489CCu;
            goto label_2489cc;
        }
    }
    ctx->pc = 0x2489B4u;
    // 0x2489b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2489b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2489b8: 0x8c71008c  lw          $s1, 0x8C($v1)
    ctx->pc = 0x2489b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x2489bc: 0x1220fffa  beqz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2489BCu;
    {
        const bool branch_taken_0x2489bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489BCu;
            // 0x2489c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489bc) {
            ctx->pc = 0x2489A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2489a8;
        }
    }
    ctx->pc = 0x2489C4u;
    // 0x2489c4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2489c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2489c8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2489c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2489cc:
    // 0x2489cc: 0x12200168  beqz        $s1, . + 4 + (0x168 << 2)
    ctx->pc = 0x2489CCu;
    {
        const bool branch_taken_0x2489cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2489CCu;
            // 0x2489d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489cc) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x2489D4u;
    // 0x2489d4: 0x24120032  addiu       $s2, $zero, 0x32
    ctx->pc = 0x2489d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2489d8: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2489d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x2489dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2489dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2489e0:
    // 0x2489e0: 0x5456001e  bnel        $v0, $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x2489E0u;
    {
        const bool branch_taken_0x2489e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2489e0) {
            ctx->pc = 0x2489E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2489E0u;
            // 0x2489e4: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248A5Cu;
            goto label_248a5c;
        }
    }
    ctx->pc = 0x2489E8u;
    // 0x2489e8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2489e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2489ec: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2489ECu;
    {
        const bool branch_taken_0x2489ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2489ec) {
            ctx->pc = 0x2489F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2489ECu;
            // 0x2489f0: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248A5Cu;
            goto label_248a5c;
        }
    }
    ctx->pc = 0x2489F4u;
    // 0x2489f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2489f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2489f8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2489F8u;
    SET_GPR_U32(ctx, 31, 0x248A00u);
    ctx->pc = 0x2489FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2489F8u;
            // 0x2489fc: 0x3484ff00  ori         $a0, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A00u; }
        if (ctx->pc != 0x248A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A00u; }
        if (ctx->pc != 0x248A00u) { return; }
    }
    ctx->pc = 0x248A00u;
label_248a00:
    // 0x248a00: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x248a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248a04: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248a08: 0xc08a254  jal         func_228950
    ctx->pc = 0x248A08u;
    SET_GPR_U32(ctx, 31, 0x248A10u);
    ctx->pc = 0x248A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A08u;
            // 0x248a0c: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A10u; }
        if (ctx->pc != 0x248A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A10u; }
        if (ctx->pc != 0x248A10u) { return; }
    }
    ctx->pc = 0x248A10u;
label_248a10:
    // 0x248a10: 0x52020012  beql        $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x248A10u;
    {
        const bool branch_taken_0x248a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x248a10) {
            ctx->pc = 0x248A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248A10u;
            // 0x248a14: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248A5Cu;
            goto label_248a5c;
        }
    }
    ctx->pc = 0x248A18u;
    // 0x248a18: 0xc08b614  jal         func_22D850
    ctx->pc = 0x248A18u;
    SET_GPR_U32(ctx, 31, 0x248A20u);
    ctx->pc = 0x248A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A18u;
            // 0x248a1c: 0xae33001c  sw          $s3, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A20u; }
        if (ctx->pc != 0x248A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A20u; }
        if (ctx->pc != 0x248A20u) { return; }
    }
    ctx->pc = 0x248A20u;
label_248a20:
    // 0x248a20: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x248a20u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x248a24: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248A24u;
    {
        const bool branch_taken_0x248a24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a24) {
            ctx->pc = 0x248A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248A24u;
            // 0x248a28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x248A2Cu;
            goto label_248a2c;
        }
    }
    ctx->pc = 0x248A2Cu;
label_248a2c:
    // 0x248a2c: 0x1810  mfhi        $v1
    ctx->pc = 0x248a2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x248a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x248a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x248a34: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x248a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x248a38: 0xae930190  sw          $s3, 0x190($s4)
    ctx->pc = 0x248a38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 19));
    // 0x248a3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248A3Cu;
    {
        const bool branch_taken_0x248a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A3Cu;
            // 0x248a40: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a3c) {
            ctx->pc = 0x248A5Cu;
            goto label_248a5c;
        }
    }
    ctx->pc = 0x248A44u;
    // 0x248a44: 0x0  nop
    ctx->pc = 0x248a44u;
    // NOP
label_248a48:
    // 0x248a48: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248A48u;
    {
        const bool branch_taken_0x248a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a48) {
            ctx->pc = 0x248A6Cu;
            goto label_248a6c;
        }
    }
    ctx->pc = 0x248A50u;
    // 0x248a50: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x248a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x248a54: 0x8c71008c  lw          $s1, 0x8C($v1)
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x248a58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x248a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_248a5c:
    // 0x248a5c: 0x1220fffa  beqz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248A5Cu;
    {
        const bool branch_taken_0x248a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A5Cu;
            // 0x248a60: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a5c) {
            ctx->pc = 0x248A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248a48;
        }
    }
    ctx->pc = 0x248A64u;
    // 0x248a64: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x248a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248a68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x248a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_248a6c:
    // 0x248a6c: 0x5620ffdc  bnel        $s1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x248A6Cu;
    {
        const bool branch_taken_0x248a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x248a6c) {
            ctx->pc = 0x248A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248A6Cu;
            // 0x248a70: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2489E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2489e0;
        }
    }
    ctx->pc = 0x248A74u;
    // 0x248a74: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x248A74u;
    {
        const bool branch_taken_0x248a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A74u;
            // 0x248a78: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a74) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248A7Cu;
label_248a7c:
    // 0x248a7c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x248a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x248a80: 0xc08a254  jal         func_228950
    ctx->pc = 0x248A80u;
    SET_GPR_U32(ctx, 31, 0x248A88u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A88u; }
        if (ctx->pc != 0x248A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A88u; }
        if (ctx->pc != 0x248A88u) { return; }
    }
    ctx->pc = 0x248A88u;
label_248a88:
    // 0x248a88: 0x8a900013  lwl         $s0, 0x13($s4)
    ctx->pc = 0x248a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x248a8c: 0x9a900010  lwr         $s0, 0x10($s4)
    ctx->pc = 0x248a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x248a90: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248a94: 0xc08a254  jal         func_228950
    ctx->pc = 0x248A94u;
    SET_GPR_U32(ctx, 31, 0x248A9Cu);
    ctx->pc = 0x248A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248A94u;
            // 0x248a98: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A9Cu; }
        if (ctx->pc != 0x248A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248A9Cu; }
        if (ctx->pc != 0x248A9Cu) { return; }
    }
    ctx->pc = 0x248A9Cu;
label_248a9c:
    // 0x248a9c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x248A9Cu;
    {
        const bool branch_taken_0x248a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x248AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248A9Cu;
            // 0x248aa0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a9c) {
            ctx->pc = 0x248AC0u;
            goto label_248ac0;
        }
    }
    ctx->pc = 0x248AA4u;
    // 0x248aa4: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x248aa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_248aa8:
    // 0x248aa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x248aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248aac: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248aacu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248ab0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x248AB0u;
    SET_GPR_U32(ctx, 31, 0x248AB8u);
    ctx->pc = 0x248AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248AB0u;
            // 0x248ab4: 0xfe220020  sd          $v0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AB8u; }
        if (ctx->pc != 0x248AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248AB8u; }
        if (ctx->pc != 0x248AB8u) { return; }
    }
    ctx->pc = 0x248AB8u;
label_248ab8:
    // 0x248ab8: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x248AB8u;
    {
        const bool branch_taken_0x248ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248AB8u;
            // 0x248abc: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ab8) {
            ctx->pc = 0x248F84u;
            goto label_248f84;
        }
    }
    ctx->pc = 0x248AC0u;
label_248ac0:
    // 0x248ac0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x248ac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x248ac4: 0x8c4411a0  lw          $a0, 0x11A0($v0)
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x248ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248acc: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x248accu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
    // 0x248ad0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x248ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x248ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x248ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x248ad8: 0xb3980a  movz        $s3, $a1, $s3
    ctx->pc = 0x248ad8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x248adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x248adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ae0:
    // 0x248ae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x248ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248ae4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x248AE4u;
    {
        const bool branch_taken_0x248ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ae4) {
            ctx->pc = 0x248B04u;
            goto label_248b04;
        }
    }
    ctx->pc = 0x248AECu;
    // 0x248aec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x248aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x248af0: 0x8c71008c  lw          $s1, 0x8C($v1)
    ctx->pc = 0x248af0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x248af4: 0x1220fffa  beqz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248AF4u;
    {
        const bool branch_taken_0x248af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248AF4u;
            // 0x248af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248af4) {
            ctx->pc = 0x248AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248ae0;
        }
    }
    ctx->pc = 0x248AFCu;
    // 0x248afc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x248afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248b00: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x248b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_248b04:
    // 0x248b04: 0x1220011b  beqz        $s1, . + 4 + (0x11B << 2)
    ctx->pc = 0x248B04u;
    {
        const bool branch_taken_0x248b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248B04u;
            // 0x248b08: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b04) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248B0Cu;
    // 0x248b0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x248b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_248b10:
    // 0x248b10: 0x54560038  bnel        $v0, $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x248B10u;
    {
        const bool branch_taken_0x248b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x248b10) {
            ctx->pc = 0x248B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248B10u;
            // 0x248b14: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248BF4u;
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248B18u;
    // 0x248b18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x248b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x248b1c: 0xc08a254  jal         func_228950
    ctx->pc = 0x248B1Cu;
    SET_GPR_U32(ctx, 31, 0x248B24u);
    ctx->pc = 0x248B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B1Cu;
            // 0x248b20: 0x3484ff00  ori         $a0, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B24u; }
        if (ctx->pc != 0x248B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B24u; }
        if (ctx->pc != 0x248B24u) { return; }
    }
    ctx->pc = 0x248B24u;
label_248b24:
    // 0x248b24: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x248b24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248b28: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248b2c: 0xc08a254  jal         func_228950
    ctx->pc = 0x248B2Cu;
    SET_GPR_U32(ctx, 31, 0x248B34u);
    ctx->pc = 0x248B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B2Cu;
            // 0x248b30: 0x2428024  and         $s0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B34u; }
        if (ctx->pc != 0x248B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B34u; }
        if (ctx->pc != 0x248B34u) { return; }
    }
    ctx->pc = 0x248B34u;
label_248b34:
    // 0x248b34: 0x5202002f  beql        $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x248B34u;
    {
        const bool branch_taken_0x248b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x248b34) {
            ctx->pc = 0x248B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248B34u;
            // 0x248b38: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248BF4u;
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248B3Cu;
    // 0x248b3c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248b40: 0x8a900013  lwl         $s0, 0x13($s4)
    ctx->pc = 0x248b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x248b44: 0x9a900010  lwr         $s0, 0x10($s4)
    ctx->pc = 0x248b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x248b48: 0xc08a254  jal         func_228950
    ctx->pc = 0x248B48u;
    SET_GPR_U32(ctx, 31, 0x248B50u);
    ctx->pc = 0x248B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248B48u;
            // 0x248b4c: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B50u; }
        if (ctx->pc != 0x248B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248B50u; }
        if (ctx->pc != 0x248B50u) { return; }
    }
    ctx->pc = 0x248B50u;
label_248b50:
    // 0x248b50: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x248B50u;
    {
        const bool branch_taken_0x248b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x248b50) {
            ctx->pc = 0x248B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248B50u;
            // 0x248b54: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248B64u;
            goto label_248b64;
        }
    }
    ctx->pc = 0x248B58u;
    // 0x248b58: 0x56120026  bnel        $s0, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x248B58u;
    {
        const bool branch_taken_0x248b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x248b58) {
            ctx->pc = 0x248B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248B58u;
            // 0x248b5c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248BF4u;
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248B60u;
    // 0x248b60: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x248b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_248b64:
    // 0x248b64: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x248b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x248b68: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x248b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x248b6c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x248B6Cu;
    {
        const bool branch_taken_0x248b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248B6Cu;
            // 0x248b70: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b6c) {
            ctx->pc = 0x248BD4u;
            goto label_248bd4;
        }
    }
    ctx->pc = 0x248B74u;
    // 0x248b74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248b78: 0x24426aa0  addiu       $v0, $v0, 0x6AA0
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27296));
    // 0x248b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248b80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248b84: 0x800008  jr          $a0
    ctx->pc = 0x248B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248B8Cu: goto label_248b8c;
            case 0x248B9Cu: goto label_248b9c;
            case 0x248BCCu: goto label_248bcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x248B8Cu;
label_248b8c:
    // 0x248b8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x248b90: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x248b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x248b94: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x248B94u;
    {
        const bool branch_taken_0x248b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b94) {
            ctx->pc = 0x248B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248B94u;
            // 0x248b98: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248BF4u;
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248B9Cu;
label_248b9c:
    // 0x248b9c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248ba0: 0xc08b614  jal         func_22D850
    ctx->pc = 0x248BA0u;
    SET_GPR_U32(ctx, 31, 0x248BA8u);
    ctx->pc = 0x248BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248BA0u;
            // 0x248ba4: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BA8u; }
        if (ctx->pc != 0x248BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D850_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248BA8u; }
        if (ctx->pc != 0x248BA8u) { return; }
    }
    ctx->pc = 0x248BA8u;
label_248ba8:
    // 0x248ba8: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x248ba8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x248bac: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x248BACu;
    {
        const bool branch_taken_0x248bac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bac) {
            ctx->pc = 0x248BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248BACu;
            // 0x248bb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x248BB4u;
            goto label_248bb4;
        }
    }
    ctx->pc = 0x248BB4u;
label_248bb4:
    // 0x248bb4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x248bb8: 0x1810  mfhi        $v1
    ctx->pc = 0x248bb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x248bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x248bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x248bc0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x248bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x248bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248BC4u;
    {
        const bool branch_taken_0x248bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248BC4u;
            // 0x248bc8: 0xac500190  sw          $s0, 0x190($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bc4) {
            ctx->pc = 0x248BD4u;
            goto label_248bd4;
        }
    }
    ctx->pc = 0x248BCCu;
label_248bcc:
    // 0x248bcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x248bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x248bd0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x248bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_248bd4:
    // 0x248bd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248BD4u;
    {
        const bool branch_taken_0x248bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248BD4u;
            // 0x248bd8: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bd4) {
            ctx->pc = 0x248BF4u;
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248BDCu;
    // 0x248bdc: 0x0  nop
    ctx->pc = 0x248bdcu;
    // NOP
label_248be0:
    // 0x248be0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248BE0u;
    {
        const bool branch_taken_0x248be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248be0) {
            ctx->pc = 0x248C04u;
            goto label_248c04;
        }
    }
    ctx->pc = 0x248BE8u;
    // 0x248be8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x248be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x248bec: 0x8c71008c  lw          $s1, 0x8C($v1)
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x248bf0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x248bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_248bf4:
    // 0x248bf4: 0x1220fffa  beqz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x248BF4u;
    {
        const bool branch_taken_0x248bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248BF4u;
            // 0x248bf8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bf4) {
            ctx->pc = 0x248BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248be0;
        }
    }
    ctx->pc = 0x248BFCu;
    // 0x248bfc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x248bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248c00: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x248c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_248c04:
    // 0x248c04: 0x5620ffc2  bnel        $s1, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x248C04u;
    {
        const bool branch_taken_0x248c04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c04) {
            ctx->pc = 0x248C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248C04u;
            // 0x248c08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248b10;
        }
    }
    ctx->pc = 0x248C0Cu;
    // 0x248c0c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x248C0Cu;
    {
        const bool branch_taken_0x248c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C0Cu;
            // 0x248c10: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c0c) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248C14u;
label_248c14:
    // 0x248c14: 0x26f20148  addiu       $s2, $s7, 0x148
    ctx->pc = 0x248c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
    // 0x248c18: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x248c18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x248c1c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248c1cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248c20: 0xfe420028  sd          $v0, 0x28($s2)
    ctx->pc = 0x248c20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 2));
    // 0x248c24: 0x96c30030  lhu         $v1, 0x30($s6)
    ctx->pc = 0x248c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x248c28: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x248c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x248c2c: 0x146000d1  bnez        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x248C2Cu;
    {
        const bool branch_taken_0x248c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C2Cu;
            // 0x248c30: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c2c) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248C34u;
    // 0x248c34: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x248c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x248c38: 0xc08a254  jal         func_228950
    ctx->pc = 0x248C38u;
    SET_GPR_U32(ctx, 31, 0x248C40u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C40u; }
        if (ctx->pc != 0x248C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C40u; }
        if (ctx->pc != 0x248C40u) { return; }
    }
    ctx->pc = 0x248C40u;
label_248c40:
    // 0x248c40: 0x8a710007  lwl         $s1, 0x7($s3)
    ctx->pc = 0x248c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x248c44: 0x9a710004  lwr         $s1, 0x4($s3)
    ctx->pc = 0x248c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x248c48: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248c4c: 0xc08a254  jal         func_228950
    ctx->pc = 0x248C4Cu;
    SET_GPR_U32(ctx, 31, 0x248C54u);
    ctx->pc = 0x248C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248C4Cu;
            // 0x248c50: 0x2228024  and         $s0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C54u; }
        if (ctx->pc != 0x248C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C54u; }
        if (ctx->pc != 0x248C54u) { return; }
    }
    ctx->pc = 0x248C54u;
label_248c54:
    // 0x248c54: 0x5602006f  bnel        $s0, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x248C54u;
    {
        const bool branch_taken_0x248c54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x248c54) {
            ctx->pc = 0x248C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248C54u;
            // 0x248c58: 0xde420030  ld          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248C5Cu;
    // 0x248c5c: 0x8a820013  lwl         $v0, 0x13($s4)
    ctx->pc = 0x248c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x248c60: 0x9a820010  lwr         $v0, 0x10($s4)
    ctx->pc = 0x248c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x248c64: 0x5622006b  bnel        $s1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x248C64u;
    {
        const bool branch_taken_0x248c64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x248c64) {
            ctx->pc = 0x248C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248C64u;
            // 0x248c68: 0xde420030  ld          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248C6Cu;
    // 0x248c6c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x248c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x248c70: 0xc08a254  jal         func_228950
    ctx->pc = 0x248C70u;
    SET_GPR_U32(ctx, 31, 0x248C78u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C78u; }
        if (ctx->pc != 0x248C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248C78u; }
        if (ctx->pc != 0x248C78u) { return; }
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x8a83000f  lwl         $v1, 0xF($s4)
    ctx->pc = 0x248c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x248c7c: 0x9a83000c  lwr         $v1, 0xC($s4)
    ctx->pc = 0x248c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248c80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248c84: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x248C84u;
    {
        const bool branch_taken_0x248c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C84u;
            // 0x248c88: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c84) {
            ctx->pc = 0x248CE4u;
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248C8Cu;
    // 0x248c8c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x248C8Cu;
    {
        const bool branch_taken_0x248c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248C8Cu;
            // 0x248c90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c8c) {
            ctx->pc = 0x248CC8u;
            goto label_248cc8;
        }
    }
    ctx->pc = 0x248C94u;
    // 0x248c94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248c98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248c9c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248c9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248ca0: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x248CA0u;
    {
        const bool branch_taken_0x248ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x248CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CA0u;
            // 0x248ca4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ca0) {
            ctx->pc = 0x248CCCu;
            goto label_248ccc;
        }
    }
    ctx->pc = 0x248CA8u;
    // 0x248ca8: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x248cac: 0x0  nop
    ctx->pc = 0x248cacu;
    // NOP
label_248cb0:
    // 0x248cb0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x248CB0u;
    {
        const bool branch_taken_0x248cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CB0u;
            // 0x248cb4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cb0) {
            ctx->pc = 0x248CCCu;
            goto label_248ccc;
        }
    }
    ctx->pc = 0x248CB8u;
    // 0x248cb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248cbc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248cbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248cc0: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248CC0u;
    {
        const bool branch_taken_0x248cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x248cc0) {
            ctx->pc = 0x248CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248CC0u;
            // 0x248cc4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248cb0;
        }
    }
    ctx->pc = 0x248CC8u;
label_248cc8:
    // 0x248cc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x248cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248ccc:
    // 0x248ccc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248CCCu;
    {
        const bool branch_taken_0x248ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ccc) {
            ctx->pc = 0x248CE4u;
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248CD4u;
    // 0x248cd4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x248cd8: 0xaa82000f  swl         $v0, 0xF($s4)
    ctx->pc = 0x248cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248cdc: 0xba82000c  swr         $v0, 0xC($s4)
    ctx->pc = 0x248cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248ce0: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x248ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_248ce4:
    // 0x248ce4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x248CE4u;
    {
        const bool branch_taken_0x248ce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248CE4u;
            // 0x248ce8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ce4) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248CECu;
    // 0x248cec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248cf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248cf4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248cf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248cf8: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248CF8u;
    {
        const bool branch_taken_0x248cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x248cf8) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248D00u;
    // 0x248d00: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x248d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x248d04: 0x0  nop
    ctx->pc = 0x248d04u;
    // NOP
label_248d08:
    // 0x248d08: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x248D08u;
    {
        const bool branch_taken_0x248d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D08u;
            // 0x248d0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d08) {
            ctx->pc = 0x248D64u;
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D10u;
    // 0x248d10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248d14: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248d14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248d18: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248D18u;
    {
        const bool branch_taken_0x248d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x248d18) {
            ctx->pc = 0x248D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248D18u;
            // 0x248d1c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248d08;
        }
    }
    ctx->pc = 0x248D20u;
label_248d20:
    // 0x248d20: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x248D20u;
    {
        const bool branch_taken_0x248d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D20u;
            // 0x248d24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d20) {
            ctx->pc = 0x248D64u;
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D28u;
    // 0x248d28: 0x8cb1008c  lw          $s1, 0x8C($a1)
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x248d2c: 0x12200091  beqz        $s1, . + 4 + (0x91 << 2)
    ctx->pc = 0x248D2Cu;
    {
        const bool branch_taken_0x248d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D2Cu;
            // 0x248d30: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d2c) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248D34u;
    // 0x248d34: 0x8a630007  lwl         $v1, 0x7($s3)
    ctx->pc = 0x248d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x248d38: 0x9a630004  lwr         $v1, 0x4($s3)
    ctx->pc = 0x248d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248d3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248d40: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248D40u;
    {
        const bool branch_taken_0x248d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x248d40) {
            ctx->pc = 0x248D64u;
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D48u;
    // 0x248d48: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248d4c: 0x0  nop
    ctx->pc = 0x248d4cu;
    // NOP
label_248d50:
    // 0x248d50: 0x12200088  beqz        $s1, . + 4 + (0x88 << 2)
    ctx->pc = 0x248D50u;
    {
        const bool branch_taken_0x248d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D50u;
            // 0x248d54: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d50) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248D58u;
    // 0x248d58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248d5c: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x248D5Cu;
    {
        const bool branch_taken_0x248d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x248d5c) {
            ctx->pc = 0x248D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248D5Cu;
            // 0x248d60: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248D50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248d50;
        }
    }
    ctx->pc = 0x248D64u;
label_248d64:
    // 0x248d64: 0x12200082  beqz        $s1, . + 4 + (0x82 << 2)
    ctx->pc = 0x248D64u;
    {
        const bool branch_taken_0x248d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D64u;
            // 0x248d68: 0x26e20148  addiu       $v0, $s7, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d64) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248D6Cu;
    // 0x248d6c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x248d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x248d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248d74: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x248d74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x248d78: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x248d78u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x248d7c: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x248d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x248d80: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x248d84: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248D84u;
    {
        const bool branch_taken_0x248d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x248d84) {
            ctx->pc = 0x248D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248D84u;
            // 0x248d88: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248DA4u;
            goto label_248da4;
        }
    }
    ctx->pc = 0x248D8Cu;
    // 0x248d8c: 0x10a00078  beqz        $a1, . + 4 + (0x78 << 2)
    ctx->pc = 0x248D8Cu;
    {
        const bool branch_taken_0x248d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D8Cu;
            // 0x248d90: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d8c) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248D94u;
    // 0x248d94: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x248D94u;
    {
        const bool branch_taken_0x248d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D94u;
            // 0x248d98: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d94) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248D9Cu;
    // 0x248d9c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x248D9Cu;
    {
        const bool branch_taken_0x248d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248D9Cu;
            // 0x248da0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d9c) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248DA4u;
label_248da4:
    // 0x248da4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x248da8: 0x1065006f  beq         $v1, $a1, . + 4 + (0x6F << 2)
    ctx->pc = 0x248DA8u;
    {
        const bool branch_taken_0x248da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x248DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248DA8u;
            // 0x248dac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248da8) {
            ctx->pc = 0x248F68u;
            goto label_248f68;
        }
    }
    ctx->pc = 0x248DB0u;
    // 0x248db0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x248DB0u;
    {
        const bool branch_taken_0x248db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248DB0u;
            // 0x248db4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248db0) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248DB8u;
label_248db8:
    // 0x248db8: 0x26f20148  addiu       $s2, $s7, 0x148
    ctx->pc = 0x248db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
    // 0x248dbc: 0xde420028  ld          $v0, 0x28($s2)
    ctx->pc = 0x248dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x248dc0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248dc0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248dc4: 0xfe420028  sd          $v0, 0x28($s2)
    ctx->pc = 0x248dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 2));
    // 0x248dc8: 0x96c30030  lhu         $v1, 0x30($s6)
    ctx->pc = 0x248dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x248dcc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x248dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x248dd0: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x248DD0u;
    {
        const bool branch_taken_0x248dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248DD0u;
            // 0x248dd4: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dd0) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248DD8u;
    // 0x248dd8: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x248dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x248ddc: 0xc08a254  jal         func_228950
    ctx->pc = 0x248DDCu;
    SET_GPR_U32(ctx, 31, 0x248DE4u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DE4u; }
        if (ctx->pc != 0x248DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DE4u; }
        if (ctx->pc != 0x248DE4u) { return; }
    }
    ctx->pc = 0x248DE4u;
label_248de4:
    // 0x248de4: 0x8a710007  lwl         $s1, 0x7($s3)
    ctx->pc = 0x248de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x248de8: 0x9a710004  lwr         $s1, 0x4($s3)
    ctx->pc = 0x248de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x248dec: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x248decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x248df0: 0xc08a254  jal         func_228950
    ctx->pc = 0x248DF0u;
    SET_GPR_U32(ctx, 31, 0x248DF8u);
    ctx->pc = 0x248DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248DF0u;
            // 0x248df4: 0x2228024  and         $s0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DF8u; }
        if (ctx->pc != 0x248DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248DF8u; }
        if (ctx->pc != 0x248DF8u) { return; }
    }
    ctx->pc = 0x248DF8u;
label_248df8:
    // 0x248df8: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248DF8u;
    {
        const bool branch_taken_0x248df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x248df8) {
            ctx->pc = 0x248DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248DF8u;
            // 0x248dfc: 0xde420030  ld          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248E14u;
            goto label_248e14;
        }
    }
    ctx->pc = 0x248E00u;
    // 0x248e00: 0x8a820013  lwl         $v0, 0x13($s4)
    ctx->pc = 0x248e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x248e04: 0x9a820010  lwr         $v0, 0x10($s4)
    ctx->pc = 0x248e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x248e08: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x248E08u;
    {
        const bool branch_taken_0x248e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x248e08) {
            ctx->pc = 0x248E2Cu;
            goto label_248e2c;
        }
    }
    ctx->pc = 0x248E10u;
    // 0x248e10: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x248e10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_248e14:
    // 0x248e14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e18: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248e18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248e1c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x248E1Cu;
    SET_GPR_U32(ctx, 31, 0x248E24u);
    ctx->pc = 0x248E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248E1Cu;
            // 0x248e20: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E24u; }
        if (ctx->pc != 0x248E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E24u; }
        if (ctx->pc != 0x248E24u) { return; }
    }
    ctx->pc = 0x248E24u;
label_248e24:
    // 0x248e24: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x248E24u;
    {
        const bool branch_taken_0x248e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248E24u;
            // 0x248e28: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e24) {
            ctx->pc = 0x248F84u;
            goto label_248f84;
        }
    }
    ctx->pc = 0x248E2Cu;
label_248e2c:
    // 0x248e2c: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x248e30: 0xc08a254  jal         func_228950
    ctx->pc = 0x248E30u;
    SET_GPR_U32(ctx, 31, 0x248E38u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E38u; }
        if (ctx->pc != 0x248E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248E38u; }
        if (ctx->pc != 0x248E38u) { return; }
    }
    ctx->pc = 0x248E38u;
label_248e38:
    // 0x248e38: 0x8a83000f  lwl         $v1, 0xF($s4)
    ctx->pc = 0x248e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x248e3c: 0x9a83000c  lwr         $v1, 0xC($s4)
    ctx->pc = 0x248e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248e40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x248e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x248e44: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x248E44u;
    {
        const bool branch_taken_0x248e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248E44u;
            // 0x248e48: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e44) {
            ctx->pc = 0x248EA0u;
            goto label_248ea0;
        }
    }
    ctx->pc = 0x248E4Cu;
    // 0x248e4c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x248E4Cu;
    {
        const bool branch_taken_0x248e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248E4Cu;
            // 0x248e50: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e4c) {
            ctx->pc = 0x248E88u;
            goto label_248e88;
        }
    }
    ctx->pc = 0x248E54u;
    // 0x248e54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x248e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x248e58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248e5c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248e5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248e60: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248E60u;
    {
        const bool branch_taken_0x248e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x248e60) {
            ctx->pc = 0x248E88u;
            goto label_248e88;
        }
    }
    ctx->pc = 0x248E68u;
    // 0x248e68: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x248e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x248e6c: 0x0  nop
    ctx->pc = 0x248e6cu;
    // NOP
label_248e70:
    // 0x248e70: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x248E70u;
    {
        const bool branch_taken_0x248e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e70) {
            ctx->pc = 0x248E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248E70u;
            // 0x248e74: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248EA4u;
            goto label_248ea4;
        }
    }
    ctx->pc = 0x248E78u;
    // 0x248e78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248e7c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248e7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248e80: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248E80u;
    {
        const bool branch_taken_0x248e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x248e80) {
            ctx->pc = 0x248E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248E80u;
            // 0x248e84: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248e70;
        }
    }
    ctx->pc = 0x248E88u;
label_248e88:
    // 0x248e88: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x248E88u;
    {
        const bool branch_taken_0x248e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x248e88) {
            ctx->pc = 0x248E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248E88u;
            // 0x248e8c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248EA4u;
            goto label_248ea4;
        }
    }
    ctx->pc = 0x248E90u;
    // 0x248e90: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x248e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x248e94: 0xaa82000f  swl         $v0, 0xF($s4)
    ctx->pc = 0x248e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248e98: 0xba82000c  swr         $v0, 0xC($s4)
    ctx->pc = 0x248e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x248e9c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x248e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_248ea0:
    // 0x248ea0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x248ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_248ea4:
    // 0x248ea4: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x248EA4u;
    {
        const bool branch_taken_0x248ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248EA4u;
            // 0x248ea8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ea4) {
            ctx->pc = 0x248F24u;
            goto label_248f24;
        }
    }
    ctx->pc = 0x248EACu;
    // 0x248eac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248eb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x248eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248eb4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248eb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248eb8: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248EB8u;
    {
        const bool branch_taken_0x248eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x248eb8) {
            ctx->pc = 0x248EE0u;
            goto label_248ee0;
        }
    }
    ctx->pc = 0x248EC0u;
    // 0x248ec0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x248ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x248ec4: 0x0  nop
    ctx->pc = 0x248ec4u;
    // NOP
label_248ec8:
    // 0x248ec8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x248EC8u;
    {
        const bool branch_taken_0x248ec8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248EC8u;
            // 0x248ecc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ec8) {
            ctx->pc = 0x248F24u;
            goto label_248f24;
        }
    }
    ctx->pc = 0x248ED0u;
    // 0x248ed0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x248ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x248ed4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x248ed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x248ed8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x248ED8u;
    {
        const bool branch_taken_0x248ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x248ed8) {
            ctx->pc = 0x248EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248ED8u;
            // 0x248edc: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248ec8;
        }
    }
    ctx->pc = 0x248EE0u;
label_248ee0:
    // 0x248ee0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x248EE0u;
    {
        const bool branch_taken_0x248ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248EE0u;
            // 0x248ee4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ee0) {
            ctx->pc = 0x248F24u;
            goto label_248f24;
        }
    }
    ctx->pc = 0x248EE8u;
    // 0x248ee8: 0x8cb1008c  lw          $s1, 0x8C($a1)
    ctx->pc = 0x248ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x248eec: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x248EECu;
    {
        const bool branch_taken_0x248eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248EECu;
            // 0x248ef0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248eec) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248EF4u;
    // 0x248ef4: 0x8a630007  lwl         $v1, 0x7($s3)
    ctx->pc = 0x248ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x248ef8: 0x9a630004  lwr         $v1, 0x4($s3)
    ctx->pc = 0x248ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x248efc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248f00: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x248F00u;
    {
        const bool branch_taken_0x248f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x248f00) {
            ctx->pc = 0x248F24u;
            goto label_248f24;
        }
    }
    ctx->pc = 0x248F08u;
    // 0x248f08: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x248f08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x248f0c: 0x0  nop
    ctx->pc = 0x248f0cu;
    // NOP
label_248f10:
    // 0x248f10: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x248F10u;
    {
        const bool branch_taken_0x248f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F10u;
            // 0x248f14: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f10) {
            ctx->pc = 0x248F74u;
            goto label_248f74;
        }
    }
    ctx->pc = 0x248F18u;
    // 0x248f18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x248f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x248f1c: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x248F1Cu;
    {
        const bool branch_taken_0x248f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x248f1c) {
            ctx->pc = 0x248F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x248F1Cu;
            // 0x248f20: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x248F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248f10;
        }
    }
    ctx->pc = 0x248F24u;
label_248f24:
    // 0x248f24: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x248F24u;
    {
        const bool branch_taken_0x248f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F24u;
            // 0x248f28: 0x26e40148  addiu       $a0, $s7, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f24) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248F2Cu;
    // 0x248f2c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x248f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x248f30: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x248f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x248f34: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x248f34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x248f38: 0xfc820038  sd          $v0, 0x38($a0)
    ctx->pc = 0x248f38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
    // 0x248f3c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x248f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x248f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x248f44: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x248f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x248f48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x248F48u;
    {
        const bool branch_taken_0x248f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248F48u;
            // 0x248f4c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248f48) {
            ctx->pc = 0x248F70u;
            goto label_248f70;
        }
    }
    ctx->pc = 0x248F50u;
    // 0x248f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248f54: 0x24426ac0  addiu       $v0, $v0, 0x6AC0
    ctx->pc = 0x248f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27328));
    // 0x248f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248f5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248f60: 0x800008  jr          $a0
    ctx->pc = 0x248F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248F68u: goto label_248f68;
            case 0x248F70u: goto label_248f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x248F68u;
label_248f68:
    // 0x248f68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x248f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x248f6c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x248f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_248f70:
    // 0x248f70: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x248f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_248f74:
    // 0x248f74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x248f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_248f78:
    // 0x248f78: 0xc094a0e  jal         func_252838
    ctx->pc = 0x248F78u;
    SET_GPR_U32(ctx, 31, 0x248F80u);
    ctx->pc = 0x248F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248F78u;
            // 0x248f7c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252838u;
    if (runtime->hasFunction(0x252838u)) {
        auto targetFn = runtime->lookupFunction(0x252838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F80u; }
        if (ctx->pc != 0x248F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252838_0x252838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248F80u; }
        if (ctx->pc != 0x248F80u) { return; }
    }
    ctx->pc = 0x248F80u;
label_248f80:
    // 0x248f80: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x248f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_248f84:
    // 0x248f84: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x248f84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248f88: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x248f88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x248f8c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x248f8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248f90: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x248f90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248f94: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248f98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x248f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x248f9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248fa0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x248fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248fa4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x248fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x248FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248FA8u;
            // 0x248fac: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x248FB0u;
    ctx->pc = 0x248fb0u;
}
