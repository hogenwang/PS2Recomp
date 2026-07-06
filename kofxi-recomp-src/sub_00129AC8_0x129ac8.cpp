#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129AC8
// Address: 0x129ac8 - 0x129b68
void sub_00129AC8_0x129ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129AC8_0x129ac8");
#endif

    switch (ctx->pc) {
        case 0x129ad0u: goto label_129ad0;
        case 0x129b20u: goto label_129b20;
        case 0x129b60u: goto label_129b60;
        default: break;
    }

    ctx->pc = 0x129ac8u;

    // 0x129ac8: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x129acc: 0x25e8b7c8  addiu       $t0, $t7, -0x4838
    ctx->pc = 0x129accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_129ad0:
    // 0x129ad0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x129ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129ad4: 0x27e00  sll         $t7, $v0, 24
    ctx->pc = 0x129ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x129ad8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x129adc: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x129ae0: 0x1e86821  addu        $t5, $t7, $t0
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x129ae4: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x129AE4u;
    {
        const bool branch_taken_0x129ae4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AE4u;
            // 0x129ae8: 0x25ea0020  addiu       $t2, $t7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ae4) {
            ctx->pc = 0x129B60u;
            goto label_129b60;
        }
    }
    ctx->pc = 0x129AECu;
    // 0x129aec: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x129aecu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129af0: 0x91ad0000  lbu         $t5, 0x0($t5)
    ctx->pc = 0x129af0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x129af4: 0x96600  sll         $t4, $t1, 24
    ctx->pc = 0x129af4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x129af8: 0xc6603  sra         $t4, $t4, 24
    ctx->pc = 0x129af8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 24));
    // 0x129afc: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x129b00: 0x1885821  addu        $t3, $t4, $t0
    ctx->pc = 0x129b00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x129b04: 0x1ed500a  movz        $t2, $t7, $t5
    ctx->pc = 0x129b04u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 15));
    // 0x129b08: 0x916f0000  lbu         $t7, 0x0($t3)
    ctx->pc = 0x129b08u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x129b0c: 0x258e0020  addiu       $t6, $t4, 0x20
    ctx->pc = 0x129b0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x129b10: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x129b14: 0x18f700a  movz        $t6, $t4, $t7
    ctx->pc = 0x129b14u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 12));
    // 0x129b18: 0x114effed  beq         $t2, $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x129B18u;
    {
        const bool branch_taken_0x129b18 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        ctx->pc = 0x129B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B18u;
            // 0x129b1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b18) {
            ctx->pc = 0x129AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129ad0;
        }
    }
    ctx->pc = 0x129B20u;
label_129b20:
    // 0x129b20: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x129b20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x129b24: 0x312d00ff  andi        $t5, $t1, 0xFF
    ctx->pc = 0x129b24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x129b28: 0x25efb7c8  addiu       $t7, $t7, -0x4838
    ctx->pc = 0x129b28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x129b2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x129b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x129b30: 0x1af6021  addu        $t4, $t5, $t7
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x129b34: 0x244a0020  addiu       $t2, $v0, 0x20
    ctx->pc = 0x129b34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x129b38: 0x4f7821  addu        $t7, $v0, $t7
    ctx->pc = 0x129b38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x129b3c: 0x25ab0020  addiu       $t3, $t5, 0x20
    ctx->pc = 0x129b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x129b40: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x129b40u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129b44: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x129b44u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x129b48: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x129b48u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x129b4c: 0x14e100b  movn        $v0, $t2, $t6
    ctx->pc = 0x129b4cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x129b50: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x129b50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x129b54: 0x16f680b  movn        $t5, $t3, $t7
    ctx->pc = 0x129b54u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 11));
    // 0x129b58: 0x3e00008  jr          $ra
    ctx->pc = 0x129B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B58u;
            // 0x129b5c: 0x4d1023  subu        $v0, $v0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129B60u;
label_129b60:
    // 0x129b60: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x129B60u;
    {
        const bool branch_taken_0x129b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B60u;
            // 0x129b64: 0x90a90000  lbu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b60) {
            ctx->pc = 0x129B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b20;
        }
    }
    ctx->pc = 0x129B68u;
    ctx->pc = 0x129b68u;
}
