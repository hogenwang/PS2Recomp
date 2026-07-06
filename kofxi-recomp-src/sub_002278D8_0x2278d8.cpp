#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002278D8
// Address: 0x2278d8 - 0x227a00
void sub_002278D8_0x2278d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278D8_0x2278d8");
#endif

    switch (ctx->pc) {
        case 0x2278d8u: goto label_2278d8;
        case 0x2278dcu: goto label_2278dc;
        case 0x2278e0u: goto label_2278e0;
        case 0x2278e4u: goto label_2278e4;
        case 0x2278e8u: goto label_2278e8;
        case 0x2278ecu: goto label_2278ec;
        case 0x2278f0u: goto label_2278f0;
        case 0x2278f4u: goto label_2278f4;
        case 0x2278f8u: goto label_2278f8;
        case 0x2278fcu: goto label_2278fc;
        case 0x227900u: goto label_227900;
        case 0x227904u: goto label_227904;
        case 0x227908u: goto label_227908;
        case 0x22790cu: goto label_22790c;
        case 0x227910u: goto label_227910;
        case 0x227914u: goto label_227914;
        case 0x227918u: goto label_227918;
        case 0x22791cu: goto label_22791c;
        case 0x227920u: goto label_227920;
        case 0x227924u: goto label_227924;
        case 0x227928u: goto label_227928;
        case 0x22792cu: goto label_22792c;
        case 0x227930u: goto label_227930;
        case 0x227934u: goto label_227934;
        case 0x227938u: goto label_227938;
        case 0x22793cu: goto label_22793c;
        case 0x227940u: goto label_227940;
        case 0x227944u: goto label_227944;
        case 0x227948u: goto label_227948;
        case 0x22794cu: goto label_22794c;
        case 0x227950u: goto label_227950;
        case 0x227954u: goto label_227954;
        case 0x227958u: goto label_227958;
        case 0x22795cu: goto label_22795c;
        case 0x227960u: goto label_227960;
        case 0x227964u: goto label_227964;
        case 0x227968u: goto label_227968;
        case 0x22796cu: goto label_22796c;
        case 0x227970u: goto label_227970;
        case 0x227974u: goto label_227974;
        case 0x227978u: goto label_227978;
        case 0x22797cu: goto label_22797c;
        case 0x227980u: goto label_227980;
        case 0x227984u: goto label_227984;
        case 0x227988u: goto label_227988;
        case 0x22798cu: goto label_22798c;
        case 0x227990u: goto label_227990;
        case 0x227994u: goto label_227994;
        case 0x227998u: goto label_227998;
        case 0x22799cu: goto label_22799c;
        case 0x2279a0u: goto label_2279a0;
        case 0x2279a4u: goto label_2279a4;
        case 0x2279a8u: goto label_2279a8;
        case 0x2279acu: goto label_2279ac;
        case 0x2279b0u: goto label_2279b0;
        case 0x2279b4u: goto label_2279b4;
        case 0x2279b8u: goto label_2279b8;
        case 0x2279bcu: goto label_2279bc;
        case 0x2279c0u: goto label_2279c0;
        case 0x2279c4u: goto label_2279c4;
        case 0x2279c8u: goto label_2279c8;
        case 0x2279ccu: goto label_2279cc;
        case 0x2279d0u: goto label_2279d0;
        case 0x2279d4u: goto label_2279d4;
        case 0x2279d8u: goto label_2279d8;
        case 0x2279dcu: goto label_2279dc;
        case 0x2279e0u: goto label_2279e0;
        case 0x2279e4u: goto label_2279e4;
        case 0x2279e8u: goto label_2279e8;
        case 0x2279ecu: goto label_2279ec;
        case 0x2279f0u: goto label_2279f0;
        case 0x2279f4u: goto label_2279f4;
        case 0x2279f8u: goto label_2279f8;
        case 0x2279fcu: goto label_2279fc;
        default: break;
    }

    ctx->pc = 0x2278d8u;

label_2278d8:
    // 0x2278d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2278dc:
    // 0x2278dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2278dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_2278e0:
    // 0x2278e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2278e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2278e4:
    // 0x2278e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2278e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2278e8:
    // 0x2278e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2278e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2278ec:
    // 0x2278ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2278ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2278f0:
    // 0x2278f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2278f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2278f4:
    // 0x2278f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2278f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2278f8:
    // 0x2278f8: 0x8deff1f0  lw          $t7, -0xE10($t7)
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963696)));
label_2278fc:
    // 0x2278fc: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_227900:
    if (ctx->pc == 0x227900u) {
        ctx->pc = 0x227900u;
            // 0x227900: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227904u;
        goto label_227904;
    }
    ctx->pc = 0x2278FCu;
    {
        const bool branch_taken_0x2278fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x227900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2278FCu;
            // 0x227900: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278fc) {
            ctx->pc = 0x227958u;
            goto label_227958;
        }
    }
    ctx->pc = 0x227904u;
