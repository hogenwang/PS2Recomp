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

// Function: sub_00211950
// Address: 0x211950 - 0x211a60
void sub_00211950_0x211950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211950_0x211950");
#endif

    switch (ctx->pc) {
        case 0x211960u: goto label_211960;
        case 0x211998u: goto label_211998;
        case 0x2119d4u: goto label_2119d4;
        case 0x211a1cu: goto label_211a1c;
        default: break;
    }

    ctx->pc = 0x211950u;

    // 0x211950: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x211950u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x211954: 0x11c00040  beqz        $t6, . + 4 + (0x40 << 2)
    ctx->pc = 0x211954u;
    {
        const bool branch_taken_0x211954 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x211958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211954u;
        // 0x211958: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211954) {
            ctx->pc = 0x211A58u;
            goto label_211a58;
        }
    }
    ctx->pc = 0x21195Cu;
    // 0x21195c: 0x1ee6023  subu        $t4, $t7, $t6
    ctx->pc = 0x21195cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_211960:
    // 0x211960: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211964: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211968: 0x8dedab5c  lw          $t5, -0x54A4($t7)
    ctx->pc = 0x211968u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945628)));
    // 0x21196c: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21196cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x211970: 0x11e00037  beqz        $t7, . + 4 + (0x37 << 2)
    ctx->pc = 0x211970u;
    {
        const bool branch_taken_0x211970 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x211974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211970u;
        // 0x211974: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211970) {
            ctx->pc = 0x211A50u;
            goto label_211a50;
        }
    }
    ctx->pc = 0x211978u;
    // 0x211978: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x211978u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21197c: 0x25af0003  addiu       $t7, $t5, 0x3
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x211980: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x211980u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x211984: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x211984u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x211988: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21198c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x211990: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x211994: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_211998:
    // 0x211998: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21199c: 0x16e7021  addu        $t6, $t3, $t6
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2119a0: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2119a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2119a4: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x2119a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x2119a8: 0x816f0000  lb          $t7, 0x0($t3)
    ctx->pc = 0x2119a8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2119ac: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x2119acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x2119b0: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2119b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2119b4: 0x1a6782b  sltu        $t7, $t5, $a2
    ctx->pc = 0x2119b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2119b8: 0x15e00023  bnez        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x2119B8u;
    {
        const bool branch_taken_0x2119b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2119BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119B8u;
        // 0x2119bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119b8) {
            ctx->pc = 0x211A48u;
            goto label_211a48;
        }
    }
    ctx->pc = 0x2119C0u;
    // 0x2119c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2119c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2119c4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2119c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2119c8: 0x50cf000d  beql        $a2, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2119C8u;
    {
        const bool branch_taken_0x2119c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        if (branch_taken_0x2119c8) {
            ctx->pc = 0x2119CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2119C8u;
            // 0x2119cc: 0x8c8f0000  lw          $t7, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A00u;
            goto label_211a00;
        }
    }
    ctx->pc = 0x2119D0u;
    // 0x2119d0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2119d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2119d4:
    // 0x2119d4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2119d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2119d8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2119dc: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x2119dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x2119e0: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x2119e0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2119e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2119e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2119e8: 0xa1cd0000  sb          $t5, 0x0($t6)
    ctx->pc = 0x2119e8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x2119ec: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2119f0: 0x14cbfff8  bne         $a2, $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2119F0u;
    {
        const bool branch_taken_0x2119f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x2119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119F0u;
        // 0x2119f4: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119f0) {
            ctx->pc = 0x2119D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2119d4;
        }
    }
    ctx->pc = 0x2119F8u;
    // 0x2119f8: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2119f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2119fc: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_211a00:
    // 0x211a00: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211a04: 0x1ea7021  addu        $t6, $t7, $t2
    ctx->pc = 0x211a04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x211a08: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211a0c: 0x118f000b  beq         $t4, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x211A0Cu;
    {
        const bool branch_taken_0x211a0c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x211A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A0Cu;
        // 0x211a10: 0xac8e0000  sw          $t6, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a0c) {
            ctx->pc = 0x211A3Cu;
            goto label_211a3c;
        }
    }
    ctx->pc = 0x211A14u;
    // 0x211a14: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x211a14u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a18: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211a1c:
    // 0x211a1c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x211a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x211a20: 0x0  nop
    ctx->pc = 0x211a20u;
    // NOP
    // 0x211a24: 0x0  nop
    ctx->pc = 0x211a24u;
    // NOP
    // 0x211a28: 0x0  nop
    ctx->pc = 0x211a28u;
    // NOP
    // 0x211a2c: 0x0  nop
    ctx->pc = 0x211a2cu;
    // NOP
    // 0x211a30: 0x158efffa  bne         $t4, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x211A30u;
    {
        const bool branch_taken_0x211a30 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        ctx->pc = 0x211A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A30u;
        // 0x211a34: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a30) {
            ctx->pc = 0x211A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211a1c;
        }
    }
    ctx->pc = 0x211A38u;
    // 0x211a38: 0xac8f0000  sw          $t7, 0x0($a0)
    ctx->pc = 0x211a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
label_211a3c:
    // 0x211a3c: 0x1aa7823  subu        $t7, $t5, $t2
    ctx->pc = 0x211a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x211a40: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a44: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x211a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
label_211a48:
    // 0x211a48: 0x3e00008  jr          $ra
    ctx->pc = 0x211A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211A50u;
label_211a50:
    // 0x211a50: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x211A50u;
    {
        const bool branch_taken_0x211a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A50u;
        // 0x211a54: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a50) {
            ctx->pc = 0x211998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211998;
        }
    }
    ctx->pc = 0x211A58u;
label_211a58:
    // 0x211a58: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x211A58u;
    {
        const bool branch_taken_0x211a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A58u;
        // 0x211a5c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a58) {
            ctx->pc = 0x211960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211960;
        }
    }
    ctx->pc = 0x211A60u;
}
