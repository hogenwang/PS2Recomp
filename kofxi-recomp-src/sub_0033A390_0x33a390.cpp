#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033A390
// Address: 0x33a390 - 0x33a510
void sub_0033A390_0x33a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A390_0x33a390");
#endif

    ctx->pc = 0x33a390u;

    // 0x33a390: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33a390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33a394: 0x90429740  lbu         $v0, -0x68C0($v0)
    ctx->pc = 0x33a394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940480)));
    // 0x33a398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A398u;
    {
        const bool branch_taken_0x33a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a398) {
            ctx->pc = 0x33A3A8u;
            goto label_33a3a8;
        }
    }
    ctx->pc = 0x33A3A0u;
    // 0x33a3a0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x33A3A0u;
    {
        const bool branch_taken_0x33a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A3A0u;
            // 0x33a3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3a0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A3A8u;
label_33a3a8:
    // 0x33a3a8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a3ac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a3b0: 0x90638ae0  lbu         $v1, -0x7520($v1)
    ctx->pc = 0x33a3b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937312)));
    // 0x33a3b4: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33a3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33a3b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3B8u;
    {
        const bool branch_taken_0x33a3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a3b8) {
            ctx->pc = 0x33A3C8u;
            goto label_33a3c8;
        }
    }
    ctx->pc = 0x33A3C0u;
    // 0x33a3c0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x33A3C0u;
    {
        const bool branch_taken_0x33a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A3C0u;
            // 0x33a3c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3c0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A3C8u;
label_33a3c8:
    // 0x33a3c8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a3cc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a3d0: 0x90638ae1  lbu         $v1, -0x751F($v1)
    ctx->pc = 0x33a3d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937313)));
    // 0x33a3d4: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x33a3d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x33a3d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3D8u;
    {
        const bool branch_taken_0x33a3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a3d8) {
            ctx->pc = 0x33A3E8u;
            goto label_33a3e8;
        }
    }
    ctx->pc = 0x33A3E0u;
    // 0x33a3e0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x33A3E0u;
    {
        const bool branch_taken_0x33a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A3E0u;
            // 0x33a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3e0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A3E8u;
label_33a3e8:
    // 0x33a3e8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a3ec: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a3f0: 0x90638ae2  lbu         $v1, -0x751E($v1)
    ctx->pc = 0x33a3f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937314)));
    // 0x33a3f4: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x33a3f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x33a3f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3F8u;
    {
        const bool branch_taken_0x33a3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a3f8) {
            ctx->pc = 0x33A408u;
            goto label_33a408;
        }
    }
    ctx->pc = 0x33A400u;
    // 0x33a400: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x33A400u;
    {
        const bool branch_taken_0x33a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A400u;
            // 0x33a404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a400) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A408u;
label_33a408:
    // 0x33a408: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a40c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a410: 0x90638ae3  lbu         $v1, -0x751D($v1)
    ctx->pc = 0x33a410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937315)));
    // 0x33a414: 0x9042b243  lbu         $v0, -0x4DBD($v0)
    ctx->pc = 0x33a414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x33a418: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A418u;
    {
        const bool branch_taken_0x33a418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a418) {
            ctx->pc = 0x33A428u;
            goto label_33a428;
        }
    }
    ctx->pc = 0x33A420u;
    // 0x33a420: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x33A420u;
    {
        const bool branch_taken_0x33a420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A420u;
            // 0x33a424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a420) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A428u;
label_33a428:
    // 0x33a428: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a42c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a430: 0x90638ae4  lbu         $v1, -0x751C($v1)
    ctx->pc = 0x33a430u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937316)));
    // 0x33a434: 0x9042b244  lbu         $v0, -0x4DBC($v0)
    ctx->pc = 0x33a434u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x33a438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A438u;
    {
        const bool branch_taken_0x33a438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a438) {
            ctx->pc = 0x33A448u;
            goto label_33a448;
        }
    }
    ctx->pc = 0x33A440u;
    // 0x33a440: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33A440u;
    {
        const bool branch_taken_0x33a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A440u;
            // 0x33a444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a440) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A448u;
label_33a448:
    // 0x33a448: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a44c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a450: 0x90638ae5  lbu         $v1, -0x751B($v1)
    ctx->pc = 0x33a450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937317)));
    // 0x33a454: 0x9042b245  lbu         $v0, -0x4DBB($v0)
    ctx->pc = 0x33a454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x33a458: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A458u;
    {
        const bool branch_taken_0x33a458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a458) {
            ctx->pc = 0x33A468u;
            goto label_33a468;
        }
    }
    ctx->pc = 0x33A460u;
    // 0x33a460: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x33A460u;
    {
        const bool branch_taken_0x33a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A460u;
            // 0x33a464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a460) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A468u;
label_33a468:
    // 0x33a468: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a46c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a470: 0x90638ae6  lbu         $v1, -0x751A($v1)
    ctx->pc = 0x33a470u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937318)));
    // 0x33a474: 0x9042b246  lbu         $v0, -0x4DBA($v0)
    ctx->pc = 0x33a474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947398)));
    // 0x33a478: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A478u;
    {
        const bool branch_taken_0x33a478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a478) {
            ctx->pc = 0x33A488u;
            goto label_33a488;
        }
    }
    ctx->pc = 0x33A480u;
    // 0x33a480: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33A480u;
    {
        const bool branch_taken_0x33a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A480u;
            // 0x33a484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a480) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A488u;
label_33a488:
    // 0x33a488: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a48c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a490: 0x90638ae7  lbu         $v1, -0x7519($v1)
    ctx->pc = 0x33a490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937319)));
    // 0x33a494: 0x9042b247  lbu         $v0, -0x4DB9($v0)
    ctx->pc = 0x33a494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947399)));
    // 0x33a498: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A498u;
    {
        const bool branch_taken_0x33a498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a498) {
            ctx->pc = 0x33A4A8u;
            goto label_33a4a8;
        }
    }
    ctx->pc = 0x33A4A0u;
    // 0x33a4a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33A4A0u;
    {
        const bool branch_taken_0x33a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4A0u;
            // 0x33a4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4a0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A4A8u;
label_33a4a8:
    // 0x33a4a8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a4ac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a4b0: 0x90638ae8  lbu         $v1, -0x7518($v1)
    ctx->pc = 0x33a4b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937320)));
    // 0x33a4b4: 0x9042b248  lbu         $v0, -0x4DB8($v0)
    ctx->pc = 0x33a4b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947400)));
    // 0x33a4b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A4B8u;
    {
        const bool branch_taken_0x33a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a4b8) {
            ctx->pc = 0x33A4C8u;
            goto label_33a4c8;
        }
    }
    ctx->pc = 0x33A4C0u;
    // 0x33a4c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33A4C0u;
    {
        const bool branch_taken_0x33a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4C0u;
            // 0x33a4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4c0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A4C8u;
label_33a4c8:
    // 0x33a4c8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a4cc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a4d0: 0x90638ae9  lbu         $v1, -0x7517($v1)
    ctx->pc = 0x33a4d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937321)));
    // 0x33a4d4: 0x9042b249  lbu         $v0, -0x4DB7($v0)
    ctx->pc = 0x33a4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x33a4d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A4D8u;
    {
        const bool branch_taken_0x33a4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33a4d8) {
            ctx->pc = 0x33A4E8u;
            goto label_33a4e8;
        }
    }
    ctx->pc = 0x33A4E0u;
    // 0x33a4e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33A4E0u;
    {
        const bool branch_taken_0x33a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A4E0u;
            // 0x33a4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4e0) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A4E8u;
label_33a4e8:
    // 0x33a4e8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33a4ec: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33a4f0: 0x90638aea  lbu         $v1, -0x7516($v1)
    ctx->pc = 0x33a4f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294937322)));
    // 0x33a4f4: 0x9042b24a  lbu         $v0, -0x4DB6($v0)
    ctx->pc = 0x33a4f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947402)));
    // 0x33a4f8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x33a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x33a4fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33a4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33a500:
    // 0x33a500: 0x3e00008  jr          $ra
    ctx->pc = 0x33A500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A508u;
    // 0x33a508: 0x0  nop
    ctx->pc = 0x33a508u;
    // NOP
    // 0x33a50c: 0x0  nop
    ctx->pc = 0x33a50cu;
    // NOP
    ctx->pc = 0x33a510u;
}
