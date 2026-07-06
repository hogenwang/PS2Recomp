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

// Function: sub_0013C980
// Address: 0x13c980 - 0x13cb60
void sub_0013C980_0x13c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C980_0x13c980");
#endif

    switch (ctx->pc) {
        case 0x13c9a0u: goto label_13c9a0;
        case 0x13c9ccu: goto label_13c9cc;
        case 0x13cb30u: goto label_13cb30;
        default: break;
    }

    ctx->pc = 0x13c980u;

    // 0x13c980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c998: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C998u;
    SET_GPR_U32(ctx, 31, 0x13C9A0u);
    ctx->pc = 0x13C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C998u;
    // 0x13c99c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E200u, 0x13C998u, 0x13C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9A0u;
label_13c9a0:
    // 0x13c9a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C9A0u;
    {
        const bool branch_taken_0x13c9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c9a0) {
            ctx->pc = 0x13C9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C9A0u;
            // 0x13c9a4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C9C4u;
            goto label_13c9c4;
        }
    }
    ctx->pc = 0x13C9A8u;
    // 0x13c9a8: 0x8e22023c  lw          $v0, 0x23C($s1)
    ctx->pc = 0x13c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c9ac: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13c9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13c9b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C9B0u;
    {
        const bool branch_taken_0x13c9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c9b0) {
            ctx->pc = 0x13C9C0u;
            goto label_13c9c0;
        }
    }
    ctx->pc = 0x13C9B8u;
    // 0x13c9b8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x13C9B8u;
    {
        const bool branch_taken_0x13c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9B8u;
        // 0x13c9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9b8) {
            ctx->pc = 0x13CB4Cu;
            goto label_13cb4c;
        }
    }
    ctx->pc = 0x13C9C0u;
label_13c9c0:
    // 0x13c9c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_13c9c4:
    // 0x13c9c4: 0xc04f8a0  jal         func_13E280
    ctx->pc = 0x13C9C4u;
    SET_GPR_U32(ctx, 31, 0x13C9CCu);
    ctx->pc = 0x13C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9C4u;
    // 0x13c9c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E280u, 0x13C9C4u, 0x13C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9CCu;
label_13c9cc:
    // 0x13c9cc: 0x8e28023c  lw          $t0, 0x23C($s1)
    ctx->pc = 0x13c9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13c9d0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x13c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x13c9d4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x13c9d8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13c9dc: 0x240701f4  addiu       $a3, $zero, 0x1F4
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x13c9e0: 0x24c6c970  addiu       $a2, $a2, -0x3690
    ctx->pc = 0x13c9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953328));
    // 0x13c9e4: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x13c9e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x13c9e8: 0x24a5c770  addiu       $a1, $a1, -0x3890
    ctx->pc = 0x13c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952816));
    // 0x13c9ec: 0xae28023c  sw          $t0, 0x23C($s1)
    ctx->pc = 0x13c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 8));
    // 0x13c9f0: 0x2463ca70  addiu       $v1, $v1, -0x3590
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953584));
    // 0x13c9f4: 0xa6270246  sh          $a3, 0x246($s1)
    ctx->pc = 0x13c9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 7));
    // 0x13c9f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c9fc: 0x92070204  lbu         $a3, 0x204($s0)
    ctx->pc = 0x13c9fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x13ca00: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13ca04: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x13ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13ca08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13ca0c: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x13ca0cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ca10: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x13ca10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13ca14: 0x10440027  beq         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13CA14u;
    {
        const bool branch_taken_0x13ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA14u;
        // 0x13ca18: 0x90650000  lbu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca14) {
            ctx->pc = 0x13CAB4u;
            goto label_13cab4;
        }
    }
    ctx->pc = 0x13CA1Cu;
    // 0x13ca1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ca20: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13CA20u;
    {
        const bool branch_taken_0x13ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13ca20) {
            ctx->pc = 0x13CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA20u;
            // 0x13ca24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA6Cu;
            goto label_13ca6c;
        }
    }
    ctx->pc = 0x13CA28u;
    // 0x13ca28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CA28u;
    {
        const bool branch_taken_0x13ca28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ca28) {
            ctx->pc = 0x13CA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA28u;
            // 0x13ca2c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA38u;
            goto label_13ca38;
        }
    }
    ctx->pc = 0x13CA30u;
    // 0x13ca30: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x13CA30u;
    {
        const bool branch_taken_0x13ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA30u;
        // 0x13ca34: 0x8e24023c  lw          $a0, 0x23C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca30) {
            ctx->pc = 0x13CB3Cu;
            goto label_13cb3c;
        }
    }
    ctx->pc = 0x13CA38u;
