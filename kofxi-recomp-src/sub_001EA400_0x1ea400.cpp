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

// Function: sub_001EA400
// Address: 0x1ea400 - 0x1ea528
void sub_001EA400_0x1ea400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA400_0x1ea400");
#endif

    switch (ctx->pc) {
        case 0x1ea450u: goto label_1ea450;
        default: break;
    }

    ctx->pc = 0x1ea400u;

    // 0x1ea400: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ea404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea408: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1ea408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea40c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1ea40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ea410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea41c: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x1ea41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ea420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea424: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ea428: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ea428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ea42c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ea42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ea430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea438: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea43c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1ea43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea444: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ea444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ea448: 0xc07a95e  jal         func_1EA578
    ctx->pc = 0x1EA448u;
    SET_GPR_U32(ctx, 31, 0x1EA450u);
    ctx->pc = 0x1EA44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA448u;
    // 0x1ea44c: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA578u, 0x1EA448u, 0x1EA450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA450u;
label_1ea450:
    // 0x1ea450: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ea454: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ea458: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ea458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ea45c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ea45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ea460: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ea460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ea464: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ea464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ea468: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ea468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ea46c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ea46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ea470: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ea470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ea474: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ea474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ea478: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ea478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ea47c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ea47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ea480: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ea480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ea484: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ea484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ea488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ea490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea494: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ea494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea498: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA498u;
        // 0x1ea49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA4A0u;
    // 0x1ea4a0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ea4a4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1ea4a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4a8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea4ac: 0x25630007  addiu       $v1, $t3, 0x7
    ctx->pc = 0x1ea4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x1ea4b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea4b4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1ea4b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ea4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea4bc: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x1ea4bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ea4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea4c4: 0x2567000e  addiu       $a3, $t3, 0xE
    ctx->pc = 0x1ea4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 14));
    // 0x1ea4c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea4cc: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x1ea4ccu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1ea4d0: 0x24841378  addiu       $a0, $a0, 0x1378
    ctx->pc = 0x1ea4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4984));
    // 0x1ea4d4: 0x29490002  slti        $t1, $t2, 0x2
    ctx->pc = 0x1ea4d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ea4d8: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1ea4dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ea4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ea4e0: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA4E0u;
    {
        const bool branch_taken_0x1ea4e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA4E0u;
        // 0x1ea4e4: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4e0) {
            ctx->pc = 0x1EA4F8u;
            goto label_1ea4f8;
        }
    }
    ctx->pc = 0x1EA4E8u;
    // 0x1ea4e8: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x1ea4e8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ea4ec: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA4ECu;
    {
        const bool branch_taken_0x1ea4ec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea4ec) {
            ctx->pc = 0x1EA4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA4ECu;
            // 0x1ea4f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA4F4u;
            goto label_1ea4f4;
        }
    }
    ctx->pc = 0x1EA4F4u;
label_1ea4f4:
    // 0x1ea4f4: 0x1012  mflo        $v0
    ctx->pc = 0x1ea4f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ea4f8:
    // 0x1ea4f8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1ea4f8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ea4fc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ea500: 0xac8b000c  sw          $t3, 0xC($a0)
    ctx->pc = 0x1ea500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x1ea504: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x1ea504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x1ea508: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1ea508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1ea50c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1ea50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1ea510: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1ea510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1ea514: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA514u;
    {
        const bool branch_taken_0x1ea514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea514) {
            ctx->pc = 0x1EA518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA514u;
            // 0x1ea518: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA51Cu;
            goto label_1ea51c;
        }
    }
    ctx->pc = 0x1EA51Cu;
label_1ea51c:
    // 0x1ea51c: 0x1812  mflo        $v1
    ctx->pc = 0x1ea51cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ea520: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA520u;
        // 0x1ea524: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA528u;
}
