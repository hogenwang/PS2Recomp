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

// Function: sub_00187E30
// Address: 0x187e30 - 0x188220
void sub_00187E30_0x187e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E30_0x187e30");
#endif

    switch (ctx->pc) {
        case 0x187ed4u: goto label_187ed4;
        case 0x188034u: goto label_188034;
        case 0x1880e0u: goto label_1880e0;
        case 0x188140u: goto label_188140;
        case 0x18818cu: goto label_18818c;
        case 0x188198u: goto label_188198;
        case 0x1881e4u: goto label_1881e4;
        default: break;
    }

    ctx->pc = 0x187e30u;

    // 0x187e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187e34: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x187e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187e3c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x187e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187e48: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187e4c: 0x249004a6  addiu       $s0, $a0, 0x4A6
    ctx->pc = 0x187e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
    // 0x187e50: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187e54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x187e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x187e58: 0x30c4000c  andi        $a0, $a2, 0xC
    ctx->pc = 0x187e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x187e5c: 0x30c60030  andi        $a2, $a2, 0x30
    ctx->pc = 0x187e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x187e60: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x187e64: 0x63902  srl         $a3, $a2, 4
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x187e68: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x187e6c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x187e70: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x187e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187e74: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x187e78: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187e7c: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x187e80: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x187E80u;
    {
        const bool branch_taken_0x187e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E80u;
        // 0x187e84: 0x92260003  lbu         $a2, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e80) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187E88u;
    // 0x187e88: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x187e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x187e8c: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x187e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x187e90: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x187e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x187e94: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x187E94u;
    {
        const bool branch_taken_0x187e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e94) {
            ctx->pc = 0x187E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187E94u;
            // 0x187e98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187F68u;
            goto label_187f68;
        }
    }
    ctx->pc = 0x187E9Cu;
    // 0x187e9c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x187ea0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x187ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x187ea4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x187ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x187ea8: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x187EA8u;
    {
        const bool branch_taken_0x187ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ea8) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187EB0u;
    // 0x187eb0: 0x14c7002c  bne         $a2, $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x187EB0u;
    {
        const bool branch_taken_0x187eb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x187eb0) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187EB8u;
    // 0x187eb8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x187eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x187ebc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x187ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x187ec0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x187ec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x187ec4: 0x54650007  bnel        $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187EC4u;
    {
        const bool branch_taken_0x187ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x187ec4) {
            ctx->pc = 0x187EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187EC4u;
            // 0x187ec8: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187EE4u;
            goto label_187ee4;
        }
    }
    ctx->pc = 0x187ECCu;
    // 0x187ecc: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x187ECCu;
    SET_GPR_U32(ctx, 31, 0x187ED4u);
    ctx->pc = 0x342EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EE0u, 0x187ECCu, 0x187ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187ED4u;
