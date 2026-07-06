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

// Function: sub_002884A8
// Address: 0x2884a8 - 0x2885f8
void sub_002884A8_0x2884a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002884A8_0x2884a8");
#endif

    switch (ctx->pc) {
        case 0x2884f4u: goto label_2884f4;
        case 0x288558u: goto label_288558;
        case 0x28857cu: goto label_28857c;
        case 0x2885a8u: goto label_2885a8;
        default: break;
    }

    ctx->pc = 0x2884a8u;

    // 0x2884a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2884a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2884ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2884acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2884b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2884b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2884b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2884b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2884b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2884bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2884bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884c0: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2884C0u;
    {
        const bool branch_taken_0x2884c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884C0u;
        // 0x2884c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884c0) {
            ctx->pc = 0x2885E4u;
            goto label_2885e4;
        }
    }
    ctx->pc = 0x2884C8u;
    // 0x2884c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2884c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2884cc: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2884CCu;
    {
        const bool branch_taken_0x2884cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2884cc) {
            ctx->pc = 0x2884D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2884CCu;
            // 0x2884d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28853Cu;
            goto label_28853c;
        }
    }
    ctx->pc = 0x2884D4u;
    // 0x2884d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2884d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2884d8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2884d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2884dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2884DCu;
    {
        const bool branch_taken_0x2884dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2884dc) {
            ctx->pc = 0x2884E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2884DCu;
            // 0x2884e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288500u;
            goto label_288500;
        }
    }
    ctx->pc = 0x2884E4u;
    // 0x2884e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2884e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2884e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2884e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884ec: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2884ECu;
    SET_GPR_U32(ctx, 31, 0x2884F4u);
    ctx->pc = 0x2884F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2884ECu;
    // 0x2884f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2885F8u, 0x2884ECu, 0x2884F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2884F4u;
label_2884f4:
    // 0x2884f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2884f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2884f8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2884F8u;
    {
        const bool branch_taken_0x2884f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2884F8u;
        // 0x2884fc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884f8) {
            ctx->pc = 0x2885E4u;
            goto label_2885e4;
        }
    }
    ctx->pc = 0x288500u;
label_288500:
    // 0x288500: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x288500u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288504: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x288504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x288508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288508u;
    {
        const bool branch_taken_0x288508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288508u;
        // 0x28850c: 0xb1102f  dsubu       $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288508) {
            ctx->pc = 0x288518u;
            goto label_288518;
        }
    }
    ctx->pc = 0x288510u;
    // 0x288510: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x288510u;
    {
        const bool branch_taken_0x288510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288510u;
        // 0x288514: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288510) {
            ctx->pc = 0x2885E0u;
            goto label_2885e0;
        }
    }
    ctx->pc = 0x288518u;
label_288518:
    // 0x288518: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x288518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28851c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28851Cu;
    {
        const bool branch_taken_0x28851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28851Cu;
        // 0x288520: 0x225102f  dsubu       $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28851c) {
            ctx->pc = 0x288530u;
            goto label_288530;
        }
    }
    ctx->pc = 0x288524u;
    // 0x288524: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x288524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x288528: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x288528u;
    {
        const bool branch_taken_0x288528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288528u;
        // 0x28852c: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288528) {
            ctx->pc = 0x2885E0u;
            goto label_2885e0;
        }
    }
    ctx->pc = 0x288530u;
label_288530:
    // 0x288530: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x288530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x288534: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x288534u;
    {
        const bool branch_taken_0x288534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288534u;
        // 0x288538: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288534) {
            ctx->pc = 0x2885E0u;
            goto label_2885e0;
        }
    }
    ctx->pc = 0x28853Cu;
label_28853c:
    // 0x28853c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x288540: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x288540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x288544: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x288544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x288548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288548u;
    {
        const bool branch_taken_0x288548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288548) {
            ctx->pc = 0x288568u;
            goto label_288568;
        }
    }
    ctx->pc = 0x288550u;
    // 0x288550: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x288550u;
    SET_GPR_U32(ctx, 31, 0x288558u);
    ctx->pc = 0x288554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288550u;
    // 0x288554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x288550u, 0x288558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288558u;
label_288558:
    // 0x288558: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x288558u;
    {
        const bool branch_taken_0x288558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288558) {
            ctx->pc = 0x28855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288558u;
            // 0x28855c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288578u;
            goto label_288578;
        }
    }
    ctx->pc = 0x288560u;
    // 0x288560: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x288560u;
    {
        const bool branch_taken_0x288560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288560u;
        // 0x288564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288560) {
            ctx->pc = 0x2885E4u;
            goto label_2885e4;
        }
    }
    ctx->pc = 0x288568u;
label_288568:
    // 0x288568: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x288568u;
    {
        const bool branch_taken_0x288568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x288568) {
            ctx->pc = 0x28856Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288568u;
            // 0x28856c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28857Cu;
            goto label_28857c;
        }
    }
    ctx->pc = 0x288570u;
    // 0x288570: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x288570u;
    {
        const bool branch_taken_0x288570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288570u;
        // 0x288574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288570) {
            ctx->pc = 0x2885E4u;
            goto label_2885e4;
        }
    }
    ctx->pc = 0x288578u;
label_288578:
    // 0x288578: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28857c:
    // 0x28857c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x288580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x288580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288588: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x288588u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x28858c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288590: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x288590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288594: 0x51282d  daddu       $a1, $v0, $s1
    ctx->pc = 0x288594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x288598: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x288598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28859c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28859Cu;
    {
        const bool branch_taken_0x28859c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28859Cu;
        // 0x2885a0: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28859c) {
            ctx->pc = 0x2885C8u;
            goto label_2885c8;
        }
    }
    ctx->pc = 0x2885A4u;
    // 0x2885a4: 0x0  nop
    ctx->pc = 0x2885a4u;
    // NOP
label_2885a8:
    // 0x2885a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2885a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2885ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2885acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2885b0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2885b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2885b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2885b8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2885b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2885bc: 0x64450001  daddiu      $a1, $v0, 0x1
    ctx->pc = 0x2885bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2885c0: 0x10a0fff9  beqz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2885C0u;
    {
        const bool branch_taken_0x2885c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885C0u;
        // 0x2885c4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885c0) {
            ctx->pc = 0x2885A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2885a8;
        }
    }
    ctx->pc = 0x2885C8u;
label_2885c8:
    // 0x2885c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2885c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2885cc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2885ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2885d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2885D0u;
    {
        const bool branch_taken_0x2885d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D0u;
        // 0x2885d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885d0) {
            ctx->pc = 0x2885E4u;
            goto label_2885e4;
        }
    }
    ctx->pc = 0x2885D8u;
    // 0x2885d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2885dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2885dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2885e0:
    // 0x2885e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2885e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2885e4:
    // 0x2885e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2885e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2885e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2885e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2885ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2885ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2885f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2885F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2885F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F0u;
        // 0x2885f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2885F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2885F8u;
}
