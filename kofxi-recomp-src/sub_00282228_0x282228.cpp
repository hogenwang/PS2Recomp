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

// Function: sub_00282228
// Address: 0x282228 - 0x2824e0
void sub_00282228_0x282228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282228_0x282228");
#endif

    switch (ctx->pc) {
        case 0x282290u: goto label_282290;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c8u: goto label_2822c8;
        case 0x282314u: goto label_282314;
        case 0x282330u: goto label_282330;
        case 0x282338u: goto label_282338;
        case 0x282358u: goto label_282358;
        case 0x282390u: goto label_282390;
        case 0x2823f0u: goto label_2823f0;
        case 0x28240cu: goto label_28240c;
        case 0x282424u: goto label_282424;
        case 0x282438u: goto label_282438;
        case 0x28247cu: goto label_28247c;
        case 0x28248cu: goto label_28248c;
        case 0x2824b0u: goto label_2824b0;
        default: break;
    }

    ctx->pc = 0x282228u;

    // 0x282228: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x282228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28222c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282230: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x282230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x282234: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x282234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x282238: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x282238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28223c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x28223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x282240: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x282240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282244: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x282244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x282248: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x282248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28224c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x28224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x282250: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282254: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x282254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x282258: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x282258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x28225c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x28225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x282260: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x282260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x282264: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x282264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x282268: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x282268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x28226c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x28226cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x282270: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x282270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x282274: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x282274u;
    {
        const bool branch_taken_0x282274 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x282278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282274u;
        // 0x282278: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282274) {
            ctx->pc = 0x282288u;
            goto label_282288;
        }
    }
    ctx->pc = 0x28227Cu;
    // 0x28227c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x282280: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282280u;
    {
        const bool branch_taken_0x282280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282280u;
        // 0x282284: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282280) {
            ctx->pc = 0x2822A4u;
            goto label_2822a4;
        }
    }
    ctx->pc = 0x282288u;
label_282288:
    // 0x282288: 0xc0a0938  jal         func_2824E0
    ctx->pc = 0x282288u;
    SET_GPR_U32(ctx, 31, 0x282290u);
    ctx->pc = 0x2824E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2824E0u, 0x282288u, 0x282290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282290u;
label_282290:
    // 0x282290: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x282290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282294: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x282294u;
    {
        const bool branch_taken_0x282294 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x282294) {
            ctx->pc = 0x282298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282294u;
            // 0x282298: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2822A4u;
            goto label_2822a4;
        }
    }
    ctx->pc = 0x28229Cu;
    // 0x28229c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x28229Cu;
    {
        const bool branch_taken_0x28229c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28229Cu;
        // 0x2822a0: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28229c) {
            ctx->pc = 0x282460u;
            goto label_282460;
        }
    }
    ctx->pc = 0x2822A4u;
label_2822a4:
    // 0x2822a4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2822a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2822a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2822a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2822ac: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2822ACu;
    {
        const bool branch_taken_0x2822ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2822B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822ACu;
        // 0x2822b0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822ac) {
            ctx->pc = 0x2822E0u;
            goto label_2822e0;
        }
    }
    ctx->pc = 0x2822B4u;
    // 0x2822b4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2822b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2822b8:
    // 0x2822b8: 0xc0af12a  jal         func_2BC4A8
    ctx->pc = 0x2822B8u;
    SET_GPR_U32(ctx, 31, 0x2822C0u);
    ctx->pc = 0x2BC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4A8u, 0x2822B8u, 0x2822C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822C0u;
label_2822c0:
    // 0x2822c0: 0xc0a098c  jal         func_282630
    ctx->pc = 0x2822C0u;
    SET_GPR_U32(ctx, 31, 0x2822C8u);
    ctx->pc = 0x2822C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822C0u;
    // 0x2822c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282630u, 0x2822C0u, 0x2822C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822C8u;
label_2822c8:
    // 0x2822c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2822c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2822cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2822d0: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2822D0u;
    {
        const bool branch_taken_0x2822d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2822d0) {
            ctx->pc = 0x2822B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2822b8;
        }
    }
    ctx->pc = 0x2822D8u;
    // 0x2822d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2822D8u;
    {
        const bool branch_taken_0x2822d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822D8u;
        // 0x2822dc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822d8) {
            ctx->pc = 0x2822E4u;
            goto label_2822e4;
        }
    }
    ctx->pc = 0x2822E0u;
label_2822e0:
    // 0x2822e0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2822e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2822e4:
    // 0x2822e4: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2822e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2822e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2822E8u;
    {
        const bool branch_taken_0x2822e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822E8u;
        // 0x2822ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822e8) {
            ctx->pc = 0x282300u;
            goto label_282300;
        }
    }
    ctx->pc = 0x2822F0u;
    // 0x2822f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2822f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2822f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2822f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2822f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2822F8u;
    {
        const bool branch_taken_0x2822f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F8u;
        // 0x2822fc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822f8) {
            ctx->pc = 0x282304u;
            goto label_282304;
        }
    }
    ctx->pc = 0x282300u;