label_227904:
    // 0x227904: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x227904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_227908:
    // 0x227908: 0x1e0f809  jalr        $t7
label_22790c:
    if (ctx->pc == 0x22790Cu) {
        ctx->pc = 0x22790Cu;
            // 0x22790c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x227910u;
        goto label_227910;
    }
    ctx->pc = 0x227908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x227910u);
        ctx->pc = 0x22790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227908u;
            // 0x22790c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x227910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x227910u; }
            if (ctx->pc != 0x227910u) { return; }
        }
        }
    }
    ctx->pc = 0x227910u;
label_227910:
    // 0x227910: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_227914:
    // 0x227914: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_227918:
    // 0x227918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22791c:
    // 0x22791c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22791cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227920:
    // 0x227920: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x227920u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227924:
    // 0x227924: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x227924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_227928:
    // 0x227928: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x227928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22792c:
    // 0x22792c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x22792cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227930:
    // 0x227930: 0x248441e8  addiu       $a0, $a0, 0x41E8
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16872));
label_227934:
    // 0x227934: 0xc0897d6  jal         func_225F58
label_227938:
    if (ctx->pc == 0x227938u) {
        ctx->pc = 0x227938u;
            // 0x227938: 0x24e741f8  addiu       $a3, $a3, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16888));
        ctx->pc = 0x22793Cu;
        goto label_22793c;
    }
    ctx->pc = 0x227934u;
    SET_GPR_U32(ctx, 31, 0x22793Cu);
    ctx->pc = 0x227938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227934u;
            // 0x227938: 0x24e741f8  addiu       $a3, $a3, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22793Cu; }
        if (ctx->pc != 0x22793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22793Cu; }
        if (ctx->pc != 0x22793Cu) { return; }
    }
    ctx->pc = 0x22793Cu;
label_22793c:
    // 0x22793c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22793cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227940:
    // 0x227940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x227940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_227944:
    // 0x227944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227948:
    // 0x227948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x227948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22794c:
    // 0x22794c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_227950:
    // 0x227950: 0x3e00008  jr          $ra
label_227954:
    if (ctx->pc == 0x227954u) {
        ctx->pc = 0x227954u;
            // 0x227954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x227958u;
        goto label_227958;
    }
    ctx->pc = 0x227950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227950u;
            // 0x227954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227958u;
label_227958:
    // 0x227958: 0xc049902  jal         func_126408
label_22795c:
    if (ctx->pc == 0x22795Cu) {
        ctx->pc = 0x227960u;
        goto label_227960;
    }
    ctx->pc = 0x227958u;
    SET_GPR_U32(ctx, 31, 0x227960u);
    ctx->pc = 0x126408u;
    if (runtime->hasFunction(0x126408u)) {
        auto targetFn = runtime->lookupFunction(0x126408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227960u; }
        if (ctx->pc != 0x227960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126408_0x126408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227960u; }
        if (ctx->pc != 0x227960u) { return; }
    }
    ctx->pc = 0x227960u;
label_227960:
    // 0x227960: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_227964:
    if (ctx->pc == 0x227964u) {
        ctx->pc = 0x227964u;
            // 0x227964: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x227968u;
        goto label_227968;
    }
    ctx->pc = 0x227960u;
    {
        const bool branch_taken_0x227960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227960u;
            // 0x227964: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227960) {
            ctx->pc = 0x227914u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227914;
        }
    }
    ctx->pc = 0x227968u;
label_227968:
    // 0x227968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22796c:
    // 0x22796c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_227970:
    // 0x227970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_227974:
    // 0x227974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x227974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_227978:
    // 0x227978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x227978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_22797c:
    // 0x22797c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22797cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_227980:
    // 0x227980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_227984:
    // 0x227984: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x227984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227988:
    // 0x227988: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22798c:
    // 0x22798c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22798cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227990:
    // 0x227990: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x227990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_227994:
    // 0x227994: 0x8deff1f4  lw          $t7, -0xE0C($t7)
    ctx->pc = 0x227994u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963700)));
label_227998:
    // 0x227998: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
