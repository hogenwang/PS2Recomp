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

// Function: sub_002F1968
// Address: 0x2f1968 - 0x2f1bd8
void sub_002F1968_0x2f1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1968_0x2f1968");
#endif

    switch (ctx->pc) {
        case 0x2f19d0u: goto label_2f19d0;
        case 0x2f19d4u: goto label_2f19d4;
        case 0x2f19f8u: goto label_2f19f8;
        case 0x2f1a34u: goto label_2f1a34;
        case 0x2f1a54u: goto label_2f1a54;
        case 0x2f1a9cu: goto label_2f1a9c;
        case 0x2f1ab8u: goto label_2f1ab8;
        case 0x2f1b04u: goto label_2f1b04;
        case 0x2f1b34u: goto label_2f1b34;
        case 0x2f1b3cu: goto label_2f1b3c;
        case 0x2f1b48u: goto label_2f1b48;
        case 0x2f1b70u: goto label_2f1b70;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bc0u: goto label_2f1bc0;
        case 0x2f1bd0u: goto label_2f1bd0;
        default: break;
    }

    ctx->pc = 0x2f1968u;

    // 0x2f1968: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f1968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f196c: 0x240f0082  addiu       $t7, $zero, 0x82
    ctx->pc = 0x2f196cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2f1970: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2f1970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2f1974: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2f1974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2f1978: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2f1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2f197c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f197cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1980: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2f1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2f1984: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f1984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f1988: 0x908e0000  lbu         $t6, 0x0($a0)
    ctx->pc = 0x2f1988u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f198c: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F198Cu;
    {
        const bool branch_taken_0x2f198c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2F1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F198Cu;
        // 0x2f1990: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f198c) {
            ctx->pc = 0x2F19A0u;
            goto label_2f19a0;
        }
    }
    ctx->pc = 0x2F1994u;
    // 0x2f1994: 0x240f0028  addiu       $t7, $zero, 0x28
    ctx->pc = 0x2f1994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2f1998: 0x15cf000d  bne         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2F1998u;
    {
        const bool branch_taken_0x2f1998 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1998u;
        // 0x2f199c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1998) {
            ctx->pc = 0x2F19D0u;
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F19A0u;
label_2f19a0:
    // 0x2f19a0: 0x2a0f000c  slti        $t7, $s0, 0xC
    ctx->pc = 0x2f19a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f19a4: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F19A4u;
    {
        const bool branch_taken_0x2f19a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19A4u;
        // 0x2f19a8: 0x3c07ffff  lui         $a3, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19a4) {
            ctx->pc = 0x2F19ECu;
            goto label_2f19ec;
        }
    }
    ctx->pc = 0x2F19ACu;
    // 0x2f19ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f19acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f19b0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f19b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f19b4: 0x24841a20  addiu       $a0, $a0, 0x1A20
    ctx->pc = 0x2f19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    // 0x2f19b8: 0x25081a30  addiu       $t0, $t0, 0x1A30
    ctx->pc = 0x2f19b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6704));
    // 0x2f19bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f19bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19c0: 0x240510c5  addiu       $a1, $zero, 0x10C5
    ctx->pc = 0x2f19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4293));
    // 0x2f19c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f19c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f19c8: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F19C8u;
    SET_GPR_U32(ctx, 31, 0x2F19D0u);
    ctx->pc = 0x2F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19C8u;
    // 0x2f19cc: 0x34e763bc  ori         $a3, $a3, 0x63BC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25532);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F19C8u, 0x2F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19D0u;
label_2f19d0:
    // 0x2f19d0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2f19d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f19d4:
    // 0x2f19d4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2f19d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f19d8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2f19d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f19dc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2f19dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f19e0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f19e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f19e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F19E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19E4u;
        // 0x2f19e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F19E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F19ECu;
label_2f19ec:
    // 0x2f19ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f19ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19f0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2F19F0u;
    SET_GPR_U32(ctx, 31, 0x2F19F8u);
    ctx->pc = 0x2F19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19F0u;
    // 0x2f19f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2F19F0u, 0x2F19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19F8u;