label_282300:
    // 0x282300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282304:
    // 0x282304: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x282304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x282308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28230c: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x28230Cu;
    SET_GPR_U32(ctx, 31, 0x282314u);
    ctx->pc = 0x282310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28230Cu;
    // 0x282310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x28230Cu, 0x282314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282314u;
label_282314:
    // 0x282314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282314u;
    {
        const bool branch_taken_0x282314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282314u;
        // 0x282318: 0x3c170028  lui         $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282314) {
            ctx->pc = 0x282324u;
            goto label_282324;
        }
    }
    ctx->pc = 0x28231Cu;
    // 0x28231c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x28231Cu;
    {
        const bool branch_taken_0x28231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28231Cu;
        // 0x282320: 0x240200bb  addiu       $v0, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28231c) {
            ctx->pc = 0x282460u;
            goto label_282460;
        }
    }
    ctx->pc = 0x282324u;
label_282324:
    // 0x282324: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x282324u;
    {
        const bool branch_taken_0x282324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282324u;
        // 0x282328: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282324) {
            ctx->pc = 0x2823C4u;
            goto label_2823c4;
        }
    }
    ctx->pc = 0x28232Cu;
    // 0x28232c: 0x0  nop
    ctx->pc = 0x28232cu;
    // NOP
label_282330:
    // 0x282330: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x282330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282334: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x282334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_282338:
    // 0x282338: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x282338u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28233c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282340: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x282340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x282344: 0x26e71e20  addiu       $a3, $s7, 0x1E20
    ctx->pc = 0x282344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 7712));
    // 0x282348: 0x26082630  addiu       $t0, $s0, 0x2630
    ctx->pc = 0x282348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9776));
    // 0x28234c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x28234cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x282350: 0xc0a0a02  jal         func_282808
    ctx->pc = 0x282350u;
    SET_GPR_U32(ctx, 31, 0x282358u);
    ctx->pc = 0x282354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282350u;
    // 0x282354: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282808u, 0x282350u, 0x282358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282358u;
label_282358:
    // 0x282358: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x282358u;
    {
        const bool branch_taken_0x282358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282358u;
        // 0x28235c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282358) {
            ctx->pc = 0x28245Cu;
            goto label_28245c;
        }
    }
    ctx->pc = 0x282360u;
    // 0x282360: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x282360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x282364: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x282364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282368: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x282368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28236c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x28236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x282370: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x282370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x282374: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x282374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x282378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28237c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x28237cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282380: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x282380u;
    {
        const bool branch_taken_0x282380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282380u;
        // 0x282384: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282380) {
            ctx->pc = 0x2823C0u;
            goto label_2823c0;
        }
    }
    ctx->pc = 0x282388u;
    // 0x282388: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28238c: 0x0  nop
    ctx->pc = 0x28238cu;
    // NOP
label_282390:
    // 0x282390: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x282390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x282394: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x282394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282398: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x282398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28239c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2823a0: 0xac73000c  sw          $s3, 0xC($v1)
    ctx->pc = 0x2823a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 19));
    // 0x2823a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2823a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2823a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2823a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2823ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2823acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2823b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2823B0u;
    {
        const bool branch_taken_0x2823b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2823b0) {
            ctx->pc = 0x2823B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2823B0u;
            // 0x2823b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282390;
        }
    }
    ctx->pc = 0x2823B8u;
    // 0x2823b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2823B8u;
    {
        const bool branch_taken_0x2823b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823B8u;
        // 0x2823bc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823b8) {
            ctx->pc = 0x2823C4u;
            goto label_2823c4;
        }
    }
    ctx->pc = 0x2823C0u;
label_2823c0:
    // 0x2823c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2823c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2823c4:
    // 0x2823c4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2823c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2823c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2823c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2823cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2823CCu;
    {
        const bool branch_taken_0x2823cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2823D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823CCu;
        // 0x2823d0: 0xdfa50018  ld          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823cc) {
            ctx->pc = 0x2823E8u;
            goto label_2823e8;
        }
    }
    ctx->pc = 0x2823D4u;
    // 0x2823d4: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2823d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2823d8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2823D8u;
    {
        const bool branch_taken_0x2823d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823D8u;
        // 0x2823dc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823d8) {
            ctx->pc = 0x2823F8u;
            goto label_2823f8;
        }
    }
    ctx->pc = 0x2823E0u;
    // 0x2823e0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2823E0u;
    {
        const bool branch_taken_0x2823e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823E0u;
        // 0x2823e4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823e0) {
            ctx->pc = 0x282338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282338;
        }
    }
    ctx->pc = 0x2823E8u;
label_2823e8:
    // 0x2823e8: 0xc0a0542  jal         func_281508
    ctx->pc = 0x2823E8u;
    SET_GPR_U32(ctx, 31, 0x2823F0u);
    ctx->pc = 0x2823ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823E8u;
    // 0x2823ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281508u, 0x2823E8u, 0x2823F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823F0u;
