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

// Function: sub_002416F8
// Address: 0x2416f8 - 0x241890
void sub_002416F8_0x2416f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002416F8_0x2416f8");
#endif

    switch (ctx->pc) {
        case 0x241738u: goto label_241738;
        case 0x241758u: goto label_241758;
        case 0x2417a8u: goto label_2417a8;
        case 0x2417ccu: goto label_2417cc;
        case 0x24180cu: goto label_24180c;
        default: break;
    }

    ctx->pc = 0x2416f8u;

    // 0x2416f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2416f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2416fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2416fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x241700: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x241700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x241704: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x241704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241708: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24170c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24170cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241710: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x241710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x241714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x241714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241718: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24171c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241720: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x241720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x241724: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241728: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x241728u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24172c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x24172cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x241730: 0xc09046e  jal         func_2411B8
    ctx->pc = 0x241730u;
    SET_GPR_U32(ctx, 31, 0x241738u);
    ctx->pc = 0x241734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241730u;
    // 0x241734: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2411B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2411B8u, 0x241730u, 0x241738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241738u;
label_241738:
    // 0x241738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24173c: 0x2503821  addu        $a3, $s2, $s0
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x241740: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x241744: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x241744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x241748: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x241748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x24174c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24174Cu;
    {
        const bool branch_taken_0x24174c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24174Cu;
        // 0x241750: 0x713021  addu        $a2, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24174c) {
            ctx->pc = 0x241774u;
            goto label_241774;
        }
    }
    ctx->pc = 0x241754u;
    // 0x241754: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_241758:
    // 0x241758: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x241758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24175c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24175cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x241760: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241760u;
    {
        const bool branch_taken_0x241760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241760u;
        // 0x241764: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241760) {
            ctx->pc = 0x241784u;
            goto label_241784;
        }
    }
    ctx->pc = 0x241768u;
    // 0x241768: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x241768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x24176c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24176Cu;
    {
        const bool branch_taken_0x24176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24176c) {
            ctx->pc = 0x241770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24176Cu;
            // 0x241770: 0x80c30000  lb          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241758;
        }
    }
    ctx->pc = 0x241774u;
label_241774:
    // 0x241774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241778: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x241778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24177c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x24177Cu;
    {
        const bool branch_taken_0x24177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24177Cu;
        // 0x241780: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24177c) {
            ctx->pc = 0x24186Cu;
            goto label_24186c;
        }
    }
    ctx->pc = 0x241784u;
label_241784:
    // 0x241784: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x241784u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x241788: 0x921023  subu        $v0, $a0, $s2
    ctx->pc = 0x241788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x24178c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x24178cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241790: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x241790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x241794: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x241794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x241798: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x241798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x24179c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24179Cu;
    {
        const bool branch_taken_0x24179c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24179Cu;
        // 0x2417a0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24179c) {
            ctx->pc = 0x2417C8u;
            goto label_2417c8;
        }
    }
    ctx->pc = 0x2417A4u;
    // 0x2417a4: 0x0  nop
    ctx->pc = 0x2417a4u;
    // NOP
label_2417a8:
    // 0x2417a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2417ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2417b0: 0x0  nop
    ctx->pc = 0x2417b0u;
    // NOP
    // 0x2417b4: 0x0  nop
    ctx->pc = 0x2417b4u;
    // NOP
    // 0x2417b8: 0x0  nop
    ctx->pc = 0x2417b8u;
    // NOP
    // 0x2417bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2417BCu;
    {
        const bool branch_taken_0x2417bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2417bc) {
            ctx->pc = 0x2417A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2417a8;
        }
    }
    ctx->pc = 0x2417C4u;
    // 0x2417c4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2417c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2417c8:
    // 0x2417c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2417cc:
    // 0x2417cc: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x2417ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2417d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2417d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2417d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2417d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2417d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2417dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2417DCu;
    {
        const bool branch_taken_0x2417dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417DCu;
        // 0x2417e0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417dc) {
            ctx->pc = 0x2417ECu;
            goto label_2417ec;
        }
    }
    ctx->pc = 0x2417E4u;
    // 0x2417e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2417E4u;
    {
        const bool branch_taken_0x2417e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2417E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2417E4u;
        // 0x2417e8: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417e4) {
            ctx->pc = 0x2417F0u;
            goto label_2417f0;
        }
    }
    ctx->pc = 0x2417ECu;
label_2417ec:
    // 0x2417ec: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2417ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2417f0:
    // 0x2417f0: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x2417f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2417f4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2417f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2417f8: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2417F8u;
    {
        const bool branch_taken_0x2417f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2417f8) {
            ctx->pc = 0x2417FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2417F8u;
            // 0x2417fc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2417CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2417cc;
        }
    }
    ctx->pc = 0x241800u;
    // 0x241800: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x241800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241804: 0xc0905ac  jal         func_2416B0
    ctx->pc = 0x241804u;
    SET_GPR_U32(ctx, 31, 0x24180Cu);
    ctx->pc = 0x241808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241804u;
    // 0x241808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B0u, 0x241804u, 0x24180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24180Cu;
label_24180c:
    // 0x24180c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x24180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241814: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x241814u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x241818: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x24181c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x24181cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241820: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x241820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x241824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241824u;
    {
        const bool branch_taken_0x241824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241824u;
        // 0x241828: 0x8ca60010  lw          $a2, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241824) {
            ctx->pc = 0x241834u;
            goto label_241834;
        }
    }
    ctx->pc = 0x24182Cu;
    // 0x24182c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24182Cu;
    {
        const bool branch_taken_0x24182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24182Cu;
        // 0x241830: 0xae250010  sw          $a1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24182c) {
            ctx->pc = 0x241838u;
            goto label_241838;
        }
    }
    ctx->pc = 0x241834u;
label_241834:
    // 0x241834: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x241834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
label_241838:
    // 0x241838: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x241838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x24183c: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x24183cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x241840: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x241844: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x241844u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x241848: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x241848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x24184c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24184cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241850: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x241850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x241854: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x241854u;
    {
        const bool branch_taken_0x241854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241854) {
            ctx->pc = 0x241858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241854u;
            // 0x241858: 0xacb00010  sw          $s0, 0x10($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241864u;
            goto label_241864;
        }
    }
    ctx->pc = 0x24185Cu;
    // 0x24185c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24185Cu;
    {
        const bool branch_taken_0x24185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24185Cu;
        // 0x241860: 0xacb00014  sw          $s0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24185c) {
            ctx->pc = 0x241868u;
            goto label_241868;
        }
    }
    ctx->pc = 0x241864u;
label_241864:
    // 0x241864: 0xaca60014  sw          $a2, 0x14($a1)
    ctx->pc = 0x241864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
label_241868:
    // 0x241868: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x241868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24186c:
    // 0x24186c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241870: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x241870u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241874: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x241874u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241878: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x241878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24187c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24187cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241888: 0x3e00008  jr          $ra
    ctx->pc = 0x241888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241888u;
        // 0x24188c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241890u;
}
