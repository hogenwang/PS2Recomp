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

// Function: sub_002BF150
// Address: 0x2bf150 - 0x2bf290
void sub_002BF150_0x2bf150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF150_0x2bf150");
#endif

    switch (ctx->pc) {
        case 0x2bf1a8u: goto label_2bf1a8;
        case 0x2bf1f0u: goto label_2bf1f0;
        case 0x2bf230u: goto label_2bf230;
        case 0x2bf25cu: goto label_2bf25c;
        default: break;
    }

    ctx->pc = 0x2bf150u;

    // 0x2bf150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bf154: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bf154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bf158: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bf158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bf15c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2bf15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf160: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bf160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bf164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bf164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bf16c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf174: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2bf174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2bf178: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2bf178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2bf17c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf180: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2bf180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf184: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF184u;
    {
        const bool branch_taken_0x2bf184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF184u;
        // 0x2bf188: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf184) {
            ctx->pc = 0x2BF194u;
            goto label_2bf194;
        }
    }
    ctx->pc = 0x2BF18Cu;
    // 0x2bf18c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2BF18Cu;
    {
        const bool branch_taken_0x2bf18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF18Cu;
        // 0x2bf190: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf18c) {
            ctx->pc = 0x2BF270u;
            goto label_2bf270;
        }
    }
    ctx->pc = 0x2BF194u;
label_2bf194:
    // 0x2bf194: 0x6420020  bltzl       $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BF194u;
    {
        const bool branch_taken_0x2bf194 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2bf194) {
            ctx->pc = 0x2BF198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF194u;
            // 0x2bf198: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF218u;
            goto label_2bf218;
        }
    }
    ctx->pc = 0x2BF19Cu;
    // 0x2bf19c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF19Cu;
    {
        const bool branch_taken_0x2bf19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF19Cu;
        // 0x2bf1a0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf19c) {
            ctx->pc = 0x2BF1B0u;
            goto label_2bf1b0;
        }
    }
    ctx->pc = 0x2BF1A4u;
    // 0x2bf1a4: 0x0  nop
    ctx->pc = 0x2bf1a4u;
    // NOP
label_2bf1a8:
    // 0x2bf1a8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2bf1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2bf1ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bf1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bf1b0:
    // 0x2bf1b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2bf1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2bf1b4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2bf1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf1b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf1bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bf1c0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2bf1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf1c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2bf1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf1c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bf1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bf1cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2bf1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bf1d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2bf1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf1d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bf1d8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2bf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bf1dc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BF1DCu;
    {
        const bool branch_taken_0x2bf1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1DCu;
        // 0x2bf1e0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1dc) {
            ctx->pc = 0x2BF274u;
            goto label_2bf274;
        }
    }
    ctx->pc = 0x2BF1E4u;
    // 0x2bf1e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2bf1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bf1e8: 0xc049c22  jal         func_127088
    ctx->pc = 0x2BF1E8u;
    SET_GPR_U32(ctx, 31, 0x2BF1F0u);
    ctx->pc = 0x2BF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF1E8u;
    // 0x2bf1ec: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2BF1E8u, 0x2BF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF1F0u;
label_2bf1f0:
    // 0x2bf1f0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BF1F0u;
    {
        const bool branch_taken_0x2bf1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1F0u;
        // 0x2bf1f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1f0) {
            ctx->pc = 0x2BF274u;
            goto label_2bf274;
        }
    }
    ctx->pc = 0x2BF1F8u;
    // 0x2bf1f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2bf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bf1fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bf200: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2bf200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf204: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BF204u;
    {
        const bool branch_taken_0x2bf204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF204u;
        // 0x2bf208: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf204) {
            ctx->pc = 0x2BF274u;
            goto label_2bf274;
        }
    }
    ctx->pc = 0x2BF20Cu;
    // 0x2bf20c: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2BF20Cu;
    {
        const bool branch_taken_0x2bf20c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2BF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF20Cu;
        // 0x2bf210: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf20c) {
            ctx->pc = 0x2BF1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bf1a8;
        }
    }
    ctx->pc = 0x2BF214u;
    // 0x2bf214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf218:
    // 0x2bf218: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bf21c: 0x6400014  bltz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BF21Cu;
    {
        const bool branch_taken_0x2bf21c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2BF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF21Cu;
        // 0x2bf220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf21c) {
            ctx->pc = 0x2BF270u;
            goto label_2bf270;
        }
    }
    ctx->pc = 0x2BF224u;
    // 0x2bf224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF224u;
    {
        const bool branch_taken_0x2bf224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF224u;
        // 0x2bf228: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf224) {
            ctx->pc = 0x2BF234u;
            goto label_2bf234;
        }
    }
    ctx->pc = 0x2BF22Cu;
    // 0x2bf22c: 0x0  nop
    ctx->pc = 0x2bf22cu;
    // NOP
label_2bf230:
    // 0x2bf230: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2bf230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2bf234:
    // 0x2bf234: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2bf234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2bf238: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bf23c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2bf23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bf240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bf240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bf244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bf248: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2bf248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf24c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2bf24cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf250: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bf254: 0xc0a6c3c  jal         func_29B0F0
    ctx->pc = 0x2BF254u;
    SET_GPR_U32(ctx, 31, 0x2BF25Cu);
    ctx->pc = 0x2BF258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF254u;
    // 0x2bf258: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B0F0u, 0x2BF254u, 0x2BF25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF25Cu;
label_2bf25c:
    // 0x2bf25c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF25Cu;
    {
        const bool branch_taken_0x2bf25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF25Cu;
        // 0x2bf260: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf25c) {
            ctx->pc = 0x2BF270u;
            goto label_2bf270;
        }
    }
    ctx->pc = 0x2BF264u;
    // 0x2bf264: 0x643fff2  bgezl       $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2BF264u;
    {
        const bool branch_taken_0x2bf264 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2bf264) {
            ctx->pc = 0x2BF268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF264u;
            // 0x2bf268: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bf230;
        }
    }
    ctx->pc = 0x2BF26Cu;
    // 0x2bf26c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf270:
    // 0x2bf270: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bf270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf274:
    // 0x2bf274: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bf274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf278: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf27c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf288: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF288u;
        // 0x2bf28c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF290u;
}
