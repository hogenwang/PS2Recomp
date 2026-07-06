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

// Function: sub_002983B8
// Address: 0x2983b8 - 0x2985c0
void sub_002983B8_0x2983b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002983B8_0x2983b8");
#endif

    switch (ctx->pc) {
        case 0x298440u: goto label_298440;
        case 0x298448u: goto label_298448;
        case 0x298484u: goto label_298484;
        case 0x2984a8u: goto label_2984a8;
        case 0x2984ecu: goto label_2984ec;
        case 0x298508u: goto label_298508;
        case 0x298528u: goto label_298528;
        case 0x298548u: goto label_298548;
        case 0x29855cu: goto label_29855c;
        case 0x29856cu: goto label_29856c;
        case 0x298580u: goto label_298580;
        default: break;
    }

    ctx->pc = 0x2983b8u;

    // 0x2983b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2983b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2983bc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2983bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2983c0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2983c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2983c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2983c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983c8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2983c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2983cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2983ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983d0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2983d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2983d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2983d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2983d8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2983d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2983dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2983dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983e0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2983e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2983e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2983e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983e8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2983e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2983ec: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2983ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2983f0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2983f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2983f4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2983f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2983f8: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2983F8u;
    {
        const bool branch_taken_0x2983f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983F8u;
        // 0x2983fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983f8) {
            ctx->pc = 0x29858Cu;
            goto label_29858c;
        }
    }
    ctx->pc = 0x298400u;
    // 0x298400: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x298400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x298404: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x298408: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x298408u;
    {
        const bool branch_taken_0x298408 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298408u;
        // 0x29840c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298408) {
            ctx->pc = 0x29842Cu;
            goto label_29842c;
        }
    }
    ctx->pc = 0x298410u;
    // 0x298410: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x298410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x298414: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x298414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298418: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x298418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29841c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x298420: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x298420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x298424: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x298424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x298428: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x298428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_29842c:
    // 0x29842c: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x29842Cu;
    {
        const bool branch_taken_0x29842c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x298430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29842Cu;
        // 0x298430: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29842c) {
            ctx->pc = 0x298494u;
            goto label_298494;
        }
    }
    ctx->pc = 0x298434u;
    // 0x298434: 0x24170102  addiu       $s7, $zero, 0x102
    ctx->pc = 0x298434u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x298438: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x298438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29843c: 0x0  nop
    ctx->pc = 0x29843cu;
    // NOP
label_298440:
    // 0x298440: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x298440u;
    SET_GPR_U32(ctx, 31, 0x298448u);
    ctx->pc = 0x298444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298440u;
    // 0x298444: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x298440u, 0x298448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298448u;
label_298448:
    // 0x298448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298448u;
    {
        const bool branch_taken_0x298448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298448u;
        // 0x29844c: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298448) {
            ctx->pc = 0x298458u;
            goto label_298458;
        }
    }
    ctx->pc = 0x298450u;
    // 0x298450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298450u;
    {
        const bool branch_taken_0x298450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298450u;
        // 0x298454: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298450) {
            ctx->pc = 0x29845Cu;
            goto label_29845c;
        }
    }
    ctx->pc = 0x298458u;
label_298458:
    // 0x298458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29845c:
    // 0x29845c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298460: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x298460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x298464: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x298464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298468: 0xa2980b  movn        $s3, $a1, $v0
    ctx->pc = 0x298468u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x29846c: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x29846cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x298470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298474: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298478: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29847c: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x29847Cu;
    SET_GPR_U32(ctx, 31, 0x298484u);
    ctx->pc = 0x298480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29847Cu;
    // 0x298480: 0x2e7300b  movn        $a2, $s7, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x29847Cu, 0x298484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298484u;
label_298484:
    // 0x298484: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x298488: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x298488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x29848c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x29848Cu;
    {
        const bool branch_taken_0x29848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29848c) {
            ctx->pc = 0x298440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298440;
        }
    }
    ctx->pc = 0x298494u;
label_298494:
    // 0x298494: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x298494u;
    {
        const bool branch_taken_0x298494 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x298498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298494u;
        // 0x298498: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298494) {
            ctx->pc = 0x2984B8u;
            goto label_2984b8;
        }
    }
    ctx->pc = 0x29849Cu;
    // 0x29849c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984a0: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2984A0u;
    SET_GPR_U32(ctx, 31, 0x2984A8u);
    ctx->pc = 0x2984A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984A0u;
    // 0x2984a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2984A0u, 0x2984A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984A8u;
label_2984a8:
    // 0x2984a8: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2984A8u;
    {
        const bool branch_taken_0x2984a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984A8u;
        // 0x2984ac: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984a8) {
            ctx->pc = 0x2984C8u;
            goto label_2984c8;
        }
    }
    ctx->pc = 0x2984B0u;
    // 0x2984b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2984B0u;
    {
        const bool branch_taken_0x2984b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984B0u;
        // 0x2984b4: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984b0) {
            ctx->pc = 0x298590u;
            goto label_298590;
        }
    }
    ctx->pc = 0x2984B8u;
