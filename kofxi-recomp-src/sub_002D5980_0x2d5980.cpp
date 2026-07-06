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

// Function: sub_002D5980
// Address: 0x2d5980 - 0x2d5b20
void sub_002D5980_0x2d5980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5980_0x2d5980");
#endif

    switch (ctx->pc) {
        case 0x2d5980u: goto label_2d5980;
        case 0x2d5984u: goto label_2d5984;
        case 0x2d5988u: goto label_2d5988;
        case 0x2d598cu: goto label_2d598c;
        case 0x2d5990u: goto label_2d5990;
        case 0x2d5994u: goto label_2d5994;
        case 0x2d5998u: goto label_2d5998;
        case 0x2d599cu: goto label_2d599c;
        case 0x2d59a0u: goto label_2d59a0;
        case 0x2d59a4u: goto label_2d59a4;
        case 0x2d59a8u: goto label_2d59a8;
        case 0x2d59acu: goto label_2d59ac;
        case 0x2d59b0u: goto label_2d59b0;
        case 0x2d59b4u: goto label_2d59b4;
        case 0x2d59b8u: goto label_2d59b8;
        case 0x2d59bcu: goto label_2d59bc;
        case 0x2d59c0u: goto label_2d59c0;
        case 0x2d59c4u: goto label_2d59c4;
        case 0x2d59c8u: goto label_2d59c8;
        case 0x2d59ccu: goto label_2d59cc;
        case 0x2d59d0u: goto label_2d59d0;
        case 0x2d59d4u: goto label_2d59d4;
        case 0x2d59d8u: goto label_2d59d8;
        case 0x2d59dcu: goto label_2d59dc;
        case 0x2d59e0u: goto label_2d59e0;
        case 0x2d59e4u: goto label_2d59e4;
        case 0x2d59e8u: goto label_2d59e8;
        case 0x2d59ecu: goto label_2d59ec;
        case 0x2d59f0u: goto label_2d59f0;
        case 0x2d59f4u: goto label_2d59f4;
        case 0x2d59f8u: goto label_2d59f8;
        case 0x2d59fcu: goto label_2d59fc;
        case 0x2d5a00u: goto label_2d5a00;
        case 0x2d5a04u: goto label_2d5a04;
        case 0x2d5a08u: goto label_2d5a08;
        case 0x2d5a0cu: goto label_2d5a0c;
        case 0x2d5a10u: goto label_2d5a10;
        case 0x2d5a14u: goto label_2d5a14;
        case 0x2d5a18u: goto label_2d5a18;
        case 0x2d5a1cu: goto label_2d5a1c;
        case 0x2d5a20u: goto label_2d5a20;
        case 0x2d5a24u: goto label_2d5a24;
        case 0x2d5a28u: goto label_2d5a28;
        case 0x2d5a2cu: goto label_2d5a2c;
        case 0x2d5a30u: goto label_2d5a30;
        case 0x2d5a34u: goto label_2d5a34;
        case 0x2d5a38u: goto label_2d5a38;
        case 0x2d5a3cu: goto label_2d5a3c;
        case 0x2d5a40u: goto label_2d5a40;
        case 0x2d5a44u: goto label_2d5a44;
        case 0x2d5a48u: goto label_2d5a48;
        case 0x2d5a4cu: goto label_2d5a4c;
        case 0x2d5a50u: goto label_2d5a50;
        case 0x2d5a54u: goto label_2d5a54;
        case 0x2d5a58u: goto label_2d5a58;
        case 0x2d5a5cu: goto label_2d5a5c;
        case 0x2d5a60u: goto label_2d5a60;
        case 0x2d5a64u: goto label_2d5a64;
        case 0x2d5a68u: goto label_2d5a68;
        case 0x2d5a6cu: goto label_2d5a6c;
        case 0x2d5a70u: goto label_2d5a70;
        case 0x2d5a74u: goto label_2d5a74;
        case 0x2d5a78u: goto label_2d5a78;
        case 0x2d5a7cu: goto label_2d5a7c;
        case 0x2d5a80u: goto label_2d5a80;
        case 0x2d5a84u: goto label_2d5a84;
        case 0x2d5a88u: goto label_2d5a88;
        case 0x2d5a8cu: goto label_2d5a8c;
        case 0x2d5a90u: goto label_2d5a90;
        case 0x2d5a94u: goto label_2d5a94;
        case 0x2d5a98u: goto label_2d5a98;
        case 0x2d5a9cu: goto label_2d5a9c;
        case 0x2d5aa0u: goto label_2d5aa0;
        case 0x2d5aa4u: goto label_2d5aa4;
        case 0x2d5aa8u: goto label_2d5aa8;
        case 0x2d5aacu: goto label_2d5aac;
        case 0x2d5ab0u: goto label_2d5ab0;
        case 0x2d5ab4u: goto label_2d5ab4;
        case 0x2d5ab8u: goto label_2d5ab8;
        case 0x2d5abcu: goto label_2d5abc;
        case 0x2d5ac0u: goto label_2d5ac0;
        case 0x2d5ac4u: goto label_2d5ac4;
        case 0x2d5ac8u: goto label_2d5ac8;
        case 0x2d5accu: goto label_2d5acc;
        case 0x2d5ad0u: goto label_2d5ad0;
        case 0x2d5ad4u: goto label_2d5ad4;
        case 0x2d5ad8u: goto label_2d5ad8;
        case 0x2d5adcu: goto label_2d5adc;
        case 0x2d5ae0u: goto label_2d5ae0;
        case 0x2d5ae4u: goto label_2d5ae4;
        case 0x2d5ae8u: goto label_2d5ae8;
        case 0x2d5aecu: goto label_2d5aec;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5af4u: goto label_2d5af4;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5afcu: goto label_2d5afc;
        case 0x2d5b00u: goto label_2d5b00;
        case 0x2d5b04u: goto label_2d5b04;
        case 0x2d5b08u: goto label_2d5b08;
        case 0x2d5b0cu: goto label_2d5b0c;
        case 0x2d5b10u: goto label_2d5b10;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b18u: goto label_2d5b18;
        case 0x2d5b1cu: goto label_2d5b1c;
        default: break;
    }

    ctx->pc = 0x2d5980u;

