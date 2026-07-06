#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD8B8
// Address: 0x1fd8b8 - 0x1fd988
void sub_001FD8B8_0x1fd8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD8B8_0x1fd8b8");
#endif

    switch (ctx->pc) {
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        case 0x1fd940u: goto label_1fd940;
        case 0x1fd944u: goto label_1fd944;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd94cu: goto label_1fd94c;
        case 0x1fd950u: goto label_1fd950;
        case 0x1fd954u: goto label_1fd954;
        case 0x1fd958u: goto label_1fd958;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fd964u: goto label_1fd964;
        case 0x1fd968u: goto label_1fd968;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd970u: goto label_1fd970;
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd97cu: goto label_1fd97c;
        case 0x1fd980u: goto label_1fd980;
        case 0x1fd984u: goto label_1fd984;
        default: break;
    }

    ctx->pc = 0x1fd8b8u;

label_1fd8b8:
    // 0x1fd8b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fd8bc:
    // 0x1fd8bc: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1fd8c0:
    // 0x1fd8c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fd8c4:
    // 0x1fd8c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1fd8c8:
    // 0x1fd8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd8cc:
    // 0x1fd8cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fd8d0:
    // 0x1fd8d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fd8d4:
    // 0x1fd8d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1fd8d8:
    // 0x1fd8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd8dc:
    // 0x1fd8dc: 0xac651f98  sw          $a1, 0x1F98($v1)
    ctx->pc = 0x1fd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8088), GPR_U32(ctx, 5));
label_1fd8e0:
    // 0x1fd8e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fd8e4:
    // 0x1fd8e4: 0x3e00008  jr          $ra
label_1fd8e8:
    if (ctx->pc == 0x1FD8E8u) {
        ctx->pc = 0x1FD8E8u;
            // 0x1fd8e8: 0xac8613b8  sw          $a2, 0x13B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5048), GPR_U32(ctx, 6));
        ctx->pc = 0x1FD8ECu;
        goto label_1fd8ec;
    }
    ctx->pc = 0x1FD8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8E4u;
            // 0x1fd8e8: 0xac8613b8  sw          $a2, 0x13B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5048), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD8ECu;
label_1fd8ec:
    // 0x1fd8ec: 0x0  nop
    ctx->pc = 0x1fd8ecu;
    // NOP
label_1fd8f0:
    // 0x1fd8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fd8f4:
    // 0x1fd8f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fd8f8:
    // 0x1fd8f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd8fc:
    // 0x1fd8fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fd900:
    // 0x1fd900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd904:
    // 0x1fd904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fd908:
    // 0x1fd908: 0x26501f88  addiu       $s0, $s2, 0x1F88
    ctx->pc = 0x1fd908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8072));
label_1fd90c:
    // 0x1fd90c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fd910:
    // 0x1fd910: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fd910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd914:
    // 0x1fd914: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fd914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fd918:
    // 0x1fd918: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1fd91c:
    // 0x1fd91c: 0x0  nop
    ctx->pc = 0x1fd91cu;
    // NOP
label_1fd920:
    // 0x1fd920: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1fd920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1fd924:
    // 0x1fd924: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1fd928:
    if (ctx->pc == 0x1FD928u) {
        ctx->pc = 0x1FD928u;
            // 0x1fd928: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1FD92Cu;
        goto label_1fd92c;
    }
    ctx->pc = 0x1FD924u;
    {
        const bool branch_taken_0x1fd924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD924u;
            // 0x1fd928: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd924) {
            ctx->pc = 0x1FD968u;
            goto label_1fd968;
        }
    }
    ctx->pc = 0x1FD92Cu;
label_1fd92c:
    // 0x1fd92c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fd930:
    // 0x1fd930: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1fd934:
    // 0x1fd934: 0x0  nop
    ctx->pc = 0x1fd934u;
    // NOP
label_1fd938:
    // 0x1fd938: 0x0  nop
    ctx->pc = 0x1fd938u;
    // NOP
label_1fd93c:
    // 0x1fd93c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_1fd940:
    if (ctx->pc == 0x1FD940u) {
        ctx->pc = 0x1FD940u;
            // 0x1fd940: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x1FD944u;
        goto label_1fd944;
    }
    ctx->pc = 0x1FD93Cu;
    {
        const bool branch_taken_0x1fd93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD93Cu;
            // 0x1fd940: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd93c) {
            ctx->pc = 0x1FD920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd920;
        }
    }
    ctx->pc = 0x1FD944u;
label_1fd944:
    // 0x1fd944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd948:
    // 0x1fd948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd94c:
    // 0x1fd94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd950:
    // 0x1fd950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd954:
    // 0x1fd954: 0x40f809  jalr        $v0
label_1fd958:
    if (ctx->pc == 0x1FD958u) {
        ctx->pc = 0x1FD958u;
            // 0x1fd958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD95Cu;
        goto label_1fd95c;
    }
    ctx->pc = 0x1FD954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD95Cu);
        ctx->pc = 0x1FD958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD954u;
            // 0x1fd958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD95Cu; }
            if (ctx->pc != 0x1FD95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD95Cu;
label_1fd95c:
    // 0x1fd95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd960:
    // 0x1fd960: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
label_1fd964:
    if (ctx->pc == 0x1FD964u) {
        ctx->pc = 0x1FD964u;
            // 0x1fd964: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x1FD968u;
        goto label_1fd968;
    }
    ctx->pc = 0x1FD960u;
    {
        const bool branch_taken_0x1fd960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD960u;
            // 0x1fd964: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd960) {
            ctx->pc = 0x1FD924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd924;
        }
    }
    ctx->pc = 0x1FD968u;
label_1fd968:
    // 0x1fd968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd96c:
    // 0x1fd96c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd970:
    // 0x1fd970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fd974:
    // 0x1fd974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd978:
    // 0x1fd978: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fd978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fd97c:
    // 0x1fd97c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd980:
    // 0x1fd980: 0x3e00008  jr          $ra
label_1fd984:
    if (ctx->pc == 0x1FD984u) {
        ctx->pc = 0x1FD984u;
            // 0x1fd984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FD988u;
        goto label_fallthrough_0x1fd980;
    }
    ctx->pc = 0x1FD980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD980u;
            // 0x1fd984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fd980:
    ctx->pc = 0x1FD988u;
    ctx->pc = 0x1fd988u;
}