label_2f19f8:
    // 0x2f19f8: 0x97af0084  lhu         $t7, 0x84($sp)
    ctx->pc = 0x2f19f8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2f19fc: 0x4f8821  addu        $s1, $v0, $t7
    ctx->pc = 0x2f19fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2f1a00: 0x211702a  slt         $t6, $s0, $s1
    ctx->pc = 0x2f1a00u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f1a04: 0x11c0000d  beqz        $t6, . + 4 + (0xD << 2)
    ctx->pc = 0x2F1A04u;
    {
        const bool branch_taken_0x2f1a04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A04u;
        // 0x2f1a08: 0x3c07ffff  lui         $a3, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a04) {
            ctx->pc = 0x2F1A3Cu;
            goto label_2f1a3c;
        }
    }
    ctx->pc = 0x2F1A0Cu;
    // 0x2f1a0c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1a10: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f1a10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f1a14: 0x24841a20  addiu       $a0, $a0, 0x1A20
    ctx->pc = 0x2f1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    // 0x2f1a18: 0x25081a50  addiu       $t0, $t0, 0x1A50
    ctx->pc = 0x2f1a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6736));
    // 0x2f1a1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a20: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2f1a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a24: 0x240510cd  addiu       $a1, $zero, 0x10CD
    ctx->pc = 0x2f1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4301));
    // 0x2f1a28: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1a2c: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F1A2Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A34u);
    ctx->pc = 0x2F1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A2Cu;
    // 0x2f1a30: 0x34e763bc  ori         $a3, $a3, 0x63BC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25532);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F1A2Cu, 0x2F1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A34u;
label_2f1a34:
    // 0x2f1a34: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2F1A34u;
    {
        const bool branch_taken_0x2f1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A34u;
        // 0x2f1a38: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a34) {
            ctx->pc = 0x2F19D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1A3Cu;
label_2f1a3c:
    // 0x2f1a3c: 0x97ad0082  lhu         $t5, 0x82($sp)
    ctx->pc = 0x2f1a3cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 130)));
    // 0x2f1a40: 0x240f1021  addiu       $t7, $zero, 0x1021
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4129));
    // 0x2f1a44: 0x15af0007  bne         $t5, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F1A44u;
    {
        const bool branch_taken_0x2f1a44 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A44u;
        // 0x2f1a48: 0x240f1022  addiu       $t7, $zero, 0x1022 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a44) {
            ctx->pc = 0x2F1A64u;
            goto label_2f1a64;
        }
    }
    ctx->pc = 0x2F1A4Cu;
    // 0x2f1a4c: 0xc0bc644  jal         func_2F1910
    ctx->pc = 0x2F1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2F1A54u);
    ctx->pc = 0x2F1910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1910u, 0x2F1A4Cu, 0x2F1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A54u;
label_2f1a54:
    // 0x2f1a54: 0x284f0000  slti        $t7, $v0, 0x0
    ctx->pc = 0x2f1a54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f1a58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1a5c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F1A5Cu;
    {
        const bool branch_taken_0x2f1a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A5Cu;
        // 0x2f1a60: 0x22f100a  movz        $v0, $s1, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a5c) {
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1A64u;
label_2f1a64:
    // 0x2f1a64: 0x15af003a  bne         $t5, $t7, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F1A64u;
    {
        const bool branch_taken_0x2f1a64 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A64u;
        // 0x2f1a68: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1a64) {
            ctx->pc = 0x2F1B50u;
            goto label_2f1b50;
        }
    }
    ctx->pc = 0x2F1A6Cu;
    // 0x2f1a6c: 0x97a80086  lhu         $t0, 0x86($sp)
    ctx->pc = 0x2f1a6cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 134)));
    // 0x2f1a70: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f1a74: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1a78: 0x1107021  addu        $t6, $t0, $s0
    ctx->pc = 0x2f1a78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2f1a7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f1a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1a80: 0xa1cf03b4  sb          $t7, 0x3B4($t6)
    ctx->pc = 0x2f1a80u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 948), (uint8_t)GPR_U32(ctx, 15));
    // 0x2f1a84: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1a88: 0x24841a20  addiu       $a0, $a0, 0x1A20
    ctx->pc = 0x2f1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    // 0x2f1a8c: 0x24e71a70  addiu       $a3, $a3, 0x1A70
    ctx->pc = 0x2f1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6768));
    // 0x2f1a90: 0x240510e2  addiu       $a1, $zero, 0x10E2
    ctx->pc = 0x2f1a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4322));
    // 0x2f1a94: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1A94u;
    SET_GPR_U32(ctx, 31, 0x2F1A9Cu);
    ctx->pc = 0x2F1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A94u;
    // 0x2f1a98: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F1A94u, 0x2F1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A9Cu;
