#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002154E8
// Address: 0x2154e8 - 0x215650
void sub_002154E8_0x2154e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002154E8_0x2154e8");
#endif

    switch (ctx->pc) {
        case 0x215504u: goto label_215504;
        case 0x215518u: goto label_215518;
        case 0x215538u: goto label_215538;
        case 0x21557cu: goto label_21557c;
        case 0x215590u: goto label_215590;
        case 0x2155a0u: goto label_2155a0;
        case 0x2155c8u: goto label_2155c8;
        case 0x21560cu: goto label_21560c;
        case 0x215620u: goto label_215620;
        case 0x215628u: goto label_215628;
        default: break;
    }

    ctx->pc = 0x2154e8u;

label_2154e8:
    // 0x2154e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2154ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2154ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2154f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2154f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2154f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2154f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2154f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2154fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2154FCu;
    SET_GPR_U32(ctx, 31, 0x215504u);
    ctx->pc = 0x215500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154FCu;
            // 0x215500: 0x24840a98  addiu       $a0, $a0, 0xA98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215504u; }
        if (ctx->pc != 0x215504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215504u; }
        if (ctx->pc != 0x215504u) { return; }
    }
    ctx->pc = 0x215504u;
label_215504:
    // 0x215504: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21550c: 0x24840868  addiu       $a0, $a0, 0x868
    ctx->pc = 0x21550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    // 0x215510: 0xc043e52  jal         func_10F948
    ctx->pc = 0x215510u;
    SET_GPR_U32(ctx, 31, 0x215518u);
    ctx->pc = 0x215514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215510u;
            // 0x215514: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215518u; }
        if (ctx->pc != 0x215518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215518u; }
        if (ctx->pc != 0x215518u) { return; }
    }
    ctx->pc = 0x215518u;
label_215518:
    // 0x215518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21551c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215520: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215528: 0x24840a48  addiu       $a0, $a0, 0xA48
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2632));
    // 0x21552c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21552Cu;
    ctx->pc = 0x215530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21552Cu;
            // 0x215530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x215534u;
    // 0x215534: 0x0  nop
    ctx->pc = 0x215534u;
    // NOP
label_215538:
    // 0x215538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21553c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21553cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215544: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x215548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21554c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21554cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215550: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215554: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21555c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21555cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215560: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x215564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x215564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215568: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x215568u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21556c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x215570: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x215570u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x215574: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x215574u;
    SET_GPR_U32(ctx, 31, 0x21557Cu);
    ctx->pc = 0x215578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215574u;
            // 0x215578: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21557Cu; }
        if (ctx->pc != 0x21557Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21557Cu; }
        if (ctx->pc != 0x21557Cu) { return; }
    }
    ctx->pc = 0x21557Cu;
label_21557c:
    // 0x21557c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215580: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215588: 0xc08449a  jal         func_211268
    ctx->pc = 0x215588u;
    SET_GPR_U32(ctx, 31, 0x215590u);
    ctx->pc = 0x21558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215588u;
            // 0x21558c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215590u; }
        if (ctx->pc != 0x215590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215590u; }
        if (ctx->pc != 0x215590u) { return; }
    }
    ctx->pc = 0x215590u;
label_215590:
    // 0x215590: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x215594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215598: 0xc08553a  jal         func_2154E8
    ctx->pc = 0x215598u;
    SET_GPR_U32(ctx, 31, 0x2155A0u);
    ctx->pc = 0x21559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215598u;
            // 0x21559c: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2154E8u;
    goto label_2154e8;
    ctx->pc = 0x2155A0u;
label_2155a0:
    // 0x2155a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2155a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2155a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2155a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2155a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2155ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2155acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2155b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2155b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2155b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2155b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2155b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2155b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2155bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2155BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2155BCu;
            // 0x2155c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2155C4u;
    // 0x2155c4: 0x0  nop
    ctx->pc = 0x2155c4u;
    // NOP
label_2155c8:
    // 0x2155c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2155cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2155ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2155d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2155d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2155d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2155d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2155d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2155d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2155dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2155dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2155e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2155e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2155e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2155e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2155e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2155ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2155f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2155f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155f4: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2155f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2155f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2155f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155fc: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215600: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x215600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x215604: 0xc084582  jal         func_211608
    ctx->pc = 0x215604u;
    SET_GPR_U32(ctx, 31, 0x21560Cu);
    ctx->pc = 0x215608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215604u;
            // 0x215608: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21560Cu; }
        if (ctx->pc != 0x21560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21560Cu; }
        if (ctx->pc != 0x21560Cu) { return; }
    }
    ctx->pc = 0x21560Cu;
label_21560c:
    // 0x21560c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21560cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215610: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x215610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215618: 0xc0845c2  jal         func_211708
    ctx->pc = 0x215618u;
    SET_GPR_U32(ctx, 31, 0x215620u);
    ctx->pc = 0x21561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215618u;
            // 0x21561c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215620u; }
        if (ctx->pc != 0x215620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215620u; }
        if (ctx->pc != 0x215620u) { return; }
    }
    ctx->pc = 0x215620u;
label_215620:
    // 0x215620: 0xc08553a  jal         func_2154E8
    ctx->pc = 0x215620u;
    SET_GPR_U32(ctx, 31, 0x215628u);
    ctx->pc = 0x215624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215620u;
            // 0x215624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2154E8u;
    goto label_2154e8;
    ctx->pc = 0x215628u;
label_215628:
    // 0x215628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21562c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21562cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215630: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x215630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x215634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21563c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21563cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215644: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215648: 0x3e00008  jr          $ra
    ctx->pc = 0x215648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215648u;
            // 0x21564c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215650u;
    ctx->pc = 0x215650u;
}
