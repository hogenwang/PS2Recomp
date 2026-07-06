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

// Function: sub_001EF1A8
// Address: 0x1ef1a8 - 0x1ef2d8
void sub_001EF1A8_0x1ef1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF1A8_0x1ef1a8");
#endif

    switch (ctx->pc) {
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef278u: goto label_1ef278;
        case 0x1ef28cu: goto label_1ef28c;
        default: break;
    }

    ctx->pc = 0x1ef1a8u;

    // 0x1ef1a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef1b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef1bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ef1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ef1c4: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1ef1c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ef1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ef1cc: 0x26301fcc  addiu       $s0, $s1, 0x1FCC
    ctx->pc = 0x1ef1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8140));
    // 0x1ef1d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ef1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ef1d4: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF1D4u;
    {
        const bool branch_taken_0x1ef1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1D4u;
        // 0x1ef1d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1d4) {
            ctx->pc = 0x1EF1E8u;
            goto label_1ef1e8;
        }
    }
    ctx->pc = 0x1EF1DCu;
    // 0x1ef1dc: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1EF1DCu;
    SET_GPR_U32(ctx, 31, 0x1EF1E4u);
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1EF1DCu, 0x1EF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1E4u;
label_1ef1e4:
    // 0x1ef1e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ef1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef1e8:
    // 0x1ef1e8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1ef1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ef1ec: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF1ECu;
    {
        const bool branch_taken_0x1ef1ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x1ef1ec) {
            ctx->pc = 0x1EF1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF1ECu;
            // 0x1ef1f0: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF204u;
            goto label_1ef204;
        }
    }
    ctx->pc = 0x1EF1F4u;
    // 0x1ef1f4: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1EF1F4u;
    SET_GPR_U32(ctx, 31, 0x1EF1FCu);
    ctx->pc = 0x1EF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1F4u;
    // 0x1ef1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1EF1F4u, 0x1EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1FCu;
label_1ef1fc:
    // 0x1ef1fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1ef1fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1ef200: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ef200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ef204:
    // 0x1ef204: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF204u;
    {
        const bool branch_taken_0x1ef204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF204u;
        // 0x1ef208: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef204) {
            ctx->pc = 0x1EF21Cu;
            goto label_1ef21c;
        }
    }
    ctx->pc = 0x1EF20Cu;
    // 0x1ef20c: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1EF20Cu;
    SET_GPR_U32(ctx, 31, 0x1EF214u);
    ctx->pc = 0x1EF210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF20Cu;
    // 0x1ef210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB570u, 0x1EF20Cu, 0x1EF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF214u;
label_1ef214:
    // 0x1ef214: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1ef214u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1ef218: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ef218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ef21c:
    // 0x1ef21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef228: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ef228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ef22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef230: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF230u;
        // 0x1ef234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF238u;
label_1ef238:
    // 0x1ef238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ef244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef24c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ef24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ef250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ef254: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ef258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ef25c: 0x26501fcc  addiu       $s0, $s2, 0x1FCC
    ctx->pc = 0x1ef25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8140));
    // 0x1ef260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ef260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef264: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ef264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ef268: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF268u;
    {
        const bool branch_taken_0x1ef268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF268u;
        // 0x1ef26c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef268) {
            ctx->pc = 0x1EF278u;
            goto label_1ef278;
        }
    }
    ctx->pc = 0x1EF270u;
    // 0x1ef270: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1EF270u;
    SET_GPR_U32(ctx, 31, 0x1EF278u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1EF270u, 0x1EF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF278u;
label_1ef278:
    // 0x1ef278: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ef27c: 0x10b30003  beq         $a1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF27Cu;
    {
        const bool branch_taken_0x1ef27c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF27Cu;
        // 0x1ef280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef27c) {
            ctx->pc = 0x1EF28Cu;
            goto label_1ef28c;
        }
    }
    ctx->pc = 0x1EF284u;
    // 0x1ef284: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x1EF284u;
    SET_GPR_U32(ctx, 31, 0x1EF28Cu);
    ctx->pc = 0x1EF288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF284u;
    // 0x1ef288: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x1EF284u, 0x1EF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF28Cu;
label_1ef28c:
    // 0x1ef28c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ef28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ef290: 0x10b30009  beq         $a1, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF290u;
    {
        const bool branch_taken_0x1ef290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x1EF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF290u;
        // 0x1ef294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef290) {
            ctx->pc = 0x1EF2B8u;
            goto label_1ef2b8;
        }
    }
    ctx->pc = 0x1EF298u;
    // 0x1ef298: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef29c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ef29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef2a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ef2a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ef2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef2b0: 0x807ad50  j           func_1EB540
    ctx->pc = 0x1EF2B0u;
    ctx->pc = 0x1EF2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2B0u;
    // 0x1ef2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB540u;
    sub_001EB540_0x1eb540(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF2B8u;
label_1ef2b8:
    // 0x1ef2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef2bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef2c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef2c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ef2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ef2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2CCu;
        // 0x1ef2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF2D4u;
    // 0x1ef2d4: 0x0  nop
    ctx->pc = 0x1ef2d4u;
    // NOP
}