label_2d5980:
    // 0x2d5980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d5984:
    // 0x2d5984: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d5984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2d5988:
    // 0x2d5988: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d598c:
    // 0x2d598c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d5990:
    // 0x2d5990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d5990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d5994:
    // 0x2d5994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d5994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5998:
    // 0x2d5998: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d5998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2d599c:
    // 0x2d599c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2d599cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d59a0:
    // 0x2d59a0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2d59a4:
    // 0x2d59a4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2d59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2d59a8:
    // 0x2d59a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d59ac:
    // 0x2d59ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d59acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2d59b0:
    // 0x2d59b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2d59b4:
    // 0x2d59b4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d59b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2d59b8:
    // 0x2d59b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d59b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2d59bc:
    // 0x2d59bc: 0x8fb70068  lw          $s7, 0x68($sp)
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2d59c0:
    // 0x2d59c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d59c4:
    // 0x2d59c4: 0x8cb5fff8  lw          $s5, -0x8($a1)
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_2d59c8:
    // 0x2d59c8: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x2d59c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2d59cc:
    // 0x2d59cc: 0x8eb40010  lw          $s4, 0x10($s5)
    ctx->pc = 0x2d59ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2d59d0:
    // 0x2d59d0: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
label_2d59d4:
    if (ctx->pc == 0x2D59D4u) {
        ctx->pc = 0x2D59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59D0u;
        // 0x2d59d4: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D59D8u;
        goto label_2d59d8;
    }
    ctx->pc = 0x2D59D0u;
    {
        const bool branch_taken_0x2d59d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59D0u;
        // 0x2d59d4: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59d0) {
            ctx->pc = 0x2D5A40u;
            goto label_2d5a40;
        }
    }
    ctx->pc = 0x2D59D8u;
label_2d59d8:
    // 0x2d59d8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x2d59d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_2d59dc:
    // 0x2d59dc: 0x11200044  beqz        $t1, . + 4 + (0x44 << 2)
label_2d59e0:
    if (ctx->pc == 0x2D59E0u) {
        ctx->pc = 0x2D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59DCu;
        // 0x2d59e0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D59E4u;
        goto label_2d59e4;
    }
    ctx->pc = 0x2D59DCu;
    {
        const bool branch_taken_0x2d59dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59DCu;
        // 0x2d59e0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59dc) {
            ctx->pc = 0x2D5AF0u;
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D59E4u;
label_2d59e4:
    // 0x2d59e4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2d59e8:
    // 0x2d59e8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2d59ec:
    if (ctx->pc == 0x2D59ECu) {
        ctx->pc = 0x2D59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59E8u;
        // 0x2d59ec: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D59F0u;
        goto label_2d59f0;
    }
    ctx->pc = 0x2D59E8u;
    {
        const bool branch_taken_0x2d59e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59E8u;
        // 0x2d59ec: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59e8) {
            ctx->pc = 0x2D5AF0u;
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D59F0u;
label_2d59f0:
    // 0x2d59f0: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x2d59f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2d59f4:
    // 0x2d59f4: 0x0  nop
    ctx->pc = 0x2d59f4u;
    // NOP
label_2d59f8:
    // 0x2d59f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d59fc:
    // 0x2d59fc: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
label_2d5a00:
    if (ctx->pc == 0x2D5A00u) {
        ctx->pc = 0x2D5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59FCu;
        // 0x2d5a00: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A04u;
        goto label_2d5a04;
    }
    ctx->pc = 0x2D59FCu;
    {
        const bool branch_taken_0x2d59fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D59FCu;
        // 0x2d5a00: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d59fc) {
            ctx->pc = 0x2D5A28u;
            goto label_2d5a28;
        }
    }
    ctx->pc = 0x2D5A04u;
label_2d5a04:
    // 0x2d5a04: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2d5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2d5a08:
    // 0x2d5a08: 0x0  nop
    ctx->pc = 0x2d5a08u;
    // NOP
label_2d5a0c:
    // 0x2d5a0c: 0x0  nop
    ctx->pc = 0x2d5a0cu;
    // NOP
label_2d5a10:
    // 0x2d5a10: 0x0  nop
    ctx->pc = 0x2d5a10u;
    // NOP
label_2d5a14:
    // 0x2d5a14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_2d5a18:
    if (ctx->pc == 0x2D5A18u) {
        ctx->pc = 0x2D5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A14u;
        // 0x2d5a18: 0x8d270000  lw          $a3, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A1Cu;
        goto label_2d5a1c;
    }
    ctx->pc = 0x2D5A14u;
    {
        const bool branch_taken_0x2d5a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a14) {
            ctx->pc = 0x2D5A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A14u;
            // 0x2d5a18: 0x8d270000  lw          $a3, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d59f8;
        }
    }
    ctx->pc = 0x2D5A1Cu;
