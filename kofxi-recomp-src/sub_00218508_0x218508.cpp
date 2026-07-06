#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218508
// Address: 0x218508 - 0x218600
void sub_00218508_0x218508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218508_0x218508");
#endif

    switch (ctx->pc) {
        case 0x218524u: goto label_218524;
        case 0x218540u: goto label_218540;
        case 0x218574u: goto label_218574;
        case 0x218584u: goto label_218584;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185d4u: goto label_2185d4;
        case 0x2185dcu: goto label_2185dc;
        default: break;
    }

    ctx->pc = 0x218508u;

label_218508:
    // 0x218508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21850c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218510: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x218510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x218514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218518: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21851c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21851Cu;
    SET_GPR_U32(ctx, 31, 0x218524u);
    ctx->pc = 0x218520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21851Cu;
            // 0x218520: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218524u; }
        if (ctx->pc != 0x218524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218524u; }
        if (ctx->pc != 0x218524u) { return; }
    }
    ctx->pc = 0x218524u;
label_218524:
    // 0x218524: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x218524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218528: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21852c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218530: 0x24841050  addiu       $a0, $a0, 0x1050
    ctx->pc = 0x218530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    // 0x218534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218538: 0x8043e52  j           func_10F948
    ctx->pc = 0x218538u;
    ctx->pc = 0x21853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218538u;
            // 0x21853c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218540u;
label_218540:
    // 0x218540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218544: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218544u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21854c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x218550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218554: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21855c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21855cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218560: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218560u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x218564: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218568: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x218568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21856c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21856Cu;
    SET_GPR_U32(ctx, 31, 0x218574u);
    ctx->pc = 0x218570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21856Cu;
            // 0x218570: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218574u; }
        if (ctx->pc != 0x218574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218574u; }
        if (ctx->pc != 0x218574u) { return; }
    }
    ctx->pc = 0x218574u;
label_218574:
    // 0x218574: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x218578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21857c: 0xc086142  jal         func_218508
    ctx->pc = 0x21857Cu;
    SET_GPR_U32(ctx, 31, 0x218584u);
    ctx->pc = 0x218580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21857Cu;
            // 0x218580: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218508u;
    goto label_218508;
    ctx->pc = 0x218584u;
label_218584:
    // 0x218584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x218584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21858c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21858cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218594: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x218594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218598: 0x3e00008  jr          $ra
    ctx->pc = 0x218598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218598u;
            // 0x21859c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2185A0u;
label_2185a0:
    // 0x2185a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2185a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2185a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2185a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2185a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2185ac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2185acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2185b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2185b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2185b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2185b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2185b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2185bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2185bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2185c0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2185c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2185c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185c8: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2185c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2185cc: 0xc084612  jal         func_211848
    ctx->pc = 0x2185CCu;
    SET_GPR_U32(ctx, 31, 0x2185D4u);
    ctx->pc = 0x2185D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185CCu;
            // 0x2185d0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185D4u; }
        if (ctx->pc != 0x2185D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2185D4u; }
        if (ctx->pc != 0x2185D4u) { return; }
    }
    ctx->pc = 0x2185D4u;
label_2185d4:
    // 0x2185d4: 0xc086142  jal         func_218508
    ctx->pc = 0x2185D4u;
    SET_GPR_U32(ctx, 31, 0x2185DCu);
    ctx->pc = 0x2185D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2185D4u;
            // 0x2185d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218508u;
    goto label_218508;
    ctx->pc = 0x2185DCu;
label_2185dc:
    // 0x2185dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2185dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2185e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2185e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2185e4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2185e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2185e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2185e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2185ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2185ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2185f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2185f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2185f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2185F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2185F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2185F4u;
            // 0x2185f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2185FCu;
    // 0x2185fc: 0x0  nop
    ctx->pc = 0x2185fcu;
    // NOP
    ctx->pc = 0x218600u;
}