label_2984b8:
    // 0x2984b8: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2984B8u;
    {
        const bool branch_taken_0x2984b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2984b8) {
            ctx->pc = 0x2984BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2984B8u;
            // 0x2984bc: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2984CCu;
            goto label_2984cc;
        }
    }
    ctx->pc = 0x2984C0u;
    // 0x2984c0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2984C0u;
    {
        const bool branch_taken_0x2984c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984C0u;
        // 0x2984c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984c0) {
            ctx->pc = 0x29858Cu;
            goto label_29858c;
        }
    }
    ctx->pc = 0x2984C8u;
label_2984c8:
    // 0x2984c8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2984cc:
    // 0x2984cc: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2984CCu;
    {
        const bool branch_taken_0x2984cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984CCu;
        // 0x2984d0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984cc) {
            ctx->pc = 0x2984F4u;
            goto label_2984f4;
        }
    }
    ctx->pc = 0x2984D4u;
    // 0x2984d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2984d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2984d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2984dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2984dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2984e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2984e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2984e4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2984E4u;
    SET_GPR_U32(ctx, 31, 0x2984ECu);
    ctx->pc = 0x2984E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984E4u;
    // 0x2984e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2984E4u, 0x2984ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984ECu;
label_2984ec:
    // 0x2984ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984ECu;
        // 0x2984f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x2984FCu;
            goto label_2984fc;
        }
    }
    ctx->pc = 0x2984F4u;
label_2984f4:
    // 0x2984f4: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x2984f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2984fc:
    // 0x2984fc: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2984fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x298500: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x298500u;
    SET_GPR_U32(ctx, 31, 0x298508u);
    ctx->pc = 0x298504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298500u;
    // 0x298504: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x298500u, 0x298508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298508u;
label_298508:
    // 0x298508: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298508u;
    {
        const bool branch_taken_0x298508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298508u;
        // 0x29850c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298508) {
            ctx->pc = 0x298530u;
            goto label_298530;
        }
    }
    ctx->pc = 0x298510u;
    // 0x298510: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x298510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x298514: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x298518: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x298518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29851c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29851cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298520: 0xc0a5648  jal         func_295920
    ctx->pc = 0x298520u;
    SET_GPR_U32(ctx, 31, 0x298528u);
    ctx->pc = 0x298524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298520u;
    // 0x298524: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x298520u, 0x298528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298528u;
label_298528:
    // 0x298528: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x298528u;
    {
        const bool branch_taken_0x298528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298528u;
        // 0x29852c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298528) {
            ctx->pc = 0x29858Cu;
            goto label_29858c;
        }
    }
    ctx->pc = 0x298530u;
label_298530:
    // 0x298530: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x298530u;
    {
        const bool branch_taken_0x298530 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x298534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298530u;
        // 0x298534: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298530) {
            ctx->pc = 0x298578u;
            goto label_298578;
        }
    }
    ctx->pc = 0x298538u;
    // 0x298538: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29853c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298540: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x298540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x298544: 0x0  nop
    ctx->pc = 0x298544u;
    // NOP
label_298548:
    // 0x298548: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x298548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29854c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x29854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x298550: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298554: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x298554u;
    SET_GPR_U32(ctx, 31, 0x29855Cu);
    ctx->pc = 0x298558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298554u;
    // 0x298558: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x298554u, 0x29855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29855Cu;
label_29855c:
    // 0x29855c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29855cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x298560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298564: 0xc0a004a  jal         func_280128
    ctx->pc = 0x298564u;
    SET_GPR_U32(ctx, 31, 0x29856Cu);
    ctx->pc = 0x298568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298564u;
    // 0x298568: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280128u, 0x298564u, 0x29856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29856Cu;
label_29856c:
    // 0x29856c: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x29856cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x298570: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x298570u;
    {
        const bool branch_taken_0x298570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298570u;
        // 0x298574: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298570) {
            ctx->pc = 0x298548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298548;
        }
    }
    ctx->pc = 0x298578u;
label_298578:
    // 0x298578: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x298578u;
    SET_GPR_U32(ctx, 31, 0x298580u);
    ctx->pc = 0x29857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298578u;
    // 0x29857c: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x298578u, 0x298580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298580u;
label_298580:
    // 0x298580: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x298580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298584: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x298584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298588: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x298588u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_29858c:
    // 0x29858c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x29858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_298590:
    // 0x298590: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x298590u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x298594: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x298594u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x298598: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x298598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29859c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x29859cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2985a0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2985a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2985a4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2985a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2985a8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2985a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2985ac: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2985acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2985b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2985b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2985b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2985B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2985B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985B4u;
        // 0x2985b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2985B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2985BCu;
    // 0x2985bc: 0x0  nop
    ctx->pc = 0x2985bcu;
    // NOP
    if (ctx->pc == 0x2985bcu) { ctx->pc = 0x2985c0u; }
}