label_2d5a1c:
    // 0x2d5a1c: 0x10000034  b           . + 4 + (0x34 << 2)
label_2d5a20:
    if (ctx->pc == 0x2D5A20u) {
        ctx->pc = 0x2D5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A1Cu;
        // 0x2d5a20: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A24u;
        goto label_2d5a24;
    }
    ctx->pc = 0x2D5A1Cu;
    {
        const bool branch_taken_0x2d5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A1Cu;
        // 0x2d5a20: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a1c) {
            ctx->pc = 0x2D5AF0u;
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D5A24u;
label_2d5a24:
    // 0x2d5a24: 0x0  nop
    ctx->pc = 0x2d5a24u;
    // NOP
label_2d5a28:
    // 0x2d5a28: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2d5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2d5a2c:
    // 0x2d5a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5a30:
    // 0x2d5a30: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2d5a34:
    // 0x2d5a34: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2d5a38:
    if (ctx->pc == 0x2D5A38u) {
        ctx->pc = 0x2D5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A34u;
        // 0x2d5a38: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A3Cu;
        goto label_2d5a3c;
    }
    ctx->pc = 0x2D5A34u;
    {
        const bool branch_taken_0x2d5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A34u;
        // 0x2d5a38: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a34) {
            ctx->pc = 0x2D5AF0u;
            goto label_2d5af0;
        }
    }
    ctx->pc = 0x2D5A3Cu;
label_2d5a3c:
    // 0x2d5a3c: 0x0  nop
    ctx->pc = 0x2d5a3cu;
    // NOP
label_2d5a40:
    // 0x2d5a40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d5a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5a44:
    // 0x2d5a44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d5a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d5a48:
    // 0x2d5a48: 0xc0b3dfa  jal         func_2CF7E8
label_2d5a4c:
    if (ctx->pc == 0x2D5A4Cu) {
        ctx->pc = 0x2D5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A48u;
        // 0x2d5a4c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A50u;
        goto label_2d5a50;
    }
    ctx->pc = 0x2D5A48u;
    SET_GPR_U32(ctx, 31, 0x2D5A50u);
    ctx->pc = 0x2D5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A48u;
    // 0x2d5a4c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2D5A48u, 0x2D5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A50u;
label_2d5a50:
    // 0x2d5a50: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_2d5a54:
    if (ctx->pc == 0x2D5A54u) {
        ctx->pc = 0x2D5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A50u;
        // 0x2d5a54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A58u;
        goto label_2d5a58;
    }
    ctx->pc = 0x2D5A50u;
    {
        const bool branch_taken_0x2d5a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a50) {
            ctx->pc = 0x2D5A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A50u;
            // 0x2d5a54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AF4u;
            goto label_2d5af4;
        }
    }
    ctx->pc = 0x2D5A58u;
label_2d5a58:
    // 0x2d5a58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5a5c:
    // 0x2d5a5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d5a60:
    // 0x2d5a60: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2d5a64:
    // 0x2d5a64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5a68:
    // 0x2d5a68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2d5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d5a6c:
    // 0x2d5a6c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2d5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2d5a70:
    // 0x2d5a70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d5a74:
    // 0x2d5a74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5a78:
    // 0x2d5a78: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2d5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2d5a7c:
    // 0x2d5a7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5a80:
    // 0x2d5a80: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2d5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_2d5a84:
    // 0x2d5a84: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d5a88:
    // 0x2d5a88: 0x40f809  jalr        $v0