label_2f1a9c:
    // 0x2f1a9c: 0x920e03b3  lbu         $t6, 0x3B3($s0)
    ctx->pc = 0x2f1a9cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 947)));
    // 0x2f1aa0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f1aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1aa4: 0x15cfffca  bne         $t6, $t7, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2F1AA4u;
    {
        const bool branch_taken_0x2f1aa4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AA4u;
        // 0x2f1aa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1aa4) {
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1AACu;
    // 0x2f1aac: 0x260d03b4  addiu       $t5, $s0, 0x3B4
    ctx->pc = 0x2f1aacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x2f1ab0: 0x240e000f  addiu       $t6, $zero, 0xF
    ctx->pc = 0x2f1ab0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f1ab4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f1ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ab8:
    // 0x2f1ab8: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x2f1ab8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2f1abc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2f1abcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2f1ac0: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x2f1ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x2f1ac4: 0x0  nop
    ctx->pc = 0x2f1ac4u;
    // NOP
    // 0x2f1ac8: 0x0  nop
    ctx->pc = 0x2f1ac8u;
    // NOP
    // 0x2f1acc: 0x5c1fffa  bgez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F1ACCu;
    {
        const bool branch_taken_0x2f1acc = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x2F1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1ACCu;
        // 0x2f1ad0: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1acc) {
            ctx->pc = 0x2F1AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1ab8;
        }
    }
    ctx->pc = 0x2F1AD4u;
    // 0x2f1ad4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f1ad8: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x2f1ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x2f1adc: 0x25f2eca8  addiu       $s2, $t7, -0x1358
    ctx->pc = 0x2f1adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f1ae0: 0x25d31a20  addiu       $s3, $t6, 0x1A20
    ctx->pc = 0x2f1ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 6688));
    // 0x2f1ae4: 0x8e490378  lw          $t1, 0x378($s2)
    ctx->pc = 0x2f1ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
    // 0x2f1ae8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1aec: 0x24e71a88  addiu       $a3, $a3, 0x1A88
    ctx->pc = 0x2f1aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6792));
    // 0x2f1af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af4: 0x240510ea  addiu       $a1, $zero, 0x10EA
    ctx->pc = 0x2f1af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4330));
    // 0x2f1af8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2f1af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f1afc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1AFCu;
    SET_GPR_U32(ctx, 31, 0x2F1B04u);
    ctx->pc = 0x2F1B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AFCu;
    // 0x2f1b00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F1AFCu, 0x2F1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B04u;
label_2f1b04:
    // 0x2f1b04: 0x8e4f0378  lw          $t7, 0x378($s2)
    ctx->pc = 0x2f1b04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
    // 0x2f1b08: 0x55f0ffb1  bnel        $t7, $s0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2F1B08u;
    {
        const bool branch_taken_0x2f1b08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f1b08) {
            ctx->pc = 0x2F1B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1B08u;
            // 0x2f1b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1B10u;
    // 0x2f1b10: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2f1b10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1b14: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1b18: 0xa24f03b3  sb          $t7, 0x3B3($s2)
    ctx->pc = 0x2f1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 947), (uint8_t)GPR_U32(ctx, 15));
    // 0x2f1b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b20: 0x24e71aa0  addiu       $a3, $a3, 0x1AA0
    ctx->pc = 0x2f1b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6816));
    // 0x2f1b24: 0x240510ee  addiu       $a1, $zero, 0x10EE
    ctx->pc = 0x2f1b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4334));
    // 0x2f1b28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2f1b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f1b2c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B34u);
    ctx->pc = 0x2F1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B2Cu;
    // 0x2f1b30: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F1B2Cu, 0x2F1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B34u;
label_2f1b34:
    // 0x2f1b34: 0xc0bc644  jal         func_2F1910
    ctx->pc = 0x2F1B34u;
    SET_GPR_U32(ctx, 31, 0x2F1B3Cu);
    ctx->pc = 0x2F1910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1910u, 0x2F1B34u, 0x2F1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B3Cu;