label_22799c:
    if (ctx->pc == 0x22799Cu) {
        ctx->pc = 0x22799Cu;
            // 0x22799c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2279A0u;
        goto label_2279a0;
    }
    ctx->pc = 0x227998u;
    {
        const bool branch_taken_0x227998 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x22799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227998u;
            // 0x22799c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227998) {
            ctx->pc = 0x2279CCu;
            goto label_2279cc;
        }
    }
    ctx->pc = 0x2279A0u;
label_2279a0:
    // 0x2279a0: 0x1e0f809  jalr        $t7
label_2279a4:
    if (ctx->pc == 0x2279A4u) {
        ctx->pc = 0x2279A4u;
            // 0x2279a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2279A8u;
        goto label_2279a8;
    }
    ctx->pc = 0x2279A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2279A8u);
        ctx->pc = 0x2279A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279A0u;
            // 0x2279a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2279A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2279A8u; }
            if (ctx->pc != 0x2279A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2279A8u;
label_2279a8:
    // 0x2279a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2279a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2279ac:
    // 0x2279ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2279acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2279b0:
    // 0x2279b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2279b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2279b4:
    // 0x2279b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2279b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2279b8:
    // 0x2279b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2279b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2279bc:
    // 0x2279bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2279bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2279c0:
    // 0x2279c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2279c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2279c4:
    // 0x2279c4: 0x3e00008  jr          $ra
label_2279c8:
    if (ctx->pc == 0x2279C8u) {
        ctx->pc = 0x2279C8u;
            // 0x2279c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2279CCu;
        goto label_2279cc;
    }
    ctx->pc = 0x2279C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2279C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279C4u;
            // 0x2279c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2279CCu;
label_2279cc:
    // 0x2279cc: 0xc089e36  jal         func_2278D8
label_2279d0:
    if (ctx->pc == 0x2279D0u) {
        ctx->pc = 0x2279D4u;
        goto label_2279d4;
    }
    ctx->pc = 0x2279CCu;
    SET_GPR_U32(ctx, 31, 0x2279D4u);
    ctx->pc = 0x2278D8u;
    goto label_2278d8;
    ctx->pc = 0x2279D4u;
label_2279d4:
    // 0x2279d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2279d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2279d8:
    // 0x2279d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2279d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2279dc:
    // 0x2279dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2279dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2279e0:
    // 0x2279e0: 0xc049c48  jal         func_127120
label_2279e4:
    if (ctx->pc == 0x2279E4u) {
        ctx->pc = 0x2279E4u;
            // 0x2279e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2279E8u;
        goto label_2279e8;
    }
    ctx->pc = 0x2279E0u;
    SET_GPR_U32(ctx, 31, 0x2279E8u);
    ctx->pc = 0x2279E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279E0u;
            // 0x2279e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E8u; }
        if (ctx->pc != 0x2279E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279E8u; }
        if (ctx->pc != 0x2279E8u) { return; }
    }
    ctx->pc = 0x2279E8u;
label_2279e8:
    // 0x2279e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2279e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2279ec:
    // 0x2279ec: 0xc089e80  jal         func_227A00
label_2279f0:
    if (ctx->pc == 0x2279F0u) {
        ctx->pc = 0x2279F0u;
            // 0x2279f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2279F4u;
        goto label_2279f4;
    }
    ctx->pc = 0x2279ECu;
    SET_GPR_U32(ctx, 31, 0x2279F4u);
    ctx->pc = 0x2279F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2279ECu;
            // 0x2279f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (runtime->hasFunction(0x227A00u)) {
        auto targetFn = runtime->lookupFunction(0x227A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279F4u; }
        if (ctx->pc != 0x2279F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A00_0x227a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2279F4u; }
        if (ctx->pc != 0x2279F4u) { return; }
    }
    ctx->pc = 0x2279F4u;
label_2279f4:
    // 0x2279f4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_2279f8:
    if (ctx->pc == 0x2279F8u) {
        ctx->pc = 0x2279F8u;
            // 0x2279f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2279FCu;
        goto label_2279fc;
    }
    ctx->pc = 0x2279F4u;
    {
        const bool branch_taken_0x2279f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2279F4u;
            // 0x2279f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279f4) {
            ctx->pc = 0x2279B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2279b0;
        }
    }
    ctx->pc = 0x2279FCu;
label_2279fc:
    // 0x2279fc: 0x0  nop
    ctx->pc = 0x2279fcu;
    // NOP
    ctx->pc = 0x227a00u;
}