label_187ed4:
    // 0x187ed4: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x187ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x187ed8: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x187ED8u;
    {
        const bool branch_taken_0x187ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ed8) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187EE0u;
    // 0x187ee0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x187ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_187ee4:
    // 0x187ee4: 0x28a30070  slti        $v1, $a1, 0x70
    ctx->pc = 0x187ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x187ee8: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x187EE8u;
    {
        const bool branch_taken_0x187ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ee8) {
            ctx->pc = 0x187EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187EE8u;
            // 0x187eec: 0x8603002c  lh          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187F0Cu;
            goto label_187f0c;
        }
    }
    ctx->pc = 0x187EF0u;
    // 0x187ef0: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x187ef4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187F04u;
            goto label_187f04;
        }
    }
    ctx->pc = 0x187EFCu;
    // 0x187efc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x187efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x187f00: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_187f04:
    // 0x187f04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187f08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187f08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_187f0c:
    // 0x187f0c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x187f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187f10: 0x28a100e0  slti        $at, $a1, 0xE0
    ctx->pc = 0x187f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x187f14: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x187F14u;
    {
        const bool branch_taken_0x187f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F14u;
        // 0x187f18: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f14) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187F1Cu;
    // 0x187f1c: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x187f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x187f20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187f24: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x187f24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187f2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187f2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187f30: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x187F30u;
    {
        const bool branch_taken_0x187f30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187f30) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187F38u;
    // 0x187f38: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x187f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x187f3c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x187f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x187f40: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187f40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x187f44: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x187f44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x187f48: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x187f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x187f4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187f50: 0x286100e1  slti        $at, $v1, 0xE1
    ctx->pc = 0x187f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x187f54: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F54u;
    {
        const bool branch_taken_0x187f54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F54u;
        // 0x187f58: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f54) {
            ctx->pc = 0x187F64u;
            goto label_187f64;
        }
    }
    ctx->pc = 0x187F5Cu;
    // 0x187f5c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x187f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x187f60: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x187f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_187f64:
    // 0x187f64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187f68:
    // 0x187f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187f70: 0x3e00008  jr          $ra
    ctx->pc = 0x187F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F70u;
        // 0x187f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187F78u;
    // 0x187f78: 0x0  nop
    ctx->pc = 0x187f78u;
    // NOP
    // 0x187f7c: 0x0  nop
    ctx->pc = 0x187f7cu;
    // NOP
    // 0x187f80: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x187f84: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187f88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187f8c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187F8Cu;
            // 0x187f90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FB8u;
            goto label_187fb8;
        }
    }
    ctx->pc = 0x187F94u;
    // 0x187f94: 0x948300f2  lhu         $v1, 0xF2($a0)
    ctx->pc = 0x187f94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 242)));
    // 0x187f98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x187f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x187f9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x187FB4u;
            goto label_187fb4;
        }
    }
    ctx->pc = 0x187FA4u;
    // 0x187fa4: 0xa48200f2  sh          $v0, 0xF2($a0)
    ctx->pc = 0x187fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x187fa8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x187fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187FACu;
    {
        const bool branch_taken_0x187fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FACu;
        // 0x187fb0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fac) {
            ctx->pc = 0x187FB8u;
            goto label_187fb8;
        }
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187fb8:
    // 0x187fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x187FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187FC0u;
    // 0x187fc0: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x187fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x187fc4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187fc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187fcc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x187FCCu;
    {
        const bool branch_taken_0x187fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fcc) {
            ctx->pc = 0x187FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187FCCu;
            // 0x187fd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FD4u;
    // 0x187fd4: 0x948300f4  lhu         $v1, 0xF4($a0)
    ctx->pc = 0x187fd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x187fd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x187fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x187fdc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187FDCu;
    {
        const bool branch_taken_0x187fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187fdc) {
            ctx->pc = 0x187FF4u;
            goto label_187ff4;
        }
    }
    ctx->pc = 0x187FE4u;
    // 0x187fe4: 0xa48200f4  sh          $v0, 0xF4($a0)
    ctx->pc = 0x187fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x187fe8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x187fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187FECu;
    {
        const bool branch_taken_0x187fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FECu;
        // 0x187ff0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fec) {
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FF4u;
label_187ff4:
    // 0x187ff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_187ff8:
    // 0x187ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x187FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188000u;
    // 0x188000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188004: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18800c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188014: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18801c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18801Cu;
    {
        const bool branch_taken_0x18801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18801Cu;
        // 0x188020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18801c) {
            ctx->pc = 0x18802Cu;
            goto label_18802c;
        }
    }
    ctx->pc = 0x188024u;
    // 0x188024: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x188024u;
    {
        const bool branch_taken_0x188024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188024u;
        // 0x188028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188024) {
            ctx->pc = 0x188098u;
            goto label_188098;
        }
    }
    ctx->pc = 0x18802Cu;
label_18802c:
    // 0x18802c: 0xc05a734  jal         func_169CD0
    ctx->pc = 0x18802Cu;
    SET_GPR_U32(ctx, 31, 0x188034u);
    ctx->pc = 0x169CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD0u, 0x18802Cu, 0x188034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188034u;
label_188034:
    // 0x188034: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x188034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188038: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18803c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18803Cu;
    {
        const bool branch_taken_0x18803c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18803c) {
            ctx->pc = 0x18804Cu;
            goto label_18804c;
        }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x188044u;
    {
        const bool branch_taken_0x188044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188044u;
        // 0x188048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188044) {
            ctx->pc = 0x188098u;
            goto label_188098;
        }
    }
    ctx->pc = 0x18804Cu;