label_2f1b3c:
    // 0x2f1b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b40: 0x600ffa3  bltz        $s0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2F1B40u;
    {
        const bool branch_taken_0x2f1b40 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2F1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B40u;
        // 0x2f1b44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b40) {
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1B48u;
label_2f1b48:
    // 0x2f1b48: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x2F1B48u;
    {
        const bool branch_taken_0x2f1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B48u;
        // 0x2f1b4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b48) {
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1B50u;
label_2f1b50:
    // 0x2f1b50: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2f1b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f1b54: 0x920e03b3  lbu         $t6, 0x3B3($s0)
    ctx->pc = 0x2f1b54u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 947)));
    // 0x2f1b58: 0x15c00013  bnez        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F1B58u;
    {
        const bool branch_taken_0x2f1b58 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B58u;
        // 0x2f1b5c: 0x240f1031  addiu       $t7, $zero, 0x1031 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b58) {
            ctx->pc = 0x2F1BA8u;
            goto label_2f1ba8;
        }
    }
    ctx->pc = 0x2F1B60u;
    // 0x2f1b60: 0x15af0011  bne         $t5, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F1B60u;
    {
        const bool branch_taken_0x2f1b60 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1B60u;
        // 0x2f1b64: 0x97a50086  lhu         $a1, 0x86($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 134)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1b60) {
            ctx->pc = 0x2F1BA8u;
            goto label_2f1ba8;
        }
    }
    ctx->pc = 0x2F1B68u;
    // 0x2f1b68: 0xc0bc624  jal         func_2F1890
    ctx->pc = 0x2F1B68u;
    SET_GPR_U32(ctx, 31, 0x2F1B70u);
    ctx->pc = 0x2F1B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B68u;
    // 0x2f1b6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1890u, 0x2F1B68u, 0x2F1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B70u;
label_2f1b70:
    // 0x2f1b70: 0x8e0f00b0  lw          $t7, 0xB0($s0)
    ctx->pc = 0x2f1b70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2f1b74: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2f1b74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1b78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1b7c: 0xa20e03b3  sb          $t6, 0x3B3($s0)
    ctx->pc = 0x2f1b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 947), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f1b80: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x2f1b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2f1b84: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1b88: 0xa1ee03b4  sb          $t6, 0x3B4($t7)
    ctx->pc = 0x2f1b88u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 948), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f1b8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f1b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b90: 0x24841a20  addiu       $a0, $a0, 0x1A20
    ctx->pc = 0x2f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    // 0x2f1b94: 0x24e71aa0  addiu       $a3, $a3, 0x1AA0
    ctx->pc = 0x2f1b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6816));
    // 0x2f1b98: 0x24051101  addiu       $a1, $zero, 0x1101
    ctx->pc = 0x2f1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x2f1b9c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2f1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f1ba0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1BA0u;
    SET_GPR_U32(ctx, 31, 0x2F1BA8u);
    ctx->pc = 0x2F1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BA0u;
    // 0x2f1ba4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F1BA0u, 0x2F1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BA8u;
label_2f1ba8:
    // 0x2f1ba8: 0x1240ffe7  beqz        $s2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2F1BA8u;
    {
        const bool branch_taken_0x2f1ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BA8u;
        // 0x2f1bac: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ba8) {
            ctx->pc = 0x2F1B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1b48;
        }
    }
    ctx->pc = 0x2F1BB0u;
    // 0x2f1bb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f1bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bb4: 0x8de4ecb8  lw          $a0, -0x1348($t7)
    ctx->pc = 0x2f1bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962360)));
    // 0x2f1bb8: 0xc089056  jal         func_224158
    ctx->pc = 0x2F1BB8u;
    SET_GPR_U32(ctx, 31, 0x2F1BC0u);
    ctx->pc = 0x2F1BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BB8u;
    // 0x2f1bbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224158u, 0x2F1BB8u, 0x2F1BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BC0u;
label_2f1bc0:
    // 0x2f1bc0: 0x443ff83  bgezl       $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2F1BC0u;
    {
        const bool branch_taken_0x2f1bc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f1bc0) {
            ctx->pc = 0x2F1BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1BC0u;
            // 0x2f1bc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1BC8u;
    // 0x2f1bc8: 0xc0bb75c  jal         func_2EDD70
    ctx->pc = 0x2F1BC8u;
    SET_GPR_U32(ctx, 31, 0x2F1BD0u);
    ctx->pc = 0x2EDD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD70u, 0x2F1BC8u, 0x2F1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BD0u;
label_2f1bd0:
    // 0x2f1bd0: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
    ctx->pc = 0x2F1BD0u;
    {
        const bool branch_taken_0x2f1bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BD0u;
        // 0x2f1bd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1bd0) {
            ctx->pc = 0x2F19D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f19d0;
        }
    }
    ctx->pc = 0x2F1BD8u;
}
