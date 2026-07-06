#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8068
// Address: 0x1f8068 - 0x1f8120
void sub_001F8068_0x1f8068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8068_0x1f8068");
#endif

    switch (ctx->pc) {
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80e0u: goto label_1f80e0;
        case 0x1f80e4u: goto label_1f80e4;
        case 0x1f80e8u: goto label_1f80e8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f80f0u: goto label_1f80f0;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80f8u: goto label_1f80f8;
        case 0x1f80fcu: goto label_1f80fc;
        case 0x1f8100u: goto label_1f8100;
        case 0x1f8104u: goto label_1f8104;
        case 0x1f8108u: goto label_1f8108;
        case 0x1f810cu: goto label_1f810c;
        case 0x1f8110u: goto label_1f8110;
        case 0x1f8114u: goto label_1f8114;
        case 0x1f8118u: goto label_1f8118;
        case 0x1f811cu: goto label_1f811c;
        default: break;
    }

    ctx->pc = 0x1f8068u;

label_1f8068:
    // 0x1f8068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f806c:
    // 0x1f806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f8070:
    // 0x1f8070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f8074:
    // 0x1f8074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8078:
    // 0x1f8078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f807c:
    // 0x1f807c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f807cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f8080:
    // 0x1f8080: 0x8e222020  lw          $v0, 0x2020($s1)
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8224)));
label_1f8084:
    // 0x1f8084: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8088:
    // 0x1f8088: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1f8088u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f808c:
    // 0x1f808c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1f808cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f8090:
    // 0x1f8090: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f8094:
    // 0x1f8094: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1f8094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f8098:
    // 0x1f8098: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1f8098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1f809c:
    // 0x1f809c: 0x26101378  addiu       $s0, $s0, 0x1378
    ctx->pc = 0x1f809cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4984));
label_1f80a0:
    // 0x1f80a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f80a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f80a4:
    // 0x1f80a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f80a8:
    // 0x1f80a8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1f80ac:
    // 0x1f80ac: 0x40f809  jalr        $v0
label_1f80b0:
    if (ctx->pc == 0x1F80B0u) {
        ctx->pc = 0x1F80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80ACu;
        // 0x1f80b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80B4u;
        goto label_1f80b4;
    }
    ctx->pc = 0x1F80ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F80B4u);
        ctx->pc = 0x1F80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80ACu;
        // 0x1f80b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F80ACu, 0x1F80B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F80B4u;
label_1f80b4:
    // 0x1f80b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f80b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f80b8:
    // 0x1f80b8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1f80b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f80bc:
    // 0x1f80bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f80bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f80c0:
    // 0x1f80c0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f80c4:
    // 0x1f80c4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1f80c8:
    // 0x1f80c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f80cc:
    // 0x1f80cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1f80d0:
    if (ctx->pc == 0x1F80D0u) {
        ctx->pc = 0x1F80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80CCu;
        // 0x1f80d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80D4u;
        goto label_1f80d4;
    }
    ctx->pc = 0x1F80CCu;
    {
        const bool branch_taken_0x1f80cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f80cc) {
            ctx->pc = 0x1F80D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80CCu;
            // 0x1f80d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80D4u;
            goto label_1f80d4;
        }
    }
    ctx->pc = 0x1F80D4u;
label_1f80d4:
    // 0x1f80d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f80d8:
    // 0x1f80d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1f80dc:
    // 0x1f80dc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1f80dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f80e0:
    // 0x1f80e0: 0x1012  mflo        $v0
    ctx->pc = 0x1f80e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1f80e4:
    // 0x1f80e4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f80e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f80e8:
    // 0x1f80e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1f80ec:
    if (ctx->pc == 0x1F80ECu) {
        ctx->pc = 0x1F80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80E8u;
        // 0x1f80ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80F0u;
        goto label_1f80f0;
    }
    ctx->pc = 0x1F80E8u;
    {
        const bool branch_taken_0x1f80e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f80e8) {
            ctx->pc = 0x1F80ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80E8u;
            // 0x1f80ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8108u;
            goto label_1f8108;
        }
    }
    ctx->pc = 0x1F80F0u;
label_1f80f0:
    // 0x1f80f0: 0xc07ec02  jal         func_1FB008
label_1f80f4:
    if (ctx->pc == 0x1F80F4u) {
        ctx->pc = 0x1F80F8u;
        goto label_1f80f8;
    }
    ctx->pc = 0x1F80F0u;
    SET_GPR_U32(ctx, 31, 0x1F80F8u);
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F80F0u, 0x1F80F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80F8u;
label_1f80f8:
    // 0x1f80f8: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x1f80f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f80fc:
    // 0x1f80fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1f8100:
    if (ctx->pc == 0x1F8100u) {
        ctx->pc = 0x1F8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80FCu;
        // 0x1f8100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8104u;
        goto label_1f8104;
    }
    ctx->pc = 0x1F80FCu;
    {
        const bool branch_taken_0x1f80fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80FCu;
        // 0x1f8100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80fc) {
            ctx->pc = 0x1F8108u;
            goto label_1f8108;
        }
    }
    ctx->pc = 0x1F8104u;
label_1f8104:
    // 0x1f8104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8108:
    // 0x1f8108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f810c:
    // 0x1f810c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f810cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f8110:
    // 0x1f8110: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8114:
    // 0x1f8114: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f8114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f8118:
    // 0x1f8118: 0x3e00008  jr          $ra
label_1f811c:
    if (ctx->pc == 0x1F811Cu) {
        ctx->pc = 0x1F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8118u;
        // 0x1f811c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8120u;
        goto label_fallthrough_0x1f8118;
    }
    ctx->pc = 0x1F8118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8118u;
        // 0x1f811c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8118:
    ctx->pc = 0x1F8120u;
}