label_2823f0:
    // 0x2823f0: 0x1040ffcf  beqz        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2823F0u;
    {
        const bool branch_taken_0x2823f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823F0u;
        // 0x2823f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823f0) {
            ctx->pc = 0x282330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282330;
        }
    }
    ctx->pc = 0x2823F8u;
label_2823f8:
    // 0x2823f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2823fc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2823fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x282400: 0x568023  subu        $s0, $v0, $s6
    ctx->pc = 0x282400u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x282404: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x282404u;
    SET_GPR_U32(ctx, 31, 0x28240Cu);
    ctx->pc = 0x282408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282404u;
    // 0x282408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x282404u, 0x28240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28240Cu;
label_28240c:
    // 0x28240c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28240Cu;
    {
        const bool branch_taken_0x28240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28240Cu;
        // 0x282410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28240c) {
            ctx->pc = 0x282464u;
            goto label_282464;
        }
    }
    ctx->pc = 0x282414u;
    // 0x282414: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x282418: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x282418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28241c: 0xc049c48  jal         func_127120
    ctx->pc = 0x28241Cu;
    SET_GPR_U32(ctx, 31, 0x282424u);
    ctx->pc = 0x282420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28241Cu;
    // 0x282420: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28241Cu, 0x282424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282424u;
label_282424:
    // 0x282424: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x282424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x282428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28242c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x28242cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x282430: 0xc0a065c  jal         func_281970
    ctx->pc = 0x282430u;
    SET_GPR_U32(ctx, 31, 0x282438u);
    ctx->pc = 0x282434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282430u;
    // 0x282434: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x282430u, 0x282438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282438u;
label_282438:
    // 0x282438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282438u;
    {
        const bool branch_taken_0x282438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282438u;
        // 0x28243c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282438) {
            ctx->pc = 0x282448u;
            goto label_282448;
        }
    }
    ctx->pc = 0x282440u;
    // 0x282440: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x282440u;
    {
        const bool branch_taken_0x282440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282440u;
        // 0x282444: 0x240200cf  addiu       $v0, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282440) {
            ctx->pc = 0x282460u;
            goto label_282460;
        }
    }
    ctx->pc = 0x282448u;
label_282448:
    // 0x282448: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x282448u;
    {
        const bool branch_taken_0x282448 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282448u;
        // 0x28244c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282448) {
            ctx->pc = 0x282454u;
            goto label_282454;
        }
    }
    ctx->pc = 0x282450u;
    // 0x282450: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x282450u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_282454:
    // 0x282454: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282454u;
    {
        const bool branch_taken_0x282454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282454u;
        // 0x282458: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282454) {
            ctx->pc = 0x2824B4u;
            goto label_2824b4;
        }
    }
    ctx->pc = 0x28245Cu;
label_28245c:
    // 0x28245c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x28245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_282460:
    // 0x282460: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x282460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_282464:
    // 0x282464: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x282464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282468: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x282468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28246c: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x282470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282474: 0xc0a5648  jal         func_295920
    ctx->pc = 0x282474u;
    SET_GPR_U32(ctx, 31, 0x28247Cu);
    ctx->pc = 0x282478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282474u;
    // 0x282478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x282474u, 0x28247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28247Cu;
label_28247c:
    // 0x28247c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x28247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x282480: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x282480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x282484: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x282484u;
    SET_GPR_U32(ctx, 31, 0x28248Cu);
    ctx->pc = 0x282488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282484u;
    // 0x282488: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CE0u, 0x282484u, 0x28248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28248Cu;
label_28248c:
    // 0x28248c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28248Cu;
    {
        const bool branch_taken_0x28248c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28248Cu;
        // 0x282490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28248c) {
            ctx->pc = 0x2824B4u;
            goto label_2824b4;
        }
    }
    ctx->pc = 0x282494u;
    // 0x282494: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x282494u;
    {
        const bool branch_taken_0x282494 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x282494) {
            ctx->pc = 0x2824A8u;
            goto label_2824a8;
        }
    }
    ctx->pc = 0x28249Cu;
    // 0x28249c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2824a0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2824A0u;
    {
        const bool branch_taken_0x2824a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2824A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824A0u;
        // 0x2824a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824a0) {
            ctx->pc = 0x2824B4u;
            goto label_2824b4;
        }
    }
    ctx->pc = 0x2824A8u;
label_2824a8:
    // 0x2824a8: 0xc0a095e  jal         func_282578
    ctx->pc = 0x2824A8u;
    SET_GPR_U32(ctx, 31, 0x2824B0u);
    ctx->pc = 0x2824ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2824A8u;
    // 0x2824ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282578u, 0x2824A8u, 0x2824B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824B0u;
label_2824b0:
    // 0x2824b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2824b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2824b4:
    // 0x2824b4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2824b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2824b8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2824b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2824bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2824bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2824c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2824c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2824c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2824c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2824c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2824c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2824cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2824ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2824d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2824d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2824d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2824d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2824d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2824D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2824DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824D8u;
        // 0x2824dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2824D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2824E0u;
}