label_18804c:
    // 0x18804c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188050: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188054: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x188054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x188058: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x188058u;
    {
        const bool branch_taken_0x188058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x188058) {
            ctx->pc = 0x18805Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188058u;
            // 0x18805c: 0x4143c  dsll32      $v0, $a0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188094u;
            goto label_188094;
        }
    }
    ctx->pc = 0x188060u;
    // 0x188060: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x188064: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188068: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x188068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x18806c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x18806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x188070: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x188070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x188074: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188074u;
    {
        const bool branch_taken_0x188074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188074) {
            ctx->pc = 0x188090u;
            goto label_188090;
        }
    }
    ctx->pc = 0x18807Cu;
    // 0x18807c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x188080: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x188080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x188084: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x188084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x188088: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x188088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18808c: 0xac43bedc  sw          $v1, -0x4124($v0)
    ctx->pc = 0x18808cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
label_188090:
    // 0x188090: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x188090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_188094:
    // 0x188094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x188094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_188098:
    // 0x188098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18809c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18809cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1880a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1880A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1880A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880A0u;
        // 0x1880a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1880A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1880A8u;
    // 0x1880a8: 0x0  nop
    ctx->pc = 0x1880a8u;
    // NOP
    // 0x1880ac: 0x0  nop
    ctx->pc = 0x1880acu;
    // NOP
    // 0x1880b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1880b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1880b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1880b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1880b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1880bc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1880bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1880c0: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x1880c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1880c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1880c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1880C8u;
    {
        const bool branch_taken_0x1880c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1880c8) {
            ctx->pc = 0x1880D8u;
            goto label_1880d8;
        }
    }
    ctx->pc = 0x1880D0u;
    // 0x1880d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1880D0u;
    {
        const bool branch_taken_0x1880d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D0u;
        // 0x1880d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d0) {
            ctx->pc = 0x1880FCu;
            goto label_1880fc;
        }
    }
    ctx->pc = 0x1880D8u;
label_1880d8:
    // 0x1880d8: 0xc05a7d8  jal         func_169F60
    ctx->pc = 0x1880D8u;
    SET_GPR_U32(ctx, 31, 0x1880E0u);
    ctx->pc = 0x169F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F60u, 0x1880D8u, 0x1880E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880E0u;
label_1880e0:
    // 0x1880e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1880e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1880e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1880e8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1880E8u;
    {
        const bool branch_taken_0x1880e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1880e8) {
            ctx->pc = 0x1880ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1880E8u;
            // 0x1880ec: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1880F8u;
            goto label_1880f8;
        }
    }
    ctx->pc = 0x1880F0u;
    // 0x1880f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1880F0u;
    {
        const bool branch_taken_0x1880f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F0u;
        // 0x1880f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f0) {
            ctx->pc = 0x1880FCu;
            goto label_1880fc;
        }
    }
    ctx->pc = 0x1880F8u;
label_1880f8:
    // 0x1880f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1880f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1880fc:
    // 0x1880fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1880fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188100: 0x3e00008  jr          $ra
    ctx->pc = 0x188100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188100u;
        // 0x188104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188108u;
    // 0x188108: 0x0  nop
    ctx->pc = 0x188108u;
    // NOP
    // 0x18810c: 0x0  nop
    ctx->pc = 0x18810cu;
    // NOP
    // 0x188110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188114: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18811c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188120: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188128: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188128u;
    {
        const bool branch_taken_0x188128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188128) {
            ctx->pc = 0x188138u;
            goto label_188138;
        }
    }
    ctx->pc = 0x188130u;
    // 0x188130: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188130u;
    {
        const bool branch_taken_0x188130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188130u;
        // 0x188134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188130) {
            ctx->pc = 0x18815Cu;
            goto label_18815c;
        }
    }
    ctx->pc = 0x188138u;
label_188138:
    // 0x188138: 0xc05a7b4  jal         func_169ED0
    ctx->pc = 0x188138u;
    SET_GPR_U32(ctx, 31, 0x188140u);
    ctx->pc = 0x169ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169ED0u, 0x188138u, 0x188140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188140u;
label_188140:
    // 0x188140: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x188140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188144: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188148: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188148u;
    {
        const bool branch_taken_0x188148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188148) {
            ctx->pc = 0x18814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188148u;
            // 0x18814c: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188158u;
            goto label_188158;
        }
    }
    ctx->pc = 0x188150u;
    // 0x188150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188150u;
    {
        const bool branch_taken_0x188150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188150u;
        // 0x188154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188150) {
            ctx->pc = 0x18815Cu;
            goto label_18815c;
        }
    }
    ctx->pc = 0x188158u;
