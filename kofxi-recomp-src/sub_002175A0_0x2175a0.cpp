#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002175A0
// Address: 0x2175a0 - 0x217698
void sub_002175A0_0x2175a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175A0_0x2175a0");
#endif

    switch (ctx->pc) {
        case 0x2175bcu: goto label_2175bc;
        case 0x2175d8u: goto label_2175d8;
        case 0x21760cu: goto label_21760c;
        case 0x21761cu: goto label_21761c;
        case 0x217638u: goto label_217638;
        case 0x21766cu: goto label_21766c;
        case 0x217674u: goto label_217674;
        default: break;
    }

    ctx->pc = 0x2175a0u;

label_2175a0:
    // 0x2175a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2175a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2175a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2175a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2175a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2175a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2175ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2175acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2175b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2175b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2175B4u;
    SET_GPR_U32(ctx, 31, 0x2175BCu);
    ctx->pc = 0x2175B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175B4u;
            // 0x2175b8: 0x24840ea8  addiu       $a0, $a0, 0xEA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175BCu; }
        if (ctx->pc != 0x2175BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175BCu; }
        if (ctx->pc != 0x2175BCu) { return; }
    }
    ctx->pc = 0x2175BCu;
label_2175bc:
    // 0x2175bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2175c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2175c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2175c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2175c8: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x2175c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x2175cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2175ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2175d0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2175D0u;
    ctx->pc = 0x2175D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175D0u;
            // 0x2175d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2175D8u;
label_2175d8:
    // 0x2175d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2175d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2175dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2175dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2175e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2175e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2175e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2175e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2175e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2175e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2175ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2175ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2175f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2175f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2175f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175f8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2175f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2175fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2175fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217600: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x217600u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217604: 0xc0844dc  jal         func_211370
    ctx->pc = 0x217604u;
    SET_GPR_U32(ctx, 31, 0x21760Cu);
    ctx->pc = 0x217608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217604u;
            // 0x217608: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21760Cu; }
        if (ctx->pc != 0x21760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21760Cu; }
        if (ctx->pc != 0x21760Cu) { return; }
    }
    ctx->pc = 0x21760Cu;
label_21760c:
    // 0x21760c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217614: 0xc085d68  jal         func_2175A0
    ctx->pc = 0x217614u;
    SET_GPR_U32(ctx, 31, 0x21761Cu);
    ctx->pc = 0x217618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217614u;
            // 0x217618: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2175A0u;
    goto label_2175a0;
    ctx->pc = 0x21761Cu;
label_21761c:
    // 0x21761c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21761cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21762c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21762cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217630: 0x3e00008  jr          $ra
    ctx->pc = 0x217630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217630u;
            // 0x217634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217638u;
label_217638:
    // 0x217638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21763c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21763cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x217640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x217644: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x217644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21764c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217658: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x217658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21765c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21765cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217660: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217660u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217664: 0xc084612  jal         func_211848
    ctx->pc = 0x217664u;
    SET_GPR_U32(ctx, 31, 0x21766Cu);
    ctx->pc = 0x217668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217664u;
            // 0x217668: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21766Cu; }
        if (ctx->pc != 0x21766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21766Cu; }
        if (ctx->pc != 0x21766Cu) { return; }
    }
    ctx->pc = 0x21766Cu;
label_21766c:
    // 0x21766c: 0xc085d68  jal         func_2175A0
    ctx->pc = 0x21766Cu;
    SET_GPR_U32(ctx, 31, 0x217674u);
    ctx->pc = 0x217670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21766Cu;
            // 0x217670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2175A0u;
    goto label_2175a0;
    ctx->pc = 0x217674u;
label_217674:
    // 0x217674: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x217678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21767c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x217680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217688: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21768c: 0x3e00008  jr          $ra
    ctx->pc = 0x21768Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21768Cu;
            // 0x217690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217694u;
    // 0x217694: 0x0  nop
    ctx->pc = 0x217694u;
    // NOP
    ctx->pc = 0x217698u;
}
