#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177BA0
// Address: 0x177ba0 - 0x177cc0
void sub_00177BA0_0x177ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177BA0_0x177ba0");
#endif

    ctx->pc = 0x177ba0u;

    // 0x177ba0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177ba4: 0x844337f8  lh          $v1, 0x37F8($v0)
    ctx->pc = 0x177ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14328)));
    // 0x177ba8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177bac: 0x8442a7d0  lh          $v0, -0x5830($v0)
    ctx->pc = 0x177bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944720)));
    // 0x177bb0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x177bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x177bb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x177BB4u;
    {
        const bool branch_taken_0x177bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177bb4) {
            ctx->pc = 0x177BC4u;
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177BBCu;
    // 0x177bbc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x177BBCu;
    {
        const bool branch_taken_0x177bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177BBCu;
            // 0x177bc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bbc) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177BC4u;
label_177bc4:
    // 0x177bc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177bc8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x177bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177bcc: 0x8c45a7b0  lw          $a1, -0x5850($v0)
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944688)));
    // 0x177bd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x177bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x177bd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177bd8: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x177bdc: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177BDCu;
    {
        const bool branch_taken_0x177bdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x177bdc) {
            ctx->pc = 0x177BECu;
            goto label_177bec;
        }
    }
    ctx->pc = 0x177BE4u;
    // 0x177be4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x177BE4u;
    {
        const bool branch_taken_0x177be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177be4) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177BECu;
label_177bec:
    // 0x177bec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177bf0: 0x2484ac60  addiu       $a0, $a0, -0x53A0
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945888));
    // 0x177bf4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177bf8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x177bf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177bfc: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x177bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x177c00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C00u;
    {
        const bool branch_taken_0x177c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c00) {
            ctx->pc = 0x177C18u;
            goto label_177c18;
        }
    }
    ctx->pc = 0x177C08u;
    // 0x177c08: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x177c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177c0c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177c10: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x177C10u;
    {
        const bool branch_taken_0x177c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C10u;
            // 0x177c14: 0xa46437f8  sh          $a0, 0x37F8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14328), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c10) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177C18u;
label_177c18:
    // 0x177c18: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177c1c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x177c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177c20: 0x2484a580  addiu       $a0, $a0, -0x5A80
    ctx->pc = 0x177c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944128));
    // 0x177c24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x177c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x177c28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x177c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177c2c: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177C64u;
            goto label_177c64;
        }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177c38: 0x2442abe0  addiu       $v0, $v0, -0x5420
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x177c3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x177c40: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x177c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c44: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x177C44u;
    {
        const bool branch_taken_0x177c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c44) {
            ctx->pc = 0x177C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177C44u;
            // 0x177c48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177C4Cu;
    // 0x177c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177c50: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x177c54: 0xa44337f8  sh          $v1, 0x37F8($v0)
    ctx->pc = 0x177c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14328), (uint16_t)GPR_U32(ctx, 3));
    // 0x177c58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177c5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x177C5Cu;
    {
        const bool branch_taken_0x177c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c5c) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177C64u;
label_177c64:
    // 0x177c64: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177c68: 0x2484acf0  addiu       $a0, $a0, -0x5310
    ctx->pc = 0x177c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946032));
    // 0x177c6c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177c70: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x177c70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177c74: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x177C74u;
    {
        const bool branch_taken_0x177c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c74) {
            ctx->pc = 0x177C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177C74u;
            // 0x177c78: 0x62840  sll         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177C84u;
            goto label_177c84;
        }
    }
    ctx->pc = 0x177C7Cu;
    // 0x177c7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x177C7Cu;
    {
        const bool branch_taken_0x177c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c7c) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177C84u;
label_177c84:
    // 0x177c84: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177c88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x177c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x177c8c: 0x2484af70  addiu       $a0, $a0, -0x5090
    ctx->pc = 0x177c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946672));
    // 0x177c90: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x177c90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x177c94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x177c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x177c98: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x177c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x177c9c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C9Cu;
    {
        const bool branch_taken_0x177c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c9c) {
            ctx->pc = 0x177CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177C9Cu;
            // 0x177ca0: 0x6143c  dsll32      $v0, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177CB4u;
            goto label_177cb4;
        }
    }
    ctx->pc = 0x177CA4u;
    // 0x177ca4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x177ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177ca8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x177ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x177cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177CACu;
    {
        const bool branch_taken_0x177cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177CACu;
            // 0x177cb0: 0xa46437f8  sh          $a0, 0x37F8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14328), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cac) {
            ctx->pc = 0x177CB8u;
            goto label_177cb8;
        }
    }
    ctx->pc = 0x177CB4u;
label_177cb4:
    // 0x177cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x177cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_177cb8:
    // 0x177cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x177CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177CC0u;
    ctx->pc = 0x177cc0u;
}