label_188158:
    // 0x188158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x188158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18815c:
    // 0x18815c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18815cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188160: 0x3e00008  jr          $ra
    ctx->pc = 0x188160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188160u;
        // 0x188164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188168u;
    // 0x188168: 0x0  nop
    ctx->pc = 0x188168u;
    // NOP
    // 0x18816c: 0x0  nop
    ctx->pc = 0x18816cu;
    // NOP
    // 0x188170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x188174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18817c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188184: 0xc0627b0  jal         func_189EC0
    ctx->pc = 0x188184u;
    SET_GPR_U32(ctx, 31, 0x18818Cu);
    ctx->pc = 0x188188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188184u;
    // 0x188188: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EC0u, 0x188184u, 0x18818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18818Cu;
label_18818c:
    // 0x18818c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18818cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188190: 0xc062088  jal         func_188220
    ctx->pc = 0x188190u;
    SET_GPR_U32(ctx, 31, 0x188198u);
    ctx->pc = 0x188194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188190u;
    // 0x188194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188220u, 0x188190u, 0x188198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188198u;
label_188198:
    // 0x188198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x188198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18819c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18819cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1881a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1881A0u;
    {
        const bool branch_taken_0x1881a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1881a0) {
            ctx->pc = 0x1881A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881A0u;
            // 0x1881a4: 0x92230016  lbu         $v1, 0x16($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881B0u;
            goto label_1881b0;
        }
    }
    ctx->pc = 0x1881A8u;
    // 0x1881a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1881A8u;
    {
        const bool branch_taken_0x1881a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881a8) {
            ctx->pc = 0x188204u;
            goto label_188204;
        }
    }
    ctx->pc = 0x1881B0u;
label_1881b0:
    // 0x1881b0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1881b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1881b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1881B4u;
    {
        const bool branch_taken_0x1881b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1881b4) {
            ctx->pc = 0x1881B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881B4u;
            // 0x1881b8: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881DCu;
            goto label_1881dc;
        }
    }
    ctx->pc = 0x1881BCu;
    // 0x1881bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1881bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1881c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1881C0u;
    {
        const bool branch_taken_0x1881c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1881c0) {
            ctx->pc = 0x1881D8u;
            goto label_1881d8;
        }
    }
    ctx->pc = 0x1881C8u;
    // 0x1881c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1881cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1881d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1881D0u;
    {
        const bool branch_taken_0x1881d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D0u;
        // 0x1881d4: 0xa20300f6  sb          $v1, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881d0) {
            ctx->pc = 0x188204u;
            goto label_188204;
        }
    }
    ctx->pc = 0x1881D8u;
label_1881d8:
    // 0x1881d8: 0x26040268  addiu       $a0, $s0, 0x268
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
label_1881dc:
    // 0x1881dc: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1881DCu;
    SET_GPR_U32(ctx, 31, 0x1881E4u);
    ctx->pc = 0x1601A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601A0u, 0x1881DCu, 0x1881E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1881E4u;
label_1881e4:
    // 0x1881e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1881e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1881e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1881e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1881ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1881ECu;
    {
        const bool branch_taken_0x1881ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1881ec) {
            ctx->pc = 0x1881F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1881ECu;
            // 0x1881f0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1881FCu;
            goto label_1881fc;
        }
    }
    ctx->pc = 0x1881F4u;
    // 0x1881f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1881F4u;
    {
        const bool branch_taken_0x1881f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F4u;
        // 0x1881f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881f4) {
            ctx->pc = 0x188204u;
            goto label_188204;
        }
    }
    ctx->pc = 0x1881FCu;
label_1881fc:
    // 0x1881fc: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x1881fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x188200: 0xa20300f6  sb          $v1, 0xF6($s0)
    ctx->pc = 0x188200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
label_188204:
    // 0x188204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18820c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18820cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188210: 0x3e00008  jr          $ra
    ctx->pc = 0x188210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188210u;
        // 0x188214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188218u;
    // 0x188218: 0x0  nop
    ctx->pc = 0x188218u;
    // NOP
    // 0x18821c: 0x0  nop
    ctx->pc = 0x18821cu;
    // NOP
    if (ctx->pc == 0x18821cu) { ctx->pc = 0x188220u; }
}