label_2d5a8c:
    if (ctx->pc == 0x2D5A8Cu) {
        ctx->pc = 0x2D5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A88u;
        // 0x2d5a8c: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A90u;
        goto label_2d5a90;
    }
    ctx->pc = 0x2D5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5A90u);
        ctx->pc = 0x2D5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A88u;
        // 0x2d5a8c: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A88u, 0x2D5A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5A90u;
label_2d5a90:
    // 0x2d5a90: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2d5a94:
    if (ctx->pc == 0x2D5A94u) {
        ctx->pc = 0x2D5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A90u;
        // 0x2d5a94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5A98u;
        goto label_2d5a98;
    }
    ctx->pc = 0x2D5A90u;
    {
        const bool branch_taken_0x2d5a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a90) {
            ctx->pc = 0x2D5A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5A90u;
            // 0x2d5a94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AF4u;
            goto label_2d5af4;
        }
    }
    ctx->pc = 0x2D5A98u;
label_2d5a98:
    // 0x2d5a98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5a9c:
    // 0x2d5a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d5a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5aa0:
    // 0x2d5aa0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d5aa4:
    // 0x2d5aa4: 0xc0b3dfa  jal         func_2CF7E8
label_2d5aa8:
    if (ctx->pc == 0x2D5AA8u) {
        ctx->pc = 0x2D5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AA4u;
        // 0x2d5aa8: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5AACu;
        goto label_2d5aac;
    }
    ctx->pc = 0x2D5AA4u;
    SET_GPR_U32(ctx, 31, 0x2D5AACu);
    ctx->pc = 0x2D5AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AA4u;
    // 0x2d5aa8: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E8u, 0x2D5AA4u, 0x2D5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AACu;
label_2d5aac:
    // 0x2d5aac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2d5ab0:
    if (ctx->pc == 0x2D5AB0u) {
        ctx->pc = 0x2D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AACu;
        // 0x2d5ab0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5AB4u;
        goto label_2d5ab4;
    }
    ctx->pc = 0x2D5AACu;
    {
        const bool branch_taken_0x2d5aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5aac) {
            ctx->pc = 0x2D5AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5AACu;
            // 0x2d5ab0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AF4u;
            goto label_2d5af4;
        }
    }
    ctx->pc = 0x2D5AB4u;
label_2d5ab4:
    // 0x2d5ab4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d5ab8:
    // 0x2d5ab8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d5ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5abc:
    // 0x2d5abc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5ac0:
    // 0x2d5ac0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2d5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d5ac4:
    // 0x2d5ac4: 0xc0b6098  jal         func_2D8260
label_2d5ac8:
    if (ctx->pc == 0x2D5AC8u) {
        ctx->pc = 0x2D5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AC4u;
        // 0x2d5ac8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5ACCu;
        goto label_2d5acc;
    }
    ctx->pc = 0x2D5AC4u;
    SET_GPR_U32(ctx, 31, 0x2D5ACCu);
    ctx->pc = 0x2D5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AC4u;
    // 0x2d5ac8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2D5AC4u, 0x2D5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5ACCu;
label_2d5acc:
    // 0x2d5acc: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x2d5accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2d5ad0:
    // 0x2d5ad0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5ad4:
    // 0x2d5ad4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2d5ad8:
    // 0x2d5ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d5adc:
    // 0x2d5adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ae0:
    // 0x2d5ae0: 0xacb50010  sw          $s5, 0x10($a1)
    ctx->pc = 0x2d5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 21));
label_2d5ae4:
    // 0x2d5ae4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5ae8:
    // 0x2d5ae8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d5aec:
    // 0x2d5aec: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x2d5aecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
label_2d5af0:
    // 0x2d5af0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d5af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5af4:
    // 0x2d5af4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d5af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d5af8:
    // 0x2d5af8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d5af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5afc:
    // 0x2d5afc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d5afcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5b00:
    // 0x2d5b00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d5b00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d5b04:
    // 0x2d5b04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d5b04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d5b08:
    // 0x2d5b08: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d5b08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d5b0c:
    // 0x2d5b0c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d5b0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d5b10:
    // 0x2d5b10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d5b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d5b14:
    // 0x2d5b14: 0x3e00008  jr          $ra
label_2d5b18:
    if (ctx->pc == 0x2D5B18u) {
        ctx->pc = 0x2D5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B14u;
        // 0x2d5b18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B1Cu;
        goto label_2d5b1c;
    }
    ctx->pc = 0x2D5B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B14u;
        // 0x2d5b18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5B1Cu;
label_2d5b1c:
    // 0x2d5b1c: 0x0  nop
    ctx->pc = 0x2d5b1cu;
    // NOP
    if (ctx->pc == 0x2d5b1cu) { ctx->pc = 0x2d5b20u; }
}