label_13ca38:
    // 0x13ca38: 0x54a2003f  bnel        $a1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x13CA38u;
    {
        const bool branch_taken_0x13ca38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ca38) {
            ctx->pc = 0x13CA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA38u;
            // 0x13ca3c: 0xa6200240  sh          $zero, 0x240($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 576), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB38u;
            goto label_13cb38;
        }
    }
    ctx->pc = 0x13CA40u;
    // 0x13ca40: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x13ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x13ca44: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13ca48: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13ca4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ca4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca50: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13ca50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13ca54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ca54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13ca58: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13ca5c: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13ca60: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x13ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13ca64: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x13CA64u;
    {
        const bool branch_taken_0x13ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA64u;
        // 0x13ca68: 0xae23023c  sw          $v1, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca64) {
            ctx->pc = 0x13CB4Cu;
            goto label_13cb4c;
        }
    }
    ctx->pc = 0x13CA6Cu;
label_13ca6c:
    // 0x13ca6c: 0x50e20007  beql        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13CA6Cu;
    {
        const bool branch_taken_0x13ca6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ca6c) {
            ctx->pc = 0x13CA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA6Cu;
            // 0x13ca70: 0x8e25023c  lw          $a1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA8Cu;
            goto label_13ca8c;
        }
    }
    ctx->pc = 0x13CA74u;
    // 0x13ca74: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CA74u;
    {
        const bool branch_taken_0x13ca74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x13ca74) {
            ctx->pc = 0x13CA88u;
            goto label_13ca88;
        }
    }
    ctx->pc = 0x13CA7Cu;
    // 0x13ca7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13ca80: 0x54a2002d  bnel        $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13CA80u;
    {
        const bool branch_taken_0x13ca80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ca80) {
            ctx->pc = 0x13CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CA80u;
            // 0x13ca84: 0xa6230240  sh          $v1, 0x240($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 576), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB38u;
            goto label_13cb38;
        }
    }
    ctx->pc = 0x13CA88u;
label_13ca88:
    // 0x13ca88: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x13ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13ca8c:
    // 0x13ca8c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13ca90: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13ca94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca98: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13ca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13ca9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13caa0: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13caa4: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13caa8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x13caa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13caac: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13CAACu;
    {
        const bool branch_taken_0x13caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CAACu;
        // 0x13cab0: 0xae23023c  sw          $v1, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13caac) {
            ctx->pc = 0x13CB4Cu;
            goto label_13cb4c;
        }
    }
    ctx->pc = 0x13CAB4u;
label_13cab4:
    // 0x13cab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cab8: 0x50e3000e  beql        $a3, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13CAB8u;
    {
        const bool branch_taken_0x13cab8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cab8) {
            ctx->pc = 0x13CABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CAB8u;
            // 0x13cabc: 0x8e25023c  lw          $a1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CAF4u;
            goto label_13caf4;
        }
    }
    ctx->pc = 0x13CAC0u;
    // 0x13cac0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13cac4: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13CAC4u;
    {
        const bool branch_taken_0x13cac4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x13cac4) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13CACCu;
    // 0x13cacc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13CACCu;
    {
        const bool branch_taken_0x13cacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cacc) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13CAD4u;
    // 0x13cad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cad8: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CAD8u;
    {
        const bool branch_taken_0x13cad8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x13cad8) {
            ctx->pc = 0x13CAF0u;
            goto label_13caf0;
        }
    }
    ctx->pc = 0x13CAE0u;
    // 0x13cae0: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x13cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x13cae4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13cae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13cae8: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13CAE8u;
    {
        const bool branch_taken_0x13cae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cae8) {
            ctx->pc = 0x13CAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CAE8u;
            // 0x13caec: 0x8e23023c  lw          $v1, 0x23C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CB1Cu;
            goto label_13cb1c;
        }
    }
    ctx->pc = 0x13CAF0u;
label_13caf0:
    // 0x13caf0: 0x8e25023c  lw          $a1, 0x23C($s1)
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13caf4:
    // 0x13caf4: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13caf8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x13cafc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13cafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb00: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13cb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13cb04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13cb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13cb08: 0xae24023c  sw          $a0, 0x23C($s1)
    ctx->pc = 0x13cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 4));
    // 0x13cb0c: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x13cb10: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x13cb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x13cb14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13CB14u;
    {
        const bool branch_taken_0x13cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB14u;
        // 0x13cb18: 0xae23023c  sw          $v1, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb14) {
            ctx->pc = 0x13CB4Cu;
            goto label_13cb4c;
        }
    }
    ctx->pc = 0x13CB1Cu;
label_13cb1c:
    // 0x13cb1c: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x13cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13cb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13cb28: 0xc04f8d0  jal         func_13E340
    ctx->pc = 0x13CB28u;
    SET_GPR_U32(ctx, 31, 0x13CB30u);
    ctx->pc = 0x13CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB28u;
    // 0x13cb2c: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E340u, 0x13CB28u, 0x13CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB30u;
label_13cb30:
    // 0x13cb30: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x13cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13cb34: 0xa6220240  sh          $v0, 0x240($s1)
    ctx->pc = 0x13cb34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 576), (uint16_t)GPR_U32(ctx, 2));
label_13cb38:
    // 0x13cb38: 0x8e24023c  lw          $a0, 0x23C($s1)
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
label_13cb3c:
    // 0x13cb3c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x13cb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cb44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13cb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13cb48: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x13cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
label_13cb4c:
    // 0x13cb4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x13CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB58u;
        // 0x13cb5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CB60u;
}
